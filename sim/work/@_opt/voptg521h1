library verilog;
use verilog.vl_types.all;
entity router_fsm is
    generic(
        DECODE_ADDRESS  : vl_logic_vector(0 to 2) := (Hi0, Hi0, Hi0);
        WAIT_TILL_EMPTY : vl_logic_vector(0 to 2) := (Hi0, Hi0, Hi1);
        LOAD_FIRST_DATA : vl_logic_vector(0 to 2) := (Hi0, Hi1, Hi0);
        LOAD_DATA       : vl_logic_vector(0 to 2) := (Hi0, Hi1, Hi1);
        LOAD_PARITY     : vl_logic_vector(0 to 2) := (Hi1, Hi0, Hi0);
        FIFO_FULL_STATE : vl_logic_vector(0 to 2) := (Hi1, Hi0, Hi1);
        LOAD_AFTER_FULL : vl_logic_vector(0 to 2) := (Hi1, Hi1, Hi0);
        CHECK_PARITY_ERROR: vl_logic_vector(0 to 2) := (Hi1, Hi1, Hi1)
    );
    port(
        clock           : in     vl_logic;
        resetn          : in     vl_logic;
        pkt_valid       : in     vl_logic;
        data_in         : in     vl_logic_vector(1 downto 0);
        fifo_full       : in     vl_logic;
        fifo_empty_0    : in     vl_logic;
        fifo_empty_1    : in     vl_logic;
        fifo_empty_2    : in     vl_logic;
        soft_reset_0    : in     vl_logic;
        soft_reset_1    : in     vl_logic;
        soft_reset_2    : in     vl_logic;
        parity_done     : in     vl_logic;
        low_pkt_valid   : in     vl_logic;
        write_enb_reg   : out    vl_logic;
        detect_add      : out    vl_logic;
        ld_state        : out    vl_logic;
        laf_state       : out    vl_logic;
        lfd_state       : out    vl_logic;
        full_state      : out    vl_logic;
        rst_int_reg     : out    vl_logic;
        busy            : out    vl_logic
    );
    attribute mti_svvh_generic_type : integer;
    attribute mti_svvh_generic_type of DECODE_ADDRESS : constant is 1;
    attribute mti_svvh_generic_type of WAIT_TILL_EMPTY : constant is 1;
    attribute mti_svvh_generic_type of LOAD_FIRST_DATA : constant is 1;
    attribute mti_svvh_generic_type of LOAD_DATA : constant is 1;
    attribute mti_svvh_generic_type of LOAD_PARITY : constant is 1;
    attribute mti_svvh_generic_type of FIFO_FULL_STATE : constant is 1;
    attribute mti_svvh_generic_type of LOAD_AFTER_FULL : constant is 1;
    attribute mti_svvh_generic_type of CHECK_PARITY_ERROR : constant is 1;
end router_fsm;
