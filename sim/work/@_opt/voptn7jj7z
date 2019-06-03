library verilog;
use verilog.vl_types.all;
entity router_fifo is
    generic(
        RAM_WIDTH       : integer := 8;
        RAM_DEPTH       : integer := 16;
        ADDR_SIZE       : integer := 5
    );
    port(
        clock           : in     vl_logic;
        resetn          : in     vl_logic;
        din             : in     vl_logic_vector;
        read_enb        : in     vl_logic;
        write_enb       : in     vl_logic;
        lfd_state       : in     vl_logic;
        soft_reset      : in     vl_logic;
        data_out        : out    vl_logic_vector;
        full            : out    vl_logic;
        empty           : out    vl_logic
    );
    attribute mti_svvh_generic_type : integer;
    attribute mti_svvh_generic_type of RAM_WIDTH : constant is 1;
    attribute mti_svvh_generic_type of RAM_DEPTH : constant is 1;
    attribute mti_svvh_generic_type of ADDR_SIZE : constant is 1;
end router_fifo;
