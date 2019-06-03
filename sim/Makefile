#Makefile 
RTL = ../rtl/*.v
LIB = work 
COVOP = -coveropt 3 +cover +acc
TB = ../tb/router_top_gen_tb.v
INC = +incdir+../tb
VSIMOPT= -coverage -vopt work.router_top_gen_tb
VSIMCOV= coverage save -onexit -directive -cvg -codeAll clock_cov
VSIMBATCH= -c -do "$(VSIMCOV); run -all; exit"

html:
	firefox covhtmlreport/pages/__frametop.htm &

lib:
	vlib $(LIB)
	vmap work $(LIB)

comp:
	vlog -work $(LIB) $(COVOP) $(RTL) $(TB) $(INC)  

run_si:
	vsim $(VSIMOPT) $(VSIMBATCH)    
	vcover report -html clock_cov 

run_sim:
	vsim $(VSIMOPT) #$(VSIMBATCH)    
	vcover report -html clock_cov


run_gui:
	vsim $(VSIMOPT)
	
run_all: clean lib comp run_sim
run_al: clean lib comp run_si


clean:
	rm -rf modelsim.* transcript* vlog.* work vsim.wlf fcover* covhtml* clock_cov* *.txt
	clear
