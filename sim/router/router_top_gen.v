module router_top_gen(clock,resetn,pkt_valid,read_enb_0,read_enb_1,read_enb_2,data_in,data_out_1,data_out_2,data_out_0,vld_out_0,vld_out_1,vld_out_2,err,busy);

 input clock,resetn,pkt_valid,read_enb_0,read_enb_1,read_enb_2;
 input [7:0]data_in;
 output [7:0]data_out_1,data_out_2,data_out_0;
 output vld_out_0,vld_out_1,vld_out_2;
 output  err,busy;
 wire [7:0]dout;
 wire [2:0]write_enb;
 
 wire [2:0]soft_reset,full;
  wire [7:0]data_out;
  wire [2:0]read_enb;
 
 
 router_fsm fsm1(clock,resetn,pkt_valid,data_in[1:0],fifo_full,empty_0,empty_1,empty_2,soft_reset_0,soft_reset_1,soft_reset_2,parity_done,low_pkt_valid,write_enb_reg,detect_add,ld_state,laf_state,lfd_state,full_state,rst_int_reg,busy);


 router_sync synchronizer(clock,resetn,data_in[1:0],detect_add,full_0,full_1,full_2,empty_0,empty_1,empty_2,write_enb_reg,read_enb_0,read_enb_1,read_enb_2,write_enb,fifo_full,vld_out_0,vld_out_1,vld_out_2,soft_reset_0,soft_reset_1,soft_reset_2);

 router_reg r1(clock,resetn,pkt_valid,data_in,fifo_full,detect_add,ld_state,laf_state,full_state,lfd_state,rst_int_reg,err,parity_done,low_pkt_valid,dout);

 //router_fifo fifo0(.clock(clock),.resetn(resetn),.din(dout),.read_enb(read_enb_0),.write_enb(write_enb[0]),.lfd_state(lfd_state),.soft_reset(soft_reset_0),.data_out(data_out_0),.full(full_0),.empty(empty_0));
 //router_fifo fifo1(.clock(clock),.resetn(resetn),.din(dout),.read_enb(read_enb_1),.write_enb(write_enb[1]),.lfd_state(lfd_state),.soft_reset(soft_reset_1),.data_out(data_out_1),.full(full_1),.empty(empty_1));
 //router_fifo fifo2(.clock(clock),.resetn(resetn),.din(dout),.read_enb(read_enb_2),.write_enb(write_enb[2]),.lfd_state(lfd_state),.soft_reset(soft_reset_2),.data_out(data_out_2),.full(full_2),.empty(empty_2));

genvar i;

generate for(i=0;i<=2;i=i+1)
begin
 router_fifo fifo (.clock(clock),.resetn(resetn),.din(dout),.read_enb(read_enb[i]),
 .write_enb(write_enb[i]),.lfd_state(lfd_state),.soft_reset(soft_reset[i]),
 .data_out(data_out[i]),.full(full[i]),.empty(empty[i]);
 
end 
endgenerate





endmodule
