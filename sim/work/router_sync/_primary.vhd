library verilog;
use verilog.vl_types.all;
entity router_sync is
    port(
        clock           : in     vl_logic;
        resetn          : in     vl_logic;
        data_in         : in     vl_logic_vector(1 downto 0);
        detect_add      : in     vl_logic;
        full_0          : in     vl_logic;
        full_1          : in     vl_logic;
        full_2          : in     vl_logic;
        empty_0         : in     vl_logic;
        empty_1         : in     vl_logic;
        empty_2         : in     vl_logic;
        write_enb_reg   : in     vl_logic;
        read_enb_0      : in     vl_logic;
        read_enb_1      : in     vl_logic;
        read_enb_2      : in     vl_logic;
        write_enb       : out    vl_logic_vector(2 downto 0);
        fifo_full       : out    vl_logic;
        vld_out_0       : out    vl_logic;
        vld_out_1       : out    vl_logic;
        vld_out_2       : out    vl_logic;
        soft_reset_0    : out    vl_logic;
        soft_reset_1    : out    vl_logic;
        soft_reset_2    : out    vl_logic
    );
end router_sync;
