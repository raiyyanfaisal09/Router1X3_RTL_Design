module router_fifo_tb();
 parameter  RAM_WIDTH=8,ADDR_SIZE=5,RAM_DEPTH=16;
 reg clock,read_enb,write_enb,resetn,lfd_state,soft_reset;
 parameter cycle=10;
 reg [RAM_WIDTH-1:0]din;
wire full,empty;
 wire [RAM_WIDTH-1:0]data_out;
 router_fifo dut(clock,resetn,din,read_enb,write_enb,lfd_state,soft_reset,data_out,full,empty);
 always #(cycle/2) clock=~clock;

 initial
  begin
   clock=1'b0;soft_reset=1'b0;
   rst1;
   pkt_gen;
@(negedge clock);
soft_reset=1'b1;
read_enb=1'b1;
 #100 $finish;
end

initial
begin
rst1;
 @(negedge clock);
lfd_state=1;
@(negedge clock);
lfd_state=0;
end


 task rst1;
  begin
   resetn=1'b0;
   @(negedge clock);
   resetn=1'b1;
   end
 endtask

/* task write1;
  begin
   @(negedge clock)
     din={$random}%256;
   write_enb=1'b0;
  end
 endtask

 task read1;
  begin
   @(negedge clock);
   read_enb=1'b0;
  end
 endtask  */
integer i;
task pkt_gen;
reg [7:0]payload_data,parity,header;
reg [5:0]payload_len;
reg [1:0]addr;
begin
@(negedge clock);
write_enb=1'b1;
payload_len=1'b1+4'b1110;
addr={$random}%3;
header={payload_len,addr};
din=header;
repeat(2)
@(negedge clock);
for(i=0;i<payload_len;i=i+1)
begin
payload_data={$random}%256;
din=payload_data;
@(negedge clock);
end
parity=($random)%256;
din=parity;
end
endtask

initial
 $monitor($time,"clock=%b,resetn=%b,read_enb=%b,write_enb=%b,din=%d,lfd_state=%b,soft_reset=%b,data_out=%d,full=%d,empty=%d",clock,resetn,read_enb,write_enb,din,lfd_state,soft_reset,data_out,full,empty);

endmodule




