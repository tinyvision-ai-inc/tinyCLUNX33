    rx_dphy_s u_rx_dphy_s(.pll_lock_i(pll_lock_i),
        .sync_clk_i(sync_clk_i),
        .sync_rst_i(sync_rst_i),
        .ready_o(ready_o),
        .clk_byte_o(clk_byte_o),
        .clk_byte_hs_o(clk_byte_hs_o),
        .clk_byte_fr_i(clk_byte_fr_i),
        .reset_n_i(reset_n_i),
        .reset_byte_n_i(reset_byte_n_i),
        .reset_byte_fr_n_i(reset_byte_fr_n_i),
        .clk_p_io(clk_p_io),
        .clk_n_io(clk_n_io),
        .d_p_io(d_p_io),
        .d_n_io(d_n_io),
        .lp_d_rx_p_o(lp_d_rx_p_o),
        .lp_d_rx_n_o(lp_d_rx_n_o),
        .bd_o(bd_o),
        .cd_clk_o(cd_clk_o),
        .cd_d0_o(cd_d0_o),
        .hs_d_en_o(hs_d_en_o),
        .hs_sync_o(hs_sync_o),
        .lp_hs_state_clk_o(lp_hs_state_clk_o),
        .lp_hs_state_d_o(lp_hs_state_d_o),
        .term_clk_en_o(term_clk_en_o),
        .term_d_en_o(term_d_en_o),
        .payload_en_o(payload_en_o),
        .payload_o(payload_o),
        .dt_o(dt_o),
        .vc_o(vc_o),
        .wc_o(wc_o),
        .ecc_o(ecc_o),
        .ref_dt_i(ref_dt_i),
        .tx_rdy_i(tx_rdy_i),
        .sp_en_o(sp_en_o),
        .lp_en_o(lp_en_o),
        .lp_av_en_o(lp_av_en_o));