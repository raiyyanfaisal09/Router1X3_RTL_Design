library verilog;
use verilog.vl_types.all;
entity router_top is
    port(
        clock           : in     vl_logic;
        resetn          : in     vl_logic;
        pkt_valid       : in     vl_logic;
        read_enb_0      : in     vl_logic;
        read_enb_1      : in     vl_logic;
        read_enb_2      : in     vl_logic;
        data_in         : in     vl_logic_vector(7 downto 0);
        data_out_1      : out    vl_logic_vector(7 downto 0);
        data_out_2      : out    vl_logic_vector(7 downto 0);
        data_out_0      : out    vl_logic_vector(7 downto 0);
        vld_out_0       : out    vl_logic;
        vld_out_1       : out    vl_logic;
        vld_out_2       : out    vl_logic;
        err             : out    vl_logic;
        busy            : out    vl_logic
    );
end router_top;
