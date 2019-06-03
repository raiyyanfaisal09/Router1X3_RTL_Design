module router_sync_tb();
reg clock,resetn,detect_add,full_0,full_1,full_2,empty_0,empty_1,empty_2,write_enb_reg,read_enb_0,read_enb_1,read_enb_2;
reg [1:0]data_in;
wire fifo_full,soft_reset_0,soft_reset_1,soft_reset_2;
wire vld_out_0,vld_out_1,vld_out_2;
wire [2:0]write_enb;
parameter cycle=10;
router_sync dut(clock,resetn,data_in,detect_add,full_0,full_1,full_2,empty_0,empty_1,empty_2,write_enb_reg,read_enb_0,read_enb_1,read_enb_2,write_enb,fifo_full,vld_out_0,vld_out_1,vld_out_2,soft_reset_0,soft_reset_1,soft_reset_2);

 always #(cycle/2) clock=~clock;

 initial
   begin
     clock=1'b0;
     rst1;
     input_data(1,1,2'b01);
     @(negedge clock)
     input_full(1,1,0);
     input_read_enb(0,1,1);
     input_data(0,1,2'b01);
     input_empty(0,0,1);

  
     repeat(30)
     @(negedge clock);
     input_empty(0,0,1);
     repeat(4)
     @(negedge clock);
      input_full(1,1,0);
     input_read_enb(1,1,1);
     input_data(1,1,2'b01);
     #100 $finish;
   end


  task rst1;
   begin
   resetn=1'b0;
   @(negedge clock);
   resetn=1'b1;
   end
  endtask

  task input_full(input f0,f1,f2);
   begin
   full_0=f0;
   full_1=f1;
   full_2=f2;
   end
  endtask

  task input_empty(input e0,e1,e2);
   begin
    {empty_0,empty_1,empty_2}={e0,e1,e2};
   end
  endtask

  task input_read_enb(r0,r1,r2);
   begin
      read_enb_0=r0; 
      read_enb_1=r1;
      read_enb_2=r2;
   end
  endtask

  task input_data(input d0,d1, input [1:0]d2);
    begin
      detect_add=d0;
      write_enb_reg=d1;
      data_in=d2;
    end
   endtask

 initial
  begin
$monitor($time,"clock=%b,resetn=%b,data_in=%b,detect_add=%b,full_0=%b,full_1=%b,full_2=%b,empty_0=%b,empty_1=%b,empty_2=%b,write_enb_reg=%b,read_enb_0=%b,read_enb_1=%b,read_enb_2=%b,write_enb=%b,fifo_full=%b,vld_out_0=%b,vld_out_1=%b,vld_out_2=%b,soft_reset_0=%b,soft_reset_1=%b,soft_reset_2=%b",clock,resetn,data_in,detect_add,full_0,full_1,full_2,empty_0,empty_1,empty_2,write_enb_reg,read_enb_0,read_enb_1,read_enb_2,write_enb,fifo_full,vld_out_0,vld_out_1,vld_out_2,soft_reset_0,soft_reset_1,soft_reset_2) ;
  end
endmodule



