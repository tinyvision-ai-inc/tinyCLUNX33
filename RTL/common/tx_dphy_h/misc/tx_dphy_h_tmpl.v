    tx_dphy_h __(.ref_clk_i( ),
        .reset_n_i( ),
        .usrstdby_i( ),
        .pd_dphy_i( ),
        .byte_or_pkt_data_i( ),
        .byte_or_pkt_data_en_i( ),
        .ready_o( ),
        .vc_i( ),
        .dt_i( ),
        .wc_i( ),
        .clk_hs_en_i( ),
        .d_hs_en_i( ),
        .tinit_done_o( ),
        .pll_lock_o( ),
        .pix2byte_rstn_o( ),
        .pkt_format_ready_o( ),
        .d_hs_rdy_o( ),
        .byte_clk_o( ),
        .c2d_ready_o( ),
        .phdr_xfr_done_o( ),
        .ld_pyld_o( ),
        .clk_p_io( ),
        .clk_n_io( ),
        .d_p_io( ),
        .d_n_io( ),
        .sp_en_i( ),
        .lp_en_i( ));
