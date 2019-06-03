module router_top_tb();
 reg clock,resetn,pkt_valid,read_enb_0,read_enb_1,read_enb_2;
 reg [7:0]data_in;
 wire [7:0]data_out_1,data_out_2,data_out_0;
 wire vld_out_0,vld_out_1,vld_out_2;
 wire  err,busy;
 parameter cycle=10;
 integer i;
router_top top1(clock,resetn,pkt_valid,read_enb_0,read_enb_1,read_enb_2,data_in,data_out_1,data_out_2,data_out_0,vld_out_0,vld_out_1,vld_out_2,err,busy);

 always #(cycle/2) clock=~clock;
 initial
  begin
   clock=1'b0;
   rst1;
   pkt_gen_14;
   repeat(8)
   @(negedge clock);
   read_enb_2=1'b1;
   #100 $finish;
  end

  task rst1;
   begin
   resetn=1'b0;
   @(negedge clock);
   resetn=1'b1;
   end
  endtask
  
 task pkt_gen_14;
 
  reg [7:0]payload_data,parity,header;
  reg [5:0]payload_len;
  reg [1:0]addr;
  begin
  @(negedge clock)
  wait(~busy)
  payload_len=16;
  addr={$random}%3;
  header={payload_len,addr};
  parity=0;
  pkt_valid=1;

  data_in=header ;
    parity=parity^header;
  @(negedge clock)
  wait(~busy)
  for(i=0;i<payload_len;i=i+1)
    begin
      @(negedge clock)
        wait(~busy)
         payload_data={$random}%256;
            data_in=payload_data;
            parity=data_in^parity;
    end
	  read_enb_2=1'b1;
  @(negedge clock)
    wait(~busy)
      pkt_valid=0;
      data_in=parity;
   
   end
 endtask
endmodule
