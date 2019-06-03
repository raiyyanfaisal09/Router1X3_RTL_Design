module router_fifo(clock,resetn,din,read_enb,write_enb,lfd_state,soft_reset,data_out,full,empty);
 input clock,resetn,read_enb,write_enb,lfd_state,soft_reset;
 output  full,empty;
parameter RAM_WIDTH=8,RAM_DEPTH=16,ADDR_SIZE=5;
 input [RAM_WIDTH-1:0]din;
 output reg [RAM_WIDTH-1:0]data_out;
 reg [RAM_WIDTH:0]mem[RAM_DEPTH-1:0];
  reg [ADDR_SIZE-1:0]wr_addr;
 reg [ADDR_SIZE-1:0]rd_addr;
 reg [6:0]count;
 integer i;
 reg temp;
 assign full= (wr_addr=={~rd_addr[4],rd_addr[3:0]})?1'b1:1'b0;

 assign empty=(wr_addr==rd_addr)?1'b1:1'b0;
 
 always@(posedge clock)
   begin
	  if(lfd_state)
	   temp<=lfd_state;
		 else
		 temp<=0;
		 end
 always@(posedge clock)
  begin
   if(~resetn)
    begin
     for(i=0;i<16;i=i+1)
       begin
        mem[i]<=0;
        data_out<=0;
         count<=0;
  
       end
    end
  else if(soft_reset==1)
    data_out<=1'bz;
   else
    begin 
     if(write_enb && ~full)
      mem[wr_addr[3:0]]<={temp,din};
    if(read_enb && ~empty)
     begin
     if(mem[rd_addr[3:0]][8:8]==1)
        begin
          case(count)
        0:begin  
              count<=mem[rd_addr[3:0]][7:2]+1;
              data_out<=mem[rd_addr[3:0]];
          end
        default:begin
                count<=count-1;
                data_out<=mem[rd_addr[3:0]];
                end
         endcase
        end
      else 
       begin
       case(count)
        0:begin  
              
              data_out<=8'bz;
          end
        default:begin
                count<=count-1;
                data_out<=mem[rd_addr[3:0]];
                end
         endcase
        end


      end
    end
   end
 

  always @(posedge clock)
   begin
    if(~resetn||soft_reset)
    begin
     wr_addr<=0;
   end
   else
   begin

    if(write_enb && ~full)
     wr_addr<=wr_addr+1'b1;
   end
 end

  always @(posedge clock)
   begin
    if(~resetn||soft_reset)
     begin
      rd_addr<=0;
    end
    else 
 if(read_enb && ~empty)
    rd_addr<=rd_addr+1'b1;

   
 /*  if(soft_reset==1)
    data_out=1'bz;*/
end


endmodule



