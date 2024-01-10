/*******************************************************************************
    Verilog netlist generated by IPGEN Lattice Radiant Software (64-bit)
    3.1.1.232.1
    Soft IP Version: 1.3.0
    2022 04 04 20:32:11
*******************************************************************************/
/*******************************************************************************
    Wrapper Module generated per user settings.
*******************************************************************************/
module P2B (rst_n_i, pix_clk_i, byte_clk_i, fv_i, lv_i, dvalid_i, pix_data0_i,
    c2d_ready_i, txfr_en_i, fv_start_o, fv_end_o, lv_start_o, lv_end_o,
    txfr_req_o, byte_en_o, byte_data_o, data_type_o)/* synthesis syn_black_box syn_declare_black_box=1 */;
    input  rst_n_i;
    input  pix_clk_i;
    input  byte_clk_i;
    input  fv_i;
    input  lv_i;
    input  dvalid_i;
    input  [9:0]  pix_data0_i;
    input  c2d_ready_i;
    input  txfr_en_i;
    output  fv_start_o;
    output  fv_end_o;
    output  lv_start_o;
    output  lv_end_o;
    output  txfr_req_o;
    output  byte_en_o;
    output  [7:0]  byte_data_o;
    output  [5:0]  data_type_o;
endmodule