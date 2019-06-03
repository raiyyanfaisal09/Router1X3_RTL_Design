module router_fsm(clock,resetn,pkt_valid,data_in,fifo_full,fifo_empty_0,fifo_empty_1,fifo_empty_2,soft_reset_0,soft_reset_1,soft_reset_2,parity_done,low_pkt_valid,write_enb_reg,detect_add,ld_state,laf_state,lfd_state,full_state,rst_int_reg,busy);
  input clock,resetn,pkt_valid,fifo_full,fifo_empty_0,fifo_empty_1,fifo_empty_2,soft_reset_0,soft_reset_1,soft_reset_2,parity_done,low_pkt_valid; 
  input [1:0]data_in;
  output write_enb_reg,detect_add,ld_state,laf_state,lfd_state,full_state,rst_int_reg;
output reg busy;
  reg [1:0]temp1;
  parameter DECODE_ADDRESS=3'b000,WAIT_TILL_EMPTY=3'b001,LOAD_FIRST_DATA=3'b010,LOAD_DATA=3'b011,LOAD_PARITY=3'b100,FIFO_FULL_STATE=3'b101,LOAD_AFTER_FULL=3'b110,CHECK_PARITY_ERROR=3'b111;


  reg [2:0]state,next_state;

  always@(posedge clock)
begin
if(detect_add)
temp1<=data_in;
end


  always @(posedge clock)
    begin
     if(~resetn)
      state<=DECODE_ADDRESS;
     else  if(soft_reset_0 && temp1==2'b00)
      state<=DECODE_ADDRESS;
     else  if(soft_reset_1 && temp1==2'b01)
      state<=DECODE_ADDRESS;
     else  if(soft_reset_2 && temp1==2'b10)
      state<=DECODE_ADDRESS;
     else 



      state<=next_state;
    end
	
  always @(*)	
     begin
	  next_state=DECODE_ADDRESS;
	    case(state)
		 
		 3'b000:begin
		         if((pkt_valid && data_in==0 && fifo_empty_0)||(pkt_valid && data_in==1 && fifo_empty_1)||(pkt_valid && data_in==2 && fifo_empty_2))
					  
					 next_state=LOAD_FIRST_DATA;
			 else if((pkt_valid && data_in==0 && ~fifo_empty_0)||(pkt_valid && data_in==1 && ~fifo_empty_1)||(pkt_valid && data_in==2 && ~fifo_empty_2))
	                      
								 next_state=WAIT_TILL_EMPTY;
								  else
								  next_state=DECODE_ADDRESS;
					end	
     
       3'b001:begin
                                      if(~fifo_empty_0 && temp1==2'b00||(~fifo_empty_0 && temp1==2'b01)||(~fifo_empty_0 && temp1==2'b10))
				           
							  next_state=WAIT_TILL_EMPTY;

		      				  else  if(fifo_empty_0 && temp1==2'b00||fifo_empty_1 && temp1==2'b01||fifo_empty_2 && temp1==2'b10)
				      
                 		 next_state=LOAD_FIRST_DATA;

							  
				  end

       3'b010:begin

              	next_state=LOAD_DATA;
				 end
   
	    3'b011:begin
	    
		        if(fifo_full)
				     next_state=FIFO_FULL_STATE;
					  else if(fifo_full==0 && pkt_valid==0)
					       
							   next_state=LOAD_PARITY;
								 else
								    
								  next_state=LOAD_DATA;

				   end
      3'b100:begin
           		next_state=CHECK_PARITY_ERROR;	
             end
      3'b101:begin
              if(fifo_full)
                next_state=FIFO_FULL_STATE;
              else
            	next_state=LOAD_AFTER_FULL;
				  end
				  
		3'b110:begin
              if(parity_done)
                 next_state=DECODE_ADDRESS;
              else if(parity_done==0&& low_pkt_valid==1)
                       next_state=LOAD_PARITY;
                       else if(parity_done==0&& low_pkt_valid==0)
                               next_state=LOAD_DATA;

              
				  end
				      
		3'b111:begin
                if(fifo_full)
        				 next_state=FIFO_FULL_STATE;
                else
                    next_state=DECODE_ADDRESS;
              end
		endcase
  end		
  
 assign detect_add= (state==DECODE_ADDRESS);
 assign lfd_state= (state==LOAD_FIRST_DATA);
 always @(state)
  begin
    case(state)
	    3'b011:busy=1'b0;
		 3'b000:busy=1'b0;
		 default:busy=1'b1;
	 endcase
  end	 
    
 assign ld_state=(state==LOAD_DATA);
 assign write_enb_reg=((state==LOAD_DATA)||state==LOAD_PARITY||state==LOAD_AFTER_FULL);
  
 /* always (posedge clock)
  begin
    case(state)
	    3'b000:temp1<=1'b0;
		 3'b001:temp1<=1'b0;
		 3'b010:temp1<=temp1;
		 3'b011
		
	 endcase
  end	 */
 assign full_state=(state==FIFO_FULL_STATE);
 assign laf_state= (state==LOAD_AFTER_FULL); 
 assign rst_int_reg=(low_pkt_valid==1'b0)? (state==CHECK_PARITY_ERROR):0;
 
 
 
endmodule    				  
				/*state,pkt_valid,data_in,fifo_full,fifo_empty_0,fifo_empty_1,fifo_empty_2,parity_done,low_pkt_valid*/		
						
							  
