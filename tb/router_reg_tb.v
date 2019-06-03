module router_reg_tb();
  reg clock,resetn,pkt_valid,fifo_full,detect_add,ld_state,laf_state,full_state,lfd_state,rst_int_reg;
  reg [7:0]data_in;
  wire err,parity_done,low_pkt_valid;
  wire [7:0]dout;
  router_reg dut(clock,resetn,pkt_valid,data_in,fifo_full,detect_add,ld_state,laf_state,full_state,lfd_state,rst_int_reg,err,parity_done,low_pkt_valid,dout);
  parameter cycle=10;
  integer i;
  always #(cycle/2) clock=~clock;
  initial
   begin
  clock=0;
  rst1();
     detectaddress(0);
     loadfirstdata(0);
     fullstate1(0);
     fifofull1(0);
     loadafterdata(0);
     loadstate(0) ;
      rst_int(0);

         pkt_gen;
 
   repeat(2)
   @(negedge clock);

//err
rst1();
    
    pkt_gen;


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
 
task pkt_gen;
reg [7:0]payload_data,parity,header;
reg [5:0]payload_len;
reg [1:0]addr;
begin
 detectaddress(1);
 packet_valid(1);

//@(negedge clock);
payload_len=1'b1+4'b1110;
addr={$random}%3;
 header={payload_len,addr};
data_in=header;
parity=0^header;
@(negedge clock);

detectaddress(0);
loadfirstdata(1);
@(negedge clock);
loadfirstdata(0);
loadstate(1) ;
/*repeat(2)
@(negedge clock);*/
for(i=0;i<payload_len;i=i+1)
begin
payload_data={$random}%256;
data_in=payload_data;
parity=parity^data_in;
@(negedge clock);
end
fifofull1(1);
repeat(2)
@(negedge clock);
fifofull1(0);
 packet_valid(0);
//parity=($random)%256;
data_in=parity;
end
endtask
  
  
  //rst_int
  task rst_int(input rst2);
  begin
   rst_int_reg=rst2;
  end
  endtask

//packet valid
 task packet_valid(input pkt1);
  begin
  pkt_valid=pkt1;
    end
  endtask

//loadstate
 task loadstate(input ld1);
  begin
   ld_state=ld1;
    end
  endtask
//loadafterdata
 task loadafterdata(input laf1);
  begin
   laf_state=laf1;
    end
  endtask

//detect_add
 task detectaddress(input det1);
  begin
  detect_add=det1;
    end
  endtask

//fifo_full
 task fifofull1(input fifo);
  begin
    fifo_full=fifo;
    end
  endtask
//loadfirstdata
 task loadfirstdata(input lfd1);
  begin
    lfd_state=lfd1;
   end
  endtask

//fullstate
  task fullstate1(input full);
  begin
    full_state=full;
  end
  endtask
  
  endmodule
  
  
  
  
  
  
  
 
