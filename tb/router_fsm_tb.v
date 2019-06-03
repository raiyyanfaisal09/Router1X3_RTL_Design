module route_fsm_tb();
  reg clock,resetn,pkt_valid,fifo_full,fifo_empty_0,fifo_empty_1,fifo_empty_2,soft_reset_0,soft_reset_1,soft_reset_2,parity_done,low_pkt_valid; 
  reg [1:0]data_in;
  wire write_enb_reg,detect_add,ld_state,laf_state,lfd_state,full_state,rst_int_reg,busy;

  router_fsm dut(clock,resetn,pkt_valid,data_in,fifo_full,fifo_empty_0,fifo_empty_1,fifo_empty_2,soft_reset_0,soft_reset_1,soft_reset_2,parity_done,low_pkt_valid,write_enb_reg,detect_add,ld_state,laf_state,lfd_state,full_state,rst_int_reg,busy);
  parameter cycle=10;
   always #(cycle/2) clock=~clock;
	
	initial
	begin
	 clock=1'b0;
	 rst1;
         input_soft(1,1,1);
         @(negedge clock);
         input_soft(0,0,0);

         //1st senario
	 input_data(2'b10);
	 input_full(1,1,0,0); 
	 input_empty(1,1,1);
	 repeat(5)
	 @(negedge clock);
	 input_full(1,0,0,1);
	 repeat(6)
          @(negedge clock);
      
         //2nd senario
         rst1;
         input_data(2'b01);
	 input_full(1,1,0,0); 
	 input_empty(1,1,1);
	 repeat(5)
	 @(negedge clock);
	 input_full(1,0,1,1);
     repeat(2)
	 @(negedge clock);

         //3rd swnario
         rst1;
         input_data(2'b00);
	 input_full(1,1,1,1); 
	 input_empty(1,1,1);
	 repeat(5)
	 @(negedge clock);
	 input_full(1,0,0,0);
	 repeat(3)
	 @(negedge clock);
          input_full(0,0,0,0);
   repeat(2)
	 @(negedge clock);


        //4th swnario
          rst1;
          input_data(2'b10);
	 input_full(1,1,1,1); 
	 input_empty(1,1,1);
	 repeat(5)
	 @(negedge clock);
	 input_full(0,0,0,1);
	 repeat(3)
	 @(negedge clock);
          input_full(0,1,1,0);
         	 repeat(2)
                  @(negedge clock);

           input_full(0,0,1,0);
                  repeat(2)
	 @(negedge clock);

            //5th swnario
       rst1; input_data(2'b10);
	 input_full(1,1,1,1); 
	 input_empty(1,1,0);
	 repeat(2)
	 @(negedge clock);
          input_empty(1,1,1);
	 repeat(2)
	 @(negedge clock);

	 input_full(0,0,0,1);
	 repeat(3)
	 @(negedge clock);
          input_full(0,1,1,0);
         	 repeat(2)
                  @(negedge clock);

           input_full(0,0,1,0);

         	 repeat(2)
	 @(negedge clock);

        #100 $finish;
	end 
	 
	task rst1;
   begin
   resetn=1'b0;
   @(negedge clock);
   resetn=1'b1;
   end
  endtask
  
  task input_data(input [1:0]din);
   begin
	 data_in=din;
	 end
	 endtask

  task input_full(input pkv,ff,par_d,lpkv);
   begin
   pkt_valid=pkv;
   fifo_full=ff;
   parity_done=par_d;
	low_pkt_valid=lpkv;
   end
  endtask

  task input_empty(input e0,e1,e2);
   begin
    {fifo_empty_0,fifo_empty_1,fifo_empty_2}={e0,e1,e2};
   end
  endtask
  
  task input_soft(input s0,s1,s2);
   begin
    {soft_reset_0,soft_reset_1,soft_reset_2}={s0,s1,s2};
   end
  endtask
  
 /*initial
$monitor($time,"") */
endmodule
