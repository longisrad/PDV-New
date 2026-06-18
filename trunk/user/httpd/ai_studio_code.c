/*
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston,
 * MA 02111-1307 USA
 */

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>

#include <notify_rc.h>
#include <ralink_boards.h>

#include "common.h"

	struct variable variables_Language[] = {
			{"preferred_lang", "", NULL, FALSE},
			{0,0,0,0}
		};

	struct variable variables_Storage_UserList[] = {
			{"acc_username", "41", NULL, FALSE},
			{"acc_password", "38", NULL, FALSE},
			{0,0,0,0}
		};

	struct variable variables_IPConnection_VSList[] = {
			{"vts_port_x", "12", NULL, FALSE},
			{"vts_ipaddr_x", "16", NULL, FALSE},
			{"vts_lport_x", "7", NULL, FALSE},
			{"vts_proto_x", "8", NULL, FALSE},
			{"vts_protono_x", "12", NULL, FALSE},
			{"vts_srcip_x", "16", NULL, FALSE},
			{"vts_desc_x", "20", NULL, FALSE},
			{0,0,0,0}
		};

	struct variable variables_FirewallConfig_LWFilterList[] = {
			{"filter_lw_srcip_x", "16", NULL, FALSE},
			{"filter_lw_srcport_x", "12", NULL, FALSE},
			{"filter_lw_dstip_x", "16", NULL, FALSE},
			{"filter_lw_dstport_x", "12", NULL, FALSE},
			{"filter_lw_proto_x", "8", NULL, FALSE},
			{"filter_lw_protono_x", "12", NULL, FALSE},
			{0,0,0,0}
		};

	struct variable variables_FirewallConfig_UrlList[] = {
			{"url_keyword_x", "36", NULL, EVM_RESTART_FIREWALL},
			{0,0,0,0}
		};

	struct variable variables_FirewallConfig_MFList[] = {
			{"macfilter_list_x", "20", NULL, FALSE},
			{"macfilter_time_x", "10", NULL, FALSE},
			{"macfilter_date_x", "10", NULL, FALSE},
			{0,0,0,0}
		};

	struct variable variables_RouterConfig_GWStatic[] = {
			{"sr_ipaddr_x", "17", NULL, FALSE},
			{"sr_netmask_x", "17", NULL, FALSE},
			{"sr_gateway_x", "17", NULL, FALSE},
			{"sr_matric_x", "5", NULL, FALSE},
			{"sr_if_x", "3", NULL, FALSE},
			{0,0,0,0}
		};

	struct variable variables_LANHostConfig_ManualDHCPList[] = {
			{"dhcp_staticmac_x", "14", NULL, FALSE},
			{"dhcp_staticip_x", "17", NULL, FALSE},
			{"dhcp_staticname_x", "24", NULL, FALSE},
			{0,0,0,0}
		};
		
	struct variable variables_KoolproxyConf_KpIPList[] = {
			{"koolproxy_mac_x", "14", NULL, FALSE},
			{"koolproxy_ip_x", "17", NULL, FALSE},
			{"koolproxy_name_x", "24", NULL, FALSE},
			{"koolproxy_ip_road", "24", NULL, FALSE},
			{0,0,0,0}
		};
	
	struct variable variables_AdbybyConf_AdIPList[] = {
			{"adbybyip_mac_x", "14", NULL, FALSE},
			{"adbybyip_ip_x", "17", NULL, FALSE},
			{"adbybyip_name_x", "24", NULL, FALSE},
			{"adbybyip_ip_road_x", "24", NULL, FALSE},
			{0,0,0,0}
		};
	struct variable variables_WyyConf_WIPList[] = {
			{"wyy_mac_x", "14", NULL, FALSE},
			{"wyy_ip_x", "17", NULL, FALSE},
			{"wyy_name_x", "24", NULL, FALSE},
			{"wyy_ip_road_x", "24", NULL, FALSE},
			{0,0,0,0}
		};
	struct variable variables_ZeroConf_ZeroList[] = {
			{"zero_enable_x", "24", NULL, FALSE},
			{"zero_ip_x", "24", NULL, FALSE},
			{"zero_route_x", "24", NULL, FALSE},
			{0,0,0,0}
		};
	struct variable variables_SspConf_SspList[] = {
			{"ssp_type_x", "24", NULL, FALSE},
			{"ssp_name_x", "24", NULL, FALSE},
			{"ssp_server_x", "24", NULL, FALSE},
			{"ssp_prot_x", "24", NULL, FALSE},
			{"ss_key_x", "24", NULL, FALSE},
			{"s5_username_x", "24", NULL, FALSE},
			{"s5_password_x", "24", NULL, FALSE},
			{"ss_method_x", "24", NULL, FALSE},
			{"ss_protocol_x", "24", NULL, FALSE},
			{"ss_proto_param_x", "24", NULL, FALSE},
			{"ss_obfs_x", "24", NULL, FALSE},
			{"ss_obfs_param_x", "24", NULL, FALSE},
			//{"ssp_local_port_x", "24", NULL, FALSE},
			{"v2_aid_x", "24", NULL, FALSE},
			{"v2_vid_x", "24", NULL, FALSE},
			{"v2_security_x", "24", NULL, FALSE},
			{"v2_net_x", "24", NULL, FALSE},
			{"v2_type_x", "24", NULL, FALSE},
			{"v2_type_tcp_x", "24", NULL, FALSE},
			{"v2_type_mkcp_x", "24", NULL, FALSE},
			{"v2_mkcp_mtu_x", "24", NULL, FALSE},
			{"v2_mkcp_tti_x", "24", NULL, FALSE},
			{"v2_mkcp_uplink_x", "24", NULL, FALSE},
			{"v2_mkcp_downlink_x", "24", NULL, FALSE},
			{"v2_mkcp_readbu_x", "24", NULL, FALSE},
			{"v2_mkcp_writebu_x", "24", NULL, FALSE},
			{"v2_mkcp_congestion_x", "24", NULL, FALSE},
			{"v2_webs_host_x", "24", NULL, FALSE},
			{"v2_webs_path_x", "24", NULL, FALSE},
			{"v2_http2_host_x", "24", NULL, FALSE},
			{"v2_http2_path_x", "24", NULL, FALSE},
			{"v2_quic_header_x", "24", NULL, FALSE},
			{"v2_quic_key_x", "24", NULL, FALSE},
			{"v2_quic_security_x", "24", NULL, FALSE},
			{"v2_tls_x", "24", NULL, FALSE},
			{"v2_flow_x", "24", NULL, FALSE},
			{"tj_tls_host_x", "24", NULL, FALSE},
			{"switch_enable_x", "24", NULL, FALSE},
			{0,0,0,0}
		};

	struct variable variables_AdbybyConf_AdRULESList[] = {
			{"adbybyrules_x", "24", NULL, FALSE},
			{"adbybyrules_road_x", "24", NULL, FALSE},
			{0,0,0,0}
		};
		
	struct variable variables_SmartdnsConf_SdnsList[] = {
			{"sdnss_enable_x", "24", NULL, FALSE},
			{"sdnss_name_x", "24", NULL, FALSE},
			{"sdnss_ip_x", "24", NULL, FALSE},
			{"sdnss_port_x", "24", NULL, FALSE},
			{"sdnss_type_x", "24", NULL, FALSE},
			{"sdnss_ipc_x", "24", NULL, FALSE},
			{"sdnss_named_x", "24", NULL, FALSE},
			{"sdnss_non_x", "24", NULL, FALSE},
			{"sdnss_ipset_x", "24", NULL, FALSE},
			{0,0,0,0}
		};
		
	struct variable variables_LANHostConfig_VPNSACLList[] = {
			{"vpns_user_x", "32", NULL, FALSE},
			{"vpns_pass_x", "32", NULL, FALSE},
			{"vpns_addr_x", "3", NULL, FALSE},
			{"vpns_rnet_x", "20", NULL, FALSE},
			{"vpns_rmsk_x", "20", NULL, FALSE},
			{0,0,0,0}
		};

#if BOARD_HAS_5G_RADIO
	struct variable variables_DeviceSecurity11a_ACLList[] = {
			{"wl_maclist_x", "32", NULL, FALSE},
			{"wl_macdesc_x", "48", NULL, FALSE},
			{0,0,0,0}
		};
#endif

	struct variable variables_DeviceSecurity11b_rt_ACLList[] = {
			{"rt_maclist_x", "32", NULL, FALSE},
			{"rt_macdesc_x", "48", NULL, FALSE},
			{0,0,0,0}
		};

#if BOARD_HAS_5G_RADIO
	struct variable variables_WLANConfig11a_RBRList[] = {
			{"wl_wdslist_x", "12", NULL, EVM_RESTART_WIFI5},
			{0,0,0,0}
		};
#endif

	struct variable variables_WLANConfig11b_rt_RBRList[] = {
			{"rt_wdslist_x", "12", NULL, EVM_RESTART_WIFI2},
			{0,0,0,0}
		};

	struct variable variables_General[] = {
			{"nvram_manual", "", NULL, FALSE},
			{"rstats_stored", "", NULL, FALSE},
			{"stime_stored", "", NULL, FALSE},
#if defined (USE_NAND_FLASH)
			{"mtd_rwfs_mount", "", NULL, FALSE},
#endif
#if defined (APP_TTYD)
			{"ttyd_enable", "", NULL, EVM_RESTART_TTYD},
			{"ttyd_port", "", NULL, EVM_RESTART_TTYD},
#endif
#if defined (APP_VLMCSD)
			{"vlmcsd_enable", "", NULL, EVM_RESTART_VLMCSD},
#endif
#if defined (APP_NAPT66)
			{"napt66_enable", "", NULL, FALSE},
#endif
			{"http_username", "", NULL, EVM_RESTART_CROND|EVM_BLOCK_UNSAFE},
			{"http_passwd", "", NULL, EVM_BLOCK_UNSAFE},
			{"modem_rule", "", NULL, EVM_RESTART_MODEM},
			{"modem_type", "", NULL, EVM_RESTART_MODEM},
			{"modem_country", "", NULL, EVM_RESTART_MODEM},
			{"modem_isp", "", NULL, EVM_RESTART_MODEM},
			{"modem_apn", "", NULL, EVM_RESTART_MODEM},
			{"modem_dialnum", "", NULL, EVM_RESTART_MODEM},
			{"modem_user", "", NULL, EVM_RESTART_MODEM},
			{"modem_pass", "", NULL, EVM_RESTART_MODEM},
			{"modem_pin", "", NULL, EVM_RESTART_MODEM},
			{"modem_dnsa", "", NULL, EVM_RESTART_MODEM},
			{"modem_node", "", NULL, EVM_RESTART_MODEM},
			{"modem_nets", "", NULL, EVM_RESTART_MODEM},
			{"modem_cmd", "", NULL, EVM_RESTART_MODEM},
			{"modem_mtu", "", NULL, EVM_RESTART_MODEM},
			{"modem_zcd", "", NULL, FALSE},
			{"di_poll_mode", "", NULL, EVM_RESTART_DI},
			{"di_timeout", "", NULL, FALSE },
			{"di_time_done", "", NULL, FALSE},
			{"di_time_fail", "", NULL, FALSE},
			{"di_lost_delay", "", NULL, FALSE},
			{"di_lost_action", "", NULL, FALSE},
			{"di_recon_pause", "", NULL, FALSE},
			{"di_addr0", "", NULL, EVM_RESTART_DI},
			{"di_addr1", "", NULL, EVM_RESTART_DI},
			{"di_addr2", "", NULL, EVM_RESTART_DI},
			{"di_addr3", "", NULL, EVM_RESTART_DI},
			{"di_addr4", "", NULL, EVM_RESTART_DI},
			{"di_addr5", "", NULL, EVM_RESTART_DI},
			{"di_port0", "", NULL, EVM_RESTART_DI},
			{"di_port1", "", NULL, EVM_RESTART_DI},
			{"di_port2", "", NULL, EVM_RESTART_DI},
			{"di_port3", "", NULL, EVM_RESTART_DI},
			{"di_port4", "", NULL, EVM_RESTART_DI},
			{"di_port5", "", NULL, EVM_RESTART_DI},
			{"ez_action_short", "", NULL, FALSE},
			{"ez_action_long", "", NULL, FALSE},
#if defined (BOARD_GPIO_BTN_FN1)
			{"fn1_action_short", "", NULL, FALSE},
			{"fn1_action_long", "", NULL, FALSE},
#endif
#if defined (BOARD_GPIO_BTN_FN2)
			{"fn2_action_short", "", NULL, FALSE},
			{"fn2_action_long", "", NULL, FALSE},
#endif
			{"front_led_all", "", NULL, EVM_RESTART_TWEAKS},
			{"front_led_wan", "", NULL, EVM_RESTART_TWEAKS},
			{"front_led_lan", "", NULL, EVM_RESTART_TWEAKS},
			{"front_led_usb", "", NULL, EVM_RESTART_TWEAKS},
			{"front_led_wif", "", NULL, EVM_RESTART_TWEAKS},
			{"front_led_pwr", "", NULL, EVM_RESTART_TWEAKS},
			{"watchdog_cpu", "", NULL, EVM_RESTART_WDG},
			{"u2ec_enable", "", NULL, EVM_RESTART_SPOOLER},
			{"lprd_enable", "", NULL, EVM_RESTART_SPOOLER},
			{"rawd_enable", "", NULL, EVM_RESTART_SPOOLER},
			{"help_enable", "", NULL, FALSE},
			{"reboot_mode", "", NULL, FALSE},
			{"reboot_schedule_enable", "", NULL, FALSE},
			{"reboot_schedule", "", NULL, FALSE},
			{"scripts.start_script.sh", "File", NULL, EVM_BLOCK_UNSAFE},
			{"scripts.started_script.sh", "File", NULL, EVM_BLOCK_UNSAFE},
			{"scripts.shutdown_script.sh", "File", NULL, EVM_BLOCK_UNSAFE},
			{"scripts.post_wan_script.sh", "File", NULL, EVM_BLOCK_UNSAFE},
			{"scripts.post_iptables_script.sh", "File", NULL, EVM_RESTART_FIREWALL|EVM_BLOCK_UNSAFE},
			{"scripts.ez_buttons_script.sh", "File", NULL, EVM_BLOCK_UNSAFE},
			{"scripts.inet_state_script.sh", "File", NULL, FALSE},
			{0,0,0,0}
		};

	struct variable variables_Storage[] = {
			{"computer_name", "", NULL, EVM_RESTART_DHCPD|EVM_RESTART_FTPD|EVM_RESTART_NMBD|EVM_RESTART_DMS|EVM_RESTART_ITUNES},
#if defined(APP_SMBD)
			{"enable_samba", "", NULL, EVM_RESTART_SMBD},
			{"st_samba_fp", "", NULL, EVM_RESTART_SYSCTL},
			{"st_samba_mode", "", NULL, EVM_RESTART_SMBD},
#endif
#if defined(APP_SMBD) || defined(APP_NMBD)
			{"st_samba_lmb", "", NULL, EVM_RESTART_NMBD},
			{"st_samba_workgroup", "", NULL, EVM_RESTART_NMBD},
#endif
#if defined(APP_SMBD) || defined(APP_FTPD)
			{"st_max_user", "", NULL, EVM_RESTART_FTPD|EVM_RESTART_SMBD},
			{"acc_num", "", NULL, EVM_RESTART_FTPD|EVM_RESTART_SMBD},
#endif
#if defined(APP_FTPD)
			{"enable_ftp", "", NULL, EVM_RESTART_FTPD},
			{"st_ftp_mode", "", NULL, EVM_RESTART_FTPD},
			{"st_ftp_log", "", NULL, EVM_RESTART_FTPD},
			{"st_ftp_pmin", "", NULL, EVM_RESTART_FTPD},
			{"st_ftp_pmax", "", NULL, EVM_RESTART_FTPD},
			{"st_ftp_anmr", "", NULL, EVM_RESTART_FTPD},
#endif
			{"achk_enable", "", NULL, FALSE},
			{"optw_enable", "", NULL, FALSE},
			{"hdd_spindt", "", NULL, EVM_RESTART_HDDTUNE},
			{"hdd_apmoff", "", NULL, EVM_RESTART_HDDTUNE},
			{"pcache_reclaim", "", NULL, EVM_RESTART_HDDTUNE},
#if defined(APP_NFSD)
			{"nfsd_enable", "", NULL, EVM_RESTART_NFSD},
#endif
#if defined(APP_MINIDLNA)
			{"apps_dms", "", NULL, EVM_RESTART_DMS},
			{"dlna_disc", "", NULL, EVM_RESTART_DMS},
			{"dlna_root", "", NULL, EVM_RESTART_DMS},
			{"dlna_sort", "", NULL, EVM_RESTART_DMS},
			{"dlna_src1", "", NULL, EVM_RESTART_DMS},
			{"dlna_src2", "", NULL, EVM_RESTART_DMS},
			{"dlna_src3", "", NULL, EVM_RESTART_DMS},
			{"dlna_rescan", "", NULL, EVM_RESTART_DMS},
#endif
#if defined(APP_FIREFLY)
			{"apps_itunes", "", NULL, EVM_RESTART_ITUNES},
#endif
#if defined(APP_TRMD)
			{"trmd_enable", "", NULL,EVM_RESTART_TRMD},
			{"trmd_pport", "", NULL, EVM_RESTART_TRMD},
			{"trmd_rport", "", NULL, EVM_RESTART_TRMD},
#endif
#if defined(APP_ARIA)
			{"aria_enable", "", NULL,EVM_RESTART_ARIA},
			{"aria_pport", "", NULL, EVM_RESTART_ARIA},
			{"aria_rport", "", NULL, EVM_RESTART_ARIA},
#endif
#if (BOARD_NUM_UPHY_USB3 > 0)
			{"usb3_disable", "", NULL, EVM_RESTART_REBOOT},
#endif
			{"Storage_UserList", "Group", ARGV((char*)variables_Storage_UserList, "16", "79", "acc_num"), EVM_RESTART_FTPD|EVM_RESTART_SMBD},
			{0,0,0,0}
		};

	struct variable variables_Layer3Forwarding[] = {
			{"x_DHCPClient", "", NULL, EVM_RESTART_WAN},
			{"wan_proto", "", NULL, EVM_RESTART_WAN},
			{"wan_stb_x", "", NULL, EVM_RESTART_SWITCH_VLAN},
			{"wan_src_phy", "", NULL, FALSE},
			{"wan_stb_iso", "", NULL, EVM_RESTART_SWITCH_VLAN},
			{"vlan_filter", "", NULL, EVM_RESTART_WAN},
			{"vlan_vid_cpu", "", NULL, EVM_RESTART_WAN},
			{"vlan_pri_cpu", "", NULL, EVM_RESTART_WAN},
			{"vlan_vid_iptv", "", NULL, EVM_RESTART_WAN},
			{"vlan_pri_iptv", "", NULL, EVM_RESTART_WAN},
			{"vlan_vid_lan1", "", NULL, EVM_RESTART_SWITCH_VLAN},
			{"vlan_pri_lan1", "", NULL, EVM_RESTART_SWITCH_VLAN},
			{"vlan_tag_lan1", "", NULL, EVM_RESTART_SWITCH_VLAN},
			{"vlan_vid_lan2", "", NULL, EVM_RESTART_SWITCH_VLAN},
			{"vlan_pri_lan2", "", NULL, EVM_RESTART_SWITCH_VLAN},
			{"vlan_tag_lan2", "", NULL, EVM_RESTART_SWITCH_VLAN},
			{"vlan_vid_lan3", "", NULL, EVM_RESTART_SWITCH_VLAN},
			{"vlan_pri_lan3", "", NULL, EVM_RESTART_SWITCH_VLAN},
			{"vlan_tag_lan3", "", NULL, EVM_RESTART_SWITCH_VLAN},
			{"vlan_vid_lan4", "", NULL, EVM_RESTART_SWITCH_VLAN},
			{"vlan_pri_lan4", "", NULL, EVM_RESTART_SWITCH_VLAN},
			{"vlan_tag_lan4", "", NULL, EVM_RESTART_SWITCH_VLAN},
			{"wan_auth_mode", "", NULL, EVM_RESTART_WAN},
			{"wan_auth_user", "", NULL, EVM_RESTART_WAN},
			{"wan_auth_pass", "", NULL, EVM_RESTART_WAN},
			{"wan_auth_host", "", NULL, EVM_RESTART_WAN},
			{"wan_ttl_fix", "", NULL, EVM_RESTART_FIREWALL},
			{"wan_ttl_value", "", NULL, EVM_RESTART_FIREWALL},
			{"viptv_mode", "", NULL, EVM_RESTART_WAN},
			{"viptv_ipaddr", "", NULL, EVM_RESTART_WAN},
			{"viptv_netmask", "", NULL, EVM_RESTART_WAN},
			{"viptv_gateway", "", NULL, EVM_RESTART_WAN},
			{0,0,0,0}
		};

	struct variable variables_WANCommonInterface[] = {
			{0,0,0,0}
		};

	struct variable variables_IPConnection[] = {
			{"sw_mode", "", NULL, EVM_RESTART_REBOOT},
			{"gw_arp_ping", "", NULL, EVM_RESTART_WAN},
			{"hw_nat_mode", "", NULL, EVM_RESTART_FIREWALL},
			{"sw_nat_mode", "", NULL, EVM_RESTART_FIREWALL},
			{"sfe_enable", "", NULL, EVM_RESTART_FIREWALL},
			{"wan_ipaddr", "", NULL, EVM_RESTART_WAN},
			{"wan_netmask", "", NULL, EVM_RESTART_WAN},
			{"wan_gateway", "", NULL, EVM_RESTART_WAN},
			{"wan_mtu", "", NULL, EVM_RESTART_WAN},
			{"wan_dnsenable_x", "", NULL, EVM_RESTART_WAN},
			{"wan_dns1_x", "", NULL, EVM_RESTART_WAN},
			{"wan_dns2_x", "", NULL, EVM_RESTART_WAN},
			{"wan_dns3_x", "", NULL, EVM_RESTART_WAN},
			{"wan_hostname", "", NULL, EVM_RESTART_WAN},
			{"wan_vci", "", NULL, EVM_RESTART_WAN},
			{"wan_hwaddr_x", "", NULL, EVM_RESTART_WAN},
			{"upnp_enable_x", "", NULL, EVM_RESTART_UPNP},
			{"upnp_proto", "", NULL, EVM_RESTART_UPNP},
			{"upnp_secure", "", NULL, EVM_RESTART_UPNP},
			{"upnp_clean_min", "", NULL, EVM_RESTART_UPNP},
			{"upnp_clean_int", "", NULL, EVM_RESTART_UPNP},
			{"upnp_iport_min", "", NULL, EVM_RESTART_UPNP},
			{"upnp_iport_max", "", NULL, EVM_RESTART_UPNP},
			{"upnp_eport_min", "", NULL, EVM_RESTART_UPNP},
			{"upnp_eport_max", "", NULL, EVM_RESTART_UPNP},
			{"dmz_ip", "", NULL, EVM_RESTART_FIREWALL},
			{"sp_battle_ips", "", NULL, EVM_RESTART_FIREWALL},
			{"vts_enable_x", "", NULL, EVM_RESTART_FIREWALL},
			{"vts_num_x", "", NULL, EVM_RESTART_FIREWALL},
			{"VSList", "Group", ARGV((char*)variables_IPConnection_VSList, "24", "75", "vts_num_x"), EVM_RESTART_FIREWALL},
			{0,0,0,0}
		};

	struct variable variables_IP6Connection[] = {
#if defined (USE_IPV6)
			{"ip6_service", "", NULL, EVM_RESTART_IPV6},
			{"ip6_ppe_on", "", NULL, EVM_RESTART_FIREWALL},
			{"ip6_wan_if", "", NULL, EVM_RESTART_IPV6},
			{"ip6_6in4_remote", "", NULL, EVM_RESTART_IPV6},
			{"ip6_6to4_relay", "", NULL, EVM_RESTART_IPV6},
			{"ip6_6rd_relay", "", NULL, EVM_RESTART_IPV6},
			{"ip6_6rd_size", "", NULL, EVM_RESTART_IPV6},
			{"ip6_6rd_dhcp", "", NULL, EVM_RESTART_IPV6},
			{"ip6_sit_mtu", "", NULL, EVM_RESTART_IPV6},
			{"ip6_sit_ttl", "", NULL, EVM_RESTART_IPV6},
			{"ip6_wan_dhcp", "", NULL, EVM_RESTART_IPV6},
			{"ip6_wan_priv", "", NULL, EVM_RESTART_IPV6},
			{"ip6_wan_addr", "", NULL, EVM_RESTART_IPV6},
			{"ip6_wan_size", "", NULL, EVM_RESTART_IPV6},
			{"ip6_wan_gate", "", NULL, EVM_RESTART_IPV6},
			{"ip6_dns_auto", "", NULL, EVM_RESTART_IPV6},
			{"ip6_dns1", "", NULL, EVM_RESTART_IPV6},
			{"ip6_dns2", "", NULL, EVM_RESTART_IPV6},
			{"ip6_dns3", "", NULL, EVM_RESTART_IPV6},
			{"ip6_lan_auto", "", NULL, EVM_RESTART_IPV6},
			{"ip6_lan_addr", "", NULL, EVM_RESTART_IPV6},
			{"ip6_lan_size", "", NULL, EVM_RESTART_IPV6},
			{"ip6_lan_radv", "", NULL, EVM_RESTART_RADV},
			{"ip6_lan_dhcp", "", NULL, EVM_RESTART_RADV|EVM_RESTART_DHCPD},
			{"ip6_lan_sflt", "", NULL, EVM_RESTART_DHCPD},
			{"ip6_lan_sfps", "", NULL, EVM_RESTART_DHCPD},
			{"ip6_lan_sfpe", "", NULL, EVM_RESTART_DHCPD},
#endif
			{0,0,0,0}
		};

	struct variable variables_PPPConnection[] = {
			{"wan_pppoe_username", "", NULL, EVM_RESTART_WAN},
			{"wan_pppoe_passwd", "", NULL, EVM_RESTART_WAN},
			{"wan_pppoe_idletime", "", NULL, EVM_RESTART_WAN},
			{"wan_pppoe_txonly_x", "", NULL, EVM_RESTART_WAN},
			{"wan_pppoe_service", "", NULL, EVM_RESTART_WAN},
			{"wan_pppoe_ac", "", NULL, EVM_RESTART_WAN},
			{"wan_pppoe_man", "", NULL, EVM_RESTART_WAN},
			{"wan_pppoe_mtu", "", NULL, EVM_RESTART_WAN},
			{"wan_pppoe_mru", "", NULL, EVM_RESTART_WAN},
			{"wan_pptp_mtu", "", NULL, EVM_RESTART_WAN},
			{"wan_pptp_mru", "", NULL, EVM_RESTART_WAN},
			{"wan_l2tp_mtu", "", NULL, EVM_RESTART_WAN},
			{"wan_l2tp_mru", "", NULL, EVM_RESTART_WAN},
#if defined (APP_RPL2TP)
			{"wan_l2tpd", "", NULL, EVM_RESTART_WAN},
#endif
			{"wan_ppp_peer", "", NULL, EVM_RESTART_WAN},
			{"wan_ppp_auth", "", NULL, EVM_RESTART_WAN},
			{"wan_ppp_mppe", "", NULL, EVM_RESTART_WAN},
			{"wan_ppp_lcp", "", NULL, EVM_RESTART_WAN},
			{"wan_ppp_alcp", "", NULL, EVM_RESTART_WAN},
			{"wan_ppp_pppd", "", NULL, EVM_RESTART_WAN},
			{0,0,0,0}
		};

	struct variable variables_EthernetLink[] = {
			{0,0,0,0}
		};

	struct variable variables_FirewallConfig[] = {
			{"fw_enable_x", "", NULL, EVM_RESTART_FIREWALL},
			{"fw_dos_x", "", NULL, EVM_RESTART_FIREWALL},
			{"fw_log_x", "", NULL, EVM_RESTART_FIREWALL},
			{"misc_http_x", "", NULL, EVM_RESTART_FIREWALL},
			{"misc_httpport_x", "", NULL, EVM_RESTART_FIREWALL},
#if defined (SUPPORT_HTTPS)
			{"https_wopen", "", NULL, EVM_RESTART_FIREWALL},
			{"https_wport", "", NULL, EVM_RESTART_FIREWALL},
#endif
			{"udpxy_wopen", "", NULL, EVM_RESTART_FIREWALL},
			{"udpxy_wport", "", NULL, EVM_RESTART_FIREWALL},
			{"misc_lpr_x", "", NULL, EVM_RESTART_FIREWALL},
			{"misc_ping_x", "", NULL, EVM_RESTART_FIREWALL},
			{"fw_pt_pppoe", "", NULL, EVM_RESTART_SYSCTL},
			{"fw_lw_enable_x", "", NULL, EVM_RESTART_FIREWALL},
			{"filter_lw_date_x", "", NULL, EVM_RESTART_FIREWALL},
			{"filter_lw_time_x", "", NULL, EVM_RESTART_FIREWALL},
			{"filter_lw_default_x", "", NULL, EVM_RESTART_FIREWALL},
			{"filter_lw_icmp_x", "", NULL,  EVM_RESTART_FIREWALL},
			{"filter_lw_num_x", "", NULL, EVM_RESTART_FIREWALL},
			{"url_enable_x", "", NULL, EVM_RESTART_FIREWALL},
			{"url_date_x", "", NULL, EV