module router_sync(clock,resetn,data_in,detect_add,full_0,full_1,full_2,empty_0,empty_1,empty_2,write_enb_reg,read_enb_0,read_enb_1,read_enb_2,write_enb,fifo_full,vld_out_0,vld_out_1,vld_out_2,soft_reset_0,soft_reset_1,soft_reset_2);
 input clock,resetn,detect_add,full_0,full_1,full_2,empty_0,empty_1,empty_2,write_enb_reg,read_enb_0,read_enb_1,read_enb_2;
reg  [4:0]count_0,count_1,count_2;
input [1:0]data_in;
output reg fifo_full,soft_reset_0,soft_reset_1,soft_reset_2;
output vld_out_0,vld_out_1,vld_out_2;
output reg [2:0]write_enb;
reg [1:0]temp;
always@(posedge clock)
begin
if(detect_add)
temp<=data_in;
end


always @(*)
begin
case(temp)
2'b00: fifo_full=full_0;
2'b01: fifo_full=full_1;
2'b10: fifo_full=full_2;
default: fifo_full=1'b0;
endcase
end


assign vld_out_0 =~empty_0;
assign vld_out_1 =~empty_1;
assign vld_out_2 =~empty_2;

  always @(*)
    
        begin
          case(write_enb_reg)
          0:write_enb<=3'b000;
          1:begin
             case(temp)
              2'b00:write_enb<=3'b001;
              2'b01:write_enb<=3'b010;
              2'b10:write_enb<=3'b100;
            default:write_enb<=3'b000;
             endcase  
            end
          endcase
     
    end


        

//soft_reset_0
 always @(posedge clock)
 begin
if(~resetn)
begin
soft_reset_0<=0;
count_0<=0;
end
else
  begin
   case( read_enb_0)
     0:begin
       case(vld_out_0)
         0:begin count_0<=0;
           soft_reset_0<=0;
           end
         1:begin
       //    count_0<= (count_0<29)? 0:count_0+1'b1;
           if(count_0==29)
            begin
           soft_reset_0<=1'b1; 
            count_0<=0;
            end
           else
             begin
             count_0<= count_0+1'b1;

             soft_reset_0<=1'b0;
             end
            end
       endcase
      end
    1:begin
    soft_reset_0<=1'b0;
    count_0<=0;
    end
  endcase
 end
end 
 

 
       


//soft_reset_1

 always @(posedge clock)
 begin
if(~resetn)
begin
soft_reset_1<=0;
count_1<=0;
end
else
  begin
   case( read_enb_1)
     0:begin
       case(vld_out_1)
         0:begin count_1<=0;
           soft_reset_1<=0;
           end
         1:begin
            if(count_1==29)
            begin
           soft_reset_1<=1'b1; 
            count_1<=0;
            end
           else
             begin
             count_1<= count_1+1'b1;

             soft_reset_1<=1'b0;
             end
            end
       endcase
      end
    1:begin
    soft_reset_1<=1'b0;
    count_1<=0;
    end
  endcase
 end
end

//soft_reset_2

 always @(posedge clock)
 begin
if(~resetn)
begin
soft_reset_2<=0;
count_2<=0;
end
else
  begin
   case( read_enb_2)
     0:begin
       case(vld_out_2)
         0:begin count_2<=0;
           soft_reset_2<=0;
           end
         1:begin
                 if(count_2==29)
            begin
           soft_reset_2<=1'b1; 
            count_2<=0;
            end
           else
             begin
             count_2<= count_2+1'b1;

             soft_reset_2<=1'b0;
             end
            end
       endcase
      end
    1:begin
    soft_reset_2<=1'b0;
    count_2<=0;
    end
  endcase
 end
end

endmodule





