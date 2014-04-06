/* Linux driver for digital TV devices equipped with B2C2 FlexcopII(b)/III
 * register descriptions
 * see flexcop.c for copyright information
 */
#ifndef __FLEXCOP_IBI_VALUE_INCLUDED__
#define __FLEXCOP_IBI_VALUE_INCLUDED__

typedef union {
	u32 raw;

	struct {
		u32 dma_0start                     : 1;
		u32 dma_0No_update                 : 1;
		u32 dma_address0                   :30;
	} dma_0x0;

	struct {
		u32 DMA_maxpackets                 : 8;
		u32 dma_addr_size                  :24;
	} dma_0x4_remap;

	struct {
		u32 dma1timer                      : 7;
		u32 unused                         : 1;
		u32 dma_addr_size                  :24;
	} dma_0x4_read;

	struct {
		u32 unused                         : 1;
		u32 dmatimer                       : 7;
		u32 dma_addr_size                  :24;
	} dma_0x4_write;

	struct {
		u32 unused                         : 2;
		u32 dma_cur_addr                   :30;
	} dma_0x8;

	struct {
		u32 dma_1start                     : 1;
		u32 remap_enable                   : 1;
		u32 dma_address1                   :30;
	} dma_0xc;

	struct {
		u32 chipaddr                       : 7;
		u32 reserved1                      : 1;
		u32 baseaddr                       : 8;
		u32 data1_reg                      : 8;
		u32 working_start                  : 1;
		u32 twoWS_rw                       : 1;
		u32 total_bytes                    : 2;
		u32 twoWS_port_reg                 : 2;
		u32 no_base_addr_ack_error         : 1;
		u32 st_done                        : 1;
	} tw_sm_c_100;

	struct {
		u32 data2_reg                      : 8;
		u32 data3_reg                      : 8;
		u32 data4_reg                      : 8;
		u32 exlicit_stops                  : 1;
		u32 force_stop                     : 1;
		u32 unused                         : 6;
	} tw_sm_c_104;

	struct {
		u32 thi1                           : 6;
		u32 reserved1                      : 2;
		u32 tlo1                           : 5;
		u32 reserved2                      :19;
	} tw_sm_c_108;

	struct {
		u32 thi1                           : 6;
		u32 reserved1                      : 2;
		u32 tlo1                           : 5;
		u32 reserved2                      :19;
	} tw_sm_c_10c;

	struct {
		u32 thi1                           : 6;
		u32 reserved1                      : 2;
		u32 tlo1                           : 5;
		u32 reserved2                      :19;
	} tw_sm_c_110;

	struct {
		u32 LNB_CTLHighCount_sig           :15;
		u32 LNB_CTLLowCount_sig            :15;
		u32 LNB_CTLPrescaler_sig           : 2;
	} lnb_switch_freq_200;

	struct {
		u32 ACPI1_sig                      : 1;
		u32 ACPI3_sig                      : 1;
		u32 LNB_L_H_sig                    : 1;
		u32 Per_reset_sig                  : 1;
		u32 reserved                       :20;
		u32 Rev_N_sig_revision_hi          : 4;
		u32 Rev_N_sig_reserved1            : 2;
		u32 Rev_N_sig_caps                 : 1;
		u32 Rev_N_sig_reserved2            : 1;
	} misc_204;

	struct {
		u32 Stream1_filter_sig             : 1;
		u32 Stream2_filter_sig             : 1;
		u32 PCR_filter_sig                 : 1;
		u32 PMT_filter_sig                 : 1;
		u32 EMM_filter_sig                 : 1;
		u32 ECM_filter_sig                 : 1;
		u32 Null_filter_sig                : 1;
		u32 Mask_filter_sig                : 1;
		u32 WAN_Enable_sig                 : 1;
		u32 WAN_CA_Enable_sig              : 1;
		u32 CA_Enable_sig                  : 1;
		u32 SMC_Enable_sig                 : 1;
		u32 Per_CA_Enable_sig              : 1;
		u32 Multi2_Enable_sig              : 1;
		u32 MAC_filter_Mode_sig            : 1;
		u32 Rcv_Data_sig                   : 1;
		u32 DMA1_IRQ_Enable_sig            : 1;
		u32 DMA1_Timer_Enable_sig          : 1;
		u32 DMA2_IRQ_Enable_sig            : 1;
		u32 DMA2_Timer_Enable_sig          : 1;
		u32 DMA1_Size_IRQ_Enable_sig       : 1;
		u32 DMA2_Size_IRQ_Enable_sig       : 1;
		u32 Mailbox_from_V8_Enable_sig     : 1;
		u32 unused                         : 9;
	} ctrl_208;

	struct {
		u32 DMA1_IRQ_Status                : 1;
		u32 DMA1_Timer_Status              : 1;
		u32 DMA2_IRQ_Status                : 1;
		u32 DMA2_Timer_Status              : 1;
		u32 DMA1_Size_IRQ_Status           : 1;
		u32 DMA2_Size_IRQ_Status           : 1;
		u32 Mailbox_from_V8_Status_sig     : 1;
		u32 Data_receiver_error            : 1;
		u32 Continuity_error_flag          : 1;
		u32 LLC_SNAP_FLAG_set              : 1;
		u32 Transport_Error                : 1;
		u32 reserved                       :21;
	} irq_20c;

	struct {
		u32 reset_block_000                : 1;
		u32 reset_block_100                : 1;
		u32 reset_block_200                : 1;
		u32 reset_block_300                : 1;
		u32 reset_block_400                : 1;
		u32 reset_block_500                : 1;
		u32 reset_block_600                : 1;
		u32 reset_block_700                : 1;
		u32 Block_reset_enable             : 8;
		u32 Special_controls               :16;
	} sw_reset_210;

	struct {
		u32 vuart_oe_sig                   : 1;
		u32 v2WS_oe_sig                    : 1;
		u32 halt_V8_sig                    : 1;
		u32 section_pkg_enable_sig         : 1;
		u32 s2p_sel_sig                    : 1;
		u32 unused1                        : 3;
		u32 polarity_PS_CLK_sig            : 1;
		u32 polarity_PS_VALID_sig          : 1;
		u32 polarity_PS_SYNC_sig           : 1;
		u32 polarity_PS_ERR_sig            : 1;
		u32 unused2                        :20;
	} misc_214;

	struct {
		u32 Mailbox_from_V8                :32;
	} mbox_v8_to_host_218;

	struct {
		u32 sysramaccess_data              : 8;
		u32 sysramaccess_addr              :15;
		u32 unused                         : 7;
		u32 sysramaccess_write             : 1;
		u32 sysramaccess_busmuster         : 1;
	} mbox_host_to_v8_21c;

	struct {
		u32 Stream1_PID                    :13;
		u32 Stream1_trans                  : 1;
		u32 MAC_Multicast_filter           : 1;
		u32 debug_flag_pid_saved           : 1;
		u32 Stream2_PID                    :13;
		u32 Stream2_trans                  : 1;
		u32 debug_flag_write_status00      : 1;
		u32 debug_fifo_problem             : 1;
	} pid_filter_300;

	struct {
		u32 PCR_PID                        :13;
		u32 PCR_trans                      : 1;
		u32 debug_overrun3                 : 1;
		u32 debug_overrun2                 : 1;
		u32 PMT_PID                        :13;
		u32 PMT_trans                      : 1;
		u32 reserved                       : 2;
	} pid_filter_304;

	struct {
		u32 EMM_PID                        :13;
		u32 EMM_trans                      : 1;
		u32 EMM_filter_4                   : 1;
		u32 EMM_filter_6                   : 1;
		u32 ECM_PID                        :13;
		u32 ECM_trans                      : 1;
		u32 reserved                       : 2;
	} pid_filter_308;

	struct {
		u32 Group_PID                      :13;
		u32 Group_trans                    : 1;
		u32 unused1                        : 2;
		u32 Group_mask                     :13;
		u32 unused2                        : 3;
	} pid_filter_30c_ext_ind_0_7;

	struct {
		u32 net_master_read                :17;
		u32 unused                         :15;
	} pid_filter_30c_ext_ind_1;

	struct {
		u32 net_master_write               :17;
		u32 unused                         :15;
	} pid_filter_30c_ext_ind_2;

	struct {
		u32 next_net_master_write          :17;
		u32 unused                         :15;
	} pid_filter_30c_ext_ind_3;

	struct {
		u32 unused1                        : 1;
		u32 state_write                    :10;
		u32 reserved1                      : 6;
		u32 stack_read                     :10;
		u32 reserved2                      : 5;
	} pid_filter_30c_ext_ind_4;

	struct {
		u32 stack_cnt                      :10;
		u32 unused                         :22;
	} pid_filter_30c_ext_ind_5;

	struct {
		u32 pid_fsm_save_reg0              : 2;
		u32 pid_fsm_save_reg1              : 2;
		u32 pid_fsm_save_reg2              : 2;
		u32 pid_fsm_save_reg3              : 2;
		u32 pid_fsm_save_reg4              : 2;
		u32 pid_fsm_save_reg300            : 2;
		u32 write_status1                  : 2;
		u32 write_status4                  : 2;
		u32 data_size_reg                  :12;
		u32 unused                         : 4;
	} pid_filter_30c_ext_ind_6;

	struct {
		u32 index_reg                      : 5;
		u32 extra_index_reg                : 3;
		u32 AB_select                      : 1;
		u32 pass_alltables                 : 1;
		u32 unused                         :22;
	} index_reg_310;

	struct {
		u32 PID                            :13;
		u32 PID_trans                      : 1;
		u32 PID_enable_bit                 : 1;
		u32 reserved                       :17;
	} pid_n_reg_314;

	struct {
		u32 A4_byte                        : 8;
		u32 A5_byte                        : 8;
		u32 A6_byte                        : 8;
		u32 Enable_bit                     : 1;
		u32 HighAB_bit                     : 1;
		u32 reserved                       : 6;
	} mac_low_reg_318;

	struct {
		u32 A1_byte                        : 8;
		u32 A2_byte                        : 8;
		u32 A3_byte                        : 8;
		u32 reserved                       : 8;
	} mac_high_reg_31c;

	struct {
		u32 reserved                       :16;
		u32 data_Tag_ID                    :16;
	} data_tag_400;

	struct {
		u32 Card_IDbyte6                   : 8;
		u32 Card_IDbyte5                   : 8;
		u32 Card_IDbyte4                   : 8;
		u32 Card_IDbyte3                   : 8;
	} card_id_408;

	struct {
		u32 Card_IDbyte2                   : 8;
		u32 Card_IDbyte1                   : 8;
	} card_id_40c;

	struct {
		u32 MAC1                           : 8;
		u32 MAC2                           : 8;
		u32 MAC3                           : 8;
		u32 MAC6                           : 8;
	} mac_address_418;

	struct {
		u32 MAC7                           : 8;
		u32 MAC8                           : 8;
		u32 reserved                       :16;
	} mac_address_41c;

	struct {
		u32 transmitter_data_byte          : 8;
		u32 ReceiveDataReady               : 1;
		u32 ReceiveByteFrameError          : 1;
		u32 txbuffempty                    : 1;
		u32 reserved                       :21;
	} ci_600;

	struct {
		u32 pi_d                           : 8;
		u32 pi_ha                          :20;
		u32 pi_rw                          : 1;
		u32 pi_component_reg               : 3;
	} pi_604;

	struct {
		u32 serialReset                    : 1;
		u32 oncecycle_read                 : 1;
		u32 Timer_Read_req                 : 1;
		u32 Timer_Load_req                 : 1;
		u32 timer_data                     : 7;
		u32 unused                         : 1;
		u32 Timer_addr                     : 5;
		u32 reserved                       : 3;
		u32 pcmcia_a_mod_pwr_n             : 1;
		u32 pcmcia_b_mod_pwr_n             : 1;
		u32 config_Done_stat               : 1;
		u32 config_Init_stat               : 1;
		u32 config_Prog_n                  : 1;
		u32 config_wr_n                    : 1;
		u32 config_cs_n                    : 1;
		u32 config_cclk                    : 1;
		u32 pi_CiMax_IRQ_n                 : 1;
		u32 pi_timeout_status              : 1;
		u32 pi_wait_n                      : 1;
		u32 pi_busy_n                      : 1;
	} pi_608;

	struct {
		u32 PID                            :13;
		u32 key_enable                     : 1;
		u32 key_code                       : 2;
		u32 key_array_col                  : 3;
		u32 key_array_row                  : 5;
		u32 dvb_en                         : 1;
		u32 rw_flag                        : 1;
		u32 reserved                       : 6;
	} dvb_reg_60c;

	struct {
		u32 sram_addr                      :15;
		u32 sram_rw                        : 1;
		u32 sram_data                      : 8;
		u32 sc_xfer_bit                    : 1;
		u32 reserved1                      : 3;
		u32 oe_pin_reg                     : 1;
		u32 ce_pin_reg                     : 1;
		u32 reserved2                      : 1;
		u32 start_sram_ibi                 : 1;
	} sram_ctrl_reg_700;

	struct {
		u32 net_addr_read                  :16;
		u32 net_addr_write                 :16;
	} net_buf_reg_704;

	struct {
		u32 cai_read                       :11;
		u32 reserved1                      : 5;
		u32 cai_write                      :11;
		u32 reserved2                      : 6;
		u32 cai_cnt                        : 4;
	} cai_buf_reg_708;

	struct {
		u32 cao_read                       :11;
		u32 reserved1                      : 5;
		u32 cap_write                      :11;
		u32 reserved2                      : 6;
		u32 cao_cnt                        : 4;
	} cao_buf_reg_70c;

	struct {
		u32 media_read                     :11;
		u32 reserved1                      : 5;
		u32 media_write                    :11;
		u32 reserved2                      : 6;
		u32 media_cnt                      : 4;
	} media_buf_reg_710;

	struct {
		u32 NET_Dest                       : 2;
		u32 CAI_Dest                       : 2;
		u32 CAO_Dest                       : 2;
		u32 MEDIA_Dest                     : 2;
		u32 net_ovflow_error               : 1;
		u32 media_ovflow_error             : 1;
		u32 cai_ovflow_error               : 1;
		u32 cao_ovflow_error               : 1;
		u32 ctrl_usb_wan                   : 1;
		u32 ctrl_sramdma                   : 1;
		u32 ctrl_maximumfill               : 1;
		u32 reserved                       :17;
	} sram_dest_reg_714;

	struct {
		u32 net_cnt                        :12;
		u32 reserved1                      : 4;
		u32 net_addr_read                  : 1;
		u32 reserved2                      : 3;
		u32 net_addr_write                 : 1;
		u32 reserved3                      :11;
	} net_buf_reg_718;

	struct {
		u32 wan_speed_sig                  : 2;
		u32 reserved1                      : 6;
		u32 wan_wait_state                 : 8;
		u32 sram_chip                      : 2;
		u32 sram_memmap                    : 2;
		u32 reserved2                      : 4;
		u32 wan_pkt_frame                  : 4;
		u32 reserved3                      : 4;
	} wan_ctrl_reg_71c;
} flexcop_ibi_value;

#endif
