module router_fifo_tb();
 parameter  RAM_WIDTH=8,ADDR_SIZE=5,RAM_DEPTH=16;
 reg clk,read_n,write_n,reset;
 parameter cycle=10;
 reg [RAM_WIDTH-1:0]data_in;
// wire [ADDR_SIZE-1:0]rd_addr,wr_addr;
 wire [RAM_WIDTH-1:0]data_out;
//integer i;
 router_fifo dut(clk,reset,data_in,read_n,write_n,data_out,full,half,empty);
 always #(cycle/2) clk=~clk;
 initial
  begin
   clk=1'b1;write_n=1'b1;read_n=1'b1;
   rst1;
   repeat(16)
   write1;
//@(negedge clk);
//write_n=1'b1;
   repeat(16)
begin
   read1;
write_n=1'b1;
end
    fork
     write1;
     read1;
    join
   #500 $finish;
  end

 task rst1;
  begin
   reset=1'b1;
   @(negedge clk);
   reset=1'b0;
   end
 endtask

 task write1;
  begin
   @(negedge clk)
  // wr_addr={$random}%16;
   data_in={$random}%256;
   write_n=1'b0;
  end
 endtask

 task read1;
  begin
   @(negedge clk);
   //rd_addr={$random}%16;
   read_n=1'b0;
  end
 endtask

initial
 $monitor($time,"clk=%b,reset=%b,read_n=%b,write_n=%b,data_in=%d,data_out=%d,full=%d,half=%d,empty=%d",clk,reset,read_n,write_n,data_in,data_out,full,half,empty);

integer channel_1;
initial
begin
channel_1=$fopen("fifowrite.txt");
$fmonitor(channel_1,$time,"clk=%b,dut.mem=%h,reset=%b,read_n=%b,write_n=%b,data_in=%d,data_out=%d,full=%d,half=%d,empty=%d",clk,dut.mem,reset,read_n,write_n,data_in,data_out,full,half,empty);

#200;

$fclose(channel_1);
end

endmodule



module router_fifo(clock,resetn,data_in,read_enb,write_enb,/*lfd_state*/,data_out,full,empty);
input clock,resetn,read_enb,write_enb/*,lfd_state*/;
output  full,empty;
input [RAM_WIDTH-1:0]data_in;
output reg [RAM_WIDTH-1:0]data_out;
reg [RAM_WIDTH-1:0]mem[RAM_DEPTH-1:0];
parameter RAM_WIDTH=8,RAM_DEPTH=16,ADDR_SIZE=5;
  reg [ADDR_SIZE-1:0]wr_addr;
reg [ADDR_SIZE-1:0]rd_addr;
integer i;
assign full= (wr_addr=={~rd_addr[4],rd_addr[3:0]})?1'b1:1'b0;

assign empty=(wr_addr==rd_addr)?1'b1:1'b0;
assign half=(rd_addr+8<=wr_addr)?1'b1:1'b0;
always@(posedge clock)
begin
if(resetn)
begin
for(i=0;i<16;i=i+1)
begin
mem[i]<=0;
data_out<=0;
end
end
else 
 begin 
  if(~write_enb && ~full)
    mem[wr_addr[3:0]]<=data_in;
  if(~read_enb && ~empty)
    data_out<=mem[rd_addr[3:0]];
  end
end

always @(posedge clock)
begin
if(resetn)
begin
wr_addr<=0;
end
else
begin
if(~write_enb && ~full)
wr_addr<=wr_addr+1'b1;
end
end

always @(posedge clock)
begin
if(resetn)
begin
rd_addr<=0;
end
else
begin
if(~read_enb && ~empty)
rd_addr<=rd_addr+1'b1;

end
end


endmodule



