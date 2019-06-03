module router_reg(clock,resetn,pkt_valid,data_in,fifo_full,detect_add,ld_state,laf_state,full_state,lfd_state,rst_int_reg,err,parity_done,low_pkt_valid,dout);
  input clock,resetn,pkt_valid,fifo_full,detect_add,ld_state,laf_state,full_state,lfd_state,rst_int_reg;
  input [7:0]data_in;
  output reg err,parity_done,low_pkt_valid;
  output reg [7:0]dout;
   reg [7:0]header_reg,fifo_full_reg,parity_reg,pkt_parity_reg;
  always @(posedge clock)
      begin
         if(~resetn|| detect_add)
            parity_done<=0;
              else if(ld_state && ~fifo_full && ~pkt_valid)
                     		parity_done<=1'b1;		
                   else if(laf_state && low_pkt_valid)
                        begin
                          if(~parity_done)								
								                  parity_done<=1'b1;
								 end
        end


  	 always @(posedge clock)
	    begin
		    if(~resetn || rst_int_reg)
			   low_pkt_valid<=0;
				else if(ld_state==1 && pkt_valid==0)
				       low_pkt_valid<=1;
						 
		 end

   	always @(posedge clock)
	    begin
                  if(~resetn)
                         begin
                           header_reg<=0;
                          fifo_full_reg<=0;
                           pkt_parity_reg<=0;
                         end

            		  else begin  if((detect_add && pkt_valid) && data_in[1:0]!=2'b11)		
                    header_reg<=data_in;
						 else 		if(~pkt_valid && ld_state)
              			                          	pkt_parity_reg<=data_in;
			                                 	 else if(ld_state && fifo_full==1)
                                                               fifo_full_reg<=data_in;

		end						
       end
 
     always @(posedge clock)
        begin
		  if(~resetn)
		      dout<=0;
		  else 
        		begin
           		  if(lfd_state)		  
					  dout<=header_reg;
					  else if(ld_state && ~fifo_full)
					     dout<=data_in;
						  else if(laf_state)
						     dout<=fifo_full_reg;
				end
       end	
		 always @(posedge clock)
         begin
		     if(~resetn)
			    parity_reg<=0;
				 else if(pkt_valid && lfd_state)
				      parity_reg<=0^header_reg;
						else if(pkt_valid && ld_state && ~full_state)
						parity_reg<=parity_reg^data_in;
			end

       always @(posedge clock)
          begin
			   if(~resetn)
				   err<=0;
				else if(parity_done)
                                                   begin
						   if(parity_reg!=pkt_parity_reg)
							   err<=1'b1;
								else
								     err<=0;
						   end
                                    else        err<=0;                            		  
  		      end

endmodule				
    
							  
						 
