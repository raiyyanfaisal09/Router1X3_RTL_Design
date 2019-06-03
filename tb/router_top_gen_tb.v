module router_top_gen_tb();
 reg clock,resetn,pkt_valid;
 reg [2:0]read_enb;
 reg [7:0]data_in;
 wire [7:0]data_out_1,data_out_2,data_out_0;
 wire vld_out_0,vld_out_1,vld_out_2;
 wire  err,busy;
 parameter cycle=10;
 event t0,t1,t2;
 integer i,count;
router_top_gen top2(clock,resetn,pkt_valid,read_enb,data_in,data_out_1,data_out_2,data_out_0,vld_out_0,vld_out_1,vld_out_2,err,busy);

 always #(cycle/2) clock=~clock;


 initial
  begin
   clock=1'b0;
   rst1;
    pkt_gen(14,2'b10);
    repeat(2)
   @(negedge clock);
     read_enb[2]=1'b1;
     /* repeat(16)
   @(negedge clock);
     read_enb[2]=1'b0;*/

   //  rst1;

      

   pkt_gen(16,2'b00);
   // repeat(2)
  // @(negedge clock);
    read_enb[0]=1'b1;
     repeat(20)
   @(negedge clock);
     read_enb[0]=1'b0;
     rst1;
   pkt_gen(17,2'b01);
   repeat(2)
   @(negedge clock);
  // wait(vld_out_2)
  // read_enb=3'b100;
  // wait(~vld_out_2)
   repeat(20)
   @(negedge clock);
    read_enb[1]=1'b0;
     @(negedge clock);

     rst1;
   pkt_gen(10,2'b00);
    repeat(4)
   @(negedge clock);
    read_enb[0]=1'b1;
    pkt_gen(10,2'b00);
    repeat(1)
   @(negedge clock);

     //   @(negedge clock);
    read_enb[0]=1'b0;

    
     rst1;
   pkt_gen(10,2'b00);
    repeat(4)
   @(negedge clock);
    read_enb[0]=1'b0;

    repeat(2)
    @(negedge clock);
     pkt_gen_rand2(2'b10);

      repeat(2)
    @(negedge clock);
     pkt_gen_rand1(2'b01);

      repeat(2)
    @(negedge clock);
     pkt_gen_rand0(2'b00);
      repeat(2)
    @(negedge clock);

 pkt_gen_rand0_0(2'b00);
  repeat(2)
    @(negedge clock);

 pkt_gen_rand1_1(2'b01);
  repeat(2)
    @(negedge clock);

 pkt_gen_rand2_2(2'b10);
 repeat(2)
    @(negedge clock);

     repeat(2)
    @(negedge clock);
     pkt_gen_rand0(2'b00);
      repeat(2)
    @(negedge clock);
     pkt_gen_ld(10,2'b01);
     repeat(2)
    @(negedge clock);
     pkt_gen_lfd(10,2'b00);
     repeat(2)
    @(negedge clock);
     pkt_gen_ld1(10,2'b01);
     repeat(2)
    @(negedge clock);

    




  #200 $finish;
  end

  task rst1;
   begin
   resetn=1'b0;
   @(negedge clock);
   resetn=1'b1;
   end
  endtask
  
 task pkt_gen(input [5:0]paydata,input [1:0]addr1);
 
  reg [7:0]payload_data,parity,header;
  reg [5:0]payload_len;
  reg [1:0]addr;
  begin
       @(negedge clock);
        wait(~busy)
     @(negedge clock);


  payload_len= paydata;
  addr=addr1;
  header={payload_len,addr};
  parity=0;
  pkt_valid=1;

  data_in=header ;
    parity=parity^header;
    count=0;
           @(negedge clock)
         wait(~busy)


  for(i=0;i<payload_len;i=i+1)
    begin
      @(negedge clock)
        wait(~busy)
         payload_data={$random}%256;
            data_in=payload_data;
            parity=data_in^parity;
            count=count+1;
            if(count==5'd17)
             ->t1;
    end
	 // read_enb[2]=1'b1;
  @(negedge clock)
    wait(~busy)
      pkt_valid=0;
    data_in=parity;
   // read_enb[2]=1'b1;

   
   end
 endtask

/*always
begin
@(t1);
read_enb[1]=1'b1;
end*/


task pkt_gen_rand0(input [1:0]addr1);
 
  reg [7:0]payload_data,parity,header;
  reg [5:0]payload_len;
  reg [1:0]addr;
  begin
  @(negedge clock)
  wait(~busy)
  payload_len= {$random}%63+1'b1;
  addr=addr1;
  header={payload_len,addr};
  parity=0;
  pkt_valid=1;

  data_in=header ;
    parity=parity^header;
    count=0;
  @(negedge clock)
  wait(~busy)
  for(i=0;i<payload_len;i=i+1)
    begin
      @(negedge clock)
        wait(~busy)
         payload_data={$random}%256;
            data_in=payload_data;
            parity=data_in^parity;
            count=count+1;
            if(count==5'd17)
             ->t0;
    end
	 // read_enb[2]=1'b1;
  @(negedge clock);
    wait(~busy)
      pkt_valid=0;
    data_in=parity;
   // read_enb[2]=1'b1;

   
   end
 endtask
 
 initial
begin
forever
begin
@(t0);
wait(vld_out_0)
 @(negedge clock);
read_enb[0]=1'b1;
wait(~vld_out_0)
read_enb[0]=1'b0;
end
end




task pkt_gen_rand1(input [1:0]addr1);
 
  reg [7:0]payload_data,parity,header;
  reg [5:0]payload_len;
  reg [1:0]addr;
  begin
  @(negedge clock)
  wait(~busy)
  payload_len= {$random}%63+1'b1;
  addr=addr1;
  header={payload_len,addr};
  parity=0;
  pkt_valid=1;

  data_in=header ;
    parity=parity^header;
    count=0;
  @(negedge clock)
  wait(~busy)
  for(i=0;i<payload_len;i=i+1)
    begin
      @(negedge clock)
        wait(~busy)
         payload_data={$random}%256;
            data_in=payload_data;
            parity=data_in^parity;
            count=count+1;
            if(count==5'd17)
             ->t1;
    end
	  //read_enb[1]=1'b1;
  @(negedge clock)
    wait(~busy)
      pkt_valid=0;
    data_in=parity;
   // read_enb[2]=1'b1;

   
   end
 endtask
 
 initial
begin
forever
begin
@(t1);
wait(vld_out_1)
 @(negedge clock);
read_enb[1]=1'b1;
wait(~vld_out_1)
read_enb[1]=1'b0;
end
end



task pkt_gen_rand2(input [1:0]addr1);
 
  reg [7:0]payload_data,parity,header;
  reg [5:0]payload_len;
  reg [1:0]addr;
  begin
  @(negedge clock)
  wait(~busy)
  payload_len= {$random}%63+1'b1;
  addr=addr1;
  header={payload_len,addr};
  parity=0;
  pkt_valid=1;

  data_in=header ;
    parity=parity^header;
    count=0;
  @(negedge clock)
  wait(~busy)
  for(i=0;i<payload_len;i=i+1)
    begin
      @(negedge clock)
        wait(~busy)
         payload_data={$random}%256;
            data_in=payload_data;
            parity=data_in^parity;
            count=count+1;
            if(count==5'd17)
             ->t2;
    end
	 // read_enb[2]=1'b1;
  @(negedge clock)
    wait(~busy)
      pkt_valid=0;
    data_in=parity;
   // read_enb[2]=1'b1;

   
   end
 endtask
 

 initial
begin
forever
begin
@(t2);
wait(vld_out_2)
 @(negedge clock);
read_enb[2]=1'b1;
wait(~vld_out_1)
read_enb[2]=1'b0;
end
end



task pkt_gen_rand0_0(input [1:0]addr1);
 
  reg [7:0]payload_data,parity,header;
  reg [5:0]payload_len;
  reg [1:0]addr;
  begin
   ->t0;

  @(negedge clock)
  wait(~busy)
  payload_len= {$random}%63+1'b1;
  addr=addr1;
  header={payload_len,addr};
  parity=0;
  pkt_valid=1;

  data_in=header ;
    parity=parity^header;
    count=0;
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
	 // read_enb[2]=1'b1;
  @(negedge clock);
    wait(~busy)
      pkt_valid=0;
    data_in=parity;
   // read_enb[2]=1'b1;

   
   end
 endtask
 

task pkt_gen_rand1_1(input [1:0]addr1);
 
  reg [7:0]payload_data,parity,header;
  reg [5:0]payload_len;
  reg [1:0]addr;
  begin
   ->t1;

  @(negedge clock)
  wait(~busy)
  payload_len= {$random}%63+1'b1;
  addr=addr1;
  header={payload_len,addr};
  parity=0;
  pkt_valid=1;

  data_in=header ;
    parity=parity^header;
    count=0;
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
	  //read_enb[1]=1'b1;
  @(negedge clock)
    wait(~busy)
      pkt_valid=0;
    data_in=parity;
   // read_enb[2]=1'b1;

   
   end
 endtask
 



task pkt_gen_rand2_2(input [1:0]addr1);
 
  reg [7:0]payload_data,parity,header;
  reg [5:0]payload_len;
  reg [1:0]addr;
  begin
    ->t2;

  @(negedge clock)
  wait(~busy)
  payload_len= {$random}%63+1'b1;
  addr=addr1;
  header={payload_len,addr};
  parity=0;
  pkt_valid=1;

  data_in=header ;
    parity=parity^header;
    count=0;
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
	 // read_enb[2]=1'b1;
  @(negedge clock)
    wait(~busy)
      pkt_valid=0;
    data_in=parity;
   // read_enb[2]=1'b1;

   
   end
 endtask
 

/* initial
   begin
     wait(~vld_out_1)
      read_enb[1]=1'b0;
   end

   initial
   begin
     wait(~vld_out_0)
      read_enb[0]=1'b0;
   end


   initial
   begin
     wait(~vld_out_2)
      read_enb[2]=1'b0;
   end*/
task pkt_gen_ld(input [5:0]paydata,input [1:0]addr1);
 
  reg [7:0]payload_data,parity,header;
  reg [5:0]payload_len;
  reg [1:0]addr;
  begin
       @(negedge clock);
        wait(~busy)
     @(negedge clock);


  payload_len= paydata;
  addr=addr1;
  header={payload_len,addr};
  parity=0;
  pkt_valid=1;

  data_in=header ;
    parity=parity^header;
    count=0;
    
           @(negedge clock)
         wait(~busy)


  for(i=0;i<payload_len;i=i+1)
    begin
      @(negedge clock)
        wait(~busy)
         payload_data={$random}%256;
            data_in=payload_data;
            parity=data_in^parity;
            
            count=count+1;
          //  rst1;
            if(count==5'd17)
             ->t1;
              @(negedge clock);
              wait(~busy)
            read_enb[1]=1'b0;
               
    end
	 // read_enb[2]=1'b1;
  @(negedge clock)
    wait(~busy)
      pkt_valid=0;
    data_in=parity;
   // read_enb[2]=1'b1;

   
   end
 endtask
task pkt_gen_lfd(input [5:0]paydata,input [1:0]addr1);
 
  reg [7:0]payload_data,parity,header;
  reg [5:0]payload_len;
  reg [1:0]addr;
  begin
  read_enb[0]=1'b1;
rst1;
       @(negedge clock);
        wait(~busy)
     @(negedge clock);


  payload_len= paydata;
  addr=addr1;
  header={payload_len,addr};
  parity=0;
  pkt_valid=1;

  data_in=header ;
    parity=parity^header;
  //  rst1;
     // @(negedge clock);
     //   wait(busy)
   //  wait(vld_out_0)
// @(negedge clock);
// rst1;

  

    count=0;
           @(negedge clock)
         wait(~busy)
//rst1;


  for(i=0;i<payload_len;i=i+1)
    begin
      @(negedge clock)
        wait(~busy)
        rst1;
         payload_data={$random}%256;
            data_in=payload_data;
            parity=data_in^parity;
            
            count=count+1;
            if(count==5'd17)
             ->t1;
              @(negedge clock);
              wait(~busy)
            read_enb[0]=1'b0;
               
    end
	 // read_enb[2]=1'b1;
  @(negedge clock)
    wait(~busy)
      pkt_valid=0;
    data_in=parity;
   // read_enb[2]=1'b1;

   
   end
endtask

task pkt_gen_ld1(input [5:0]paydata,input [1:0]addr1);
 
  reg [7:0]payload_data,parity,header;
  reg [5:0]payload_len;
  reg [1:0]addr;
  begin
       @(negedge clock);
        wait(~busy)
     @(negedge clock);


  payload_len= paydata;
  addr=addr1;
  header={payload_len,addr};
  parity=0;
  pkt_valid=1;

  data_in=header ;
    parity=parity^header;
    count=0;
    
           @(negedge clock)
         wait(~busy)


  for(i=0;i<payload_len;i=i+1)
    begin
      @(negedge clock)
        wait(~busy)
         payload_data={$random}%256;
            data_in=payload_data;
            parity=data_in^parity;
            
            count=count+1;
            rst1;
            if(count==5'd17)
             ->t1;
              @(negedge clock);
              wait(~busy)
            read_enb[1]=1'b0;
               
    end
	 // read_enb[2]=1'b1;
  @(negedge clock)
    wait(~busy)
      pkt_valid=0;
    data_in=parity;
   // read_enb[2]=1'b1;

   
   end
 endtask


endmodule


