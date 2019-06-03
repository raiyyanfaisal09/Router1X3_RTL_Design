library verilog;
use verilog.vl_types.all;
entity router_reg is
    port(
        clock           : in     vl_logic;
        resetn          : in     vl_logic;
        pkt_valid       : in     vl_logic;
        data_in         : in     vl_logic_vector(7 downto 0);
        fifo_full       : in     vl_logic;
        detect_add      : in     vl_logic;
        ld_state        : in     vl_logic;
        laf_state       : in     vl_logic;
        full_state      : in     vl_logic;
        lfd_state       : in     vl_logic;
        rst_int_reg     : in     vl_logic;
        err             : out    vl_logic;
        parity_done     : out    vl_logic;
        low_pkt_valid   : out    vl_logic;
        dout            : out    vl_logic_vector(7 downto 0)
    );
end router_reg;
