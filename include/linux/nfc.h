/*
 * Copyright (C) 2011 Instituto Nokia de Tecnologia
 *
 * Authors:
 *    Lauro Ramos Venancio <lauro.venancio@openbossa.org>
 *    Aloisio Almeida Jr <aloisio.almeida@openbossa.org>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the
 * Free Software Foundation, Inc.,
 * 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 */

#ifndef __LINUX_NFC_H
#define __LINUX_NFC_H

#include <linux/types.h>
#include <linux/socket.h>

#define NFC_GENL_NAME "nfc"
#define NFC_GENL_VERSION 1

#define NFC_GENL_MCAST_EVENT_NAME "events"

enum nfc_commands {
	NFC_CMD_UNSPEC,
	NFC_CMD_GET_DEVICE,
	NFC_CMD_DEV_UP,
	NFC_CMD_DEV_DOWN,
	NFC_CMD_DEP_LINK_UP,
	NFC_CMD_DEP_LINK_DOWN,
	NFC_CMD_START_POLL,
	NFC_CMD_STOP_POLL,
	NFC_CMD_GET_TARGET,
	NFC_EVENT_TARGETS_FOUND,
	NFC_EVENT_DEVICE_ADDED,
	NFC_EVENT_DEVICE_REMOVED,
	__NFC_CMD_AFTER_LAST
};
#define NFC_CMD_MAX (__NFC_CMD_AFTER_LAST - 1)

enum nfc_attrs {
	NFC_ATTR_UNSPEC,
	NFC_ATTR_DEVICE_INDEX,
	NFC_ATTR_DEVICE_NAME,
	NFC_ATTR_PROTOCOLS,
	NFC_ATTR_TARGET_INDEX,
	NFC_ATTR_TARGET_SENS_RES,
	NFC_ATTR_TARGET_SEL_RES,
	NFC_ATTR_TARGET_NFCID1,
	NFC_ATTR_TARGET_SENSB_RES,
	NFC_ATTR_TARGET_SENSF_RES,
	NFC_ATTR_COMM_MODE,
	NFC_ATTR_RF_MODE,
	NFC_ATTR_DEVICE_POWERED,
	__NFC_ATTR_AFTER_LAST
};
#define NFC_ATTR_MAX (__NFC_ATTR_AFTER_LAST - 1)

#define NFC_DEVICE_NAME_MAXSIZE 8
#define NFC_NFCID1_MAXSIZE 10
#define NFC_SENSB_RES_MAXSIZE 12
#define NFC_SENSF_RES_MAXSIZE 18

#define NFC_PROTO_JEWEL		1
#define NFC_PROTO_MIFARE	2
#define NFC_PROTO_FELICA	3
#define NFC_PROTO_ISO14443	4
#define NFC_PROTO_NFC_DEP	5

#define NFC_PROTO_MAX		6

#define NFC_COMM_ACTIVE  0
#define NFC_COMM_PASSIVE 1

#define NFC_RF_INITIATOR 0
#define NFC_RF_TARGET    1

#define NFC_PROTO_JEWEL_MASK	(1 << NFC_PROTO_JEWEL)
#define NFC_PROTO_MIFARE_MASK	(1 << NFC_PROTO_MIFARE)
#define NFC_PROTO_FELICA_MASK	(1 << NFC_PROTO_FELICA)
#define NFC_PROTO_ISO14443_MASK	(1 << NFC_PROTO_ISO14443)
#define NFC_PROTO_NFC_DEP_MASK	(1 << NFC_PROTO_NFC_DEP)

struct sockaddr_nfc {
	sa_family_t sa_family;
	__u32 dev_idx;
	__u32 target_idx;
	__u32 nfc_protocol;
};

#define NFC_LLCP_MAX_SERVICE_NAME 63
struct sockaddr_nfc_llcp {
	sa_family_t sa_family;
	__u32 dev_idx;
	__u32 target_idx;
	__u32 nfc_protocol;
	__u8 dsap; 
	__u8 ssap; 
	char service_name[NFC_LLCP_MAX_SERVICE_NAME]; ;
	size_t service_name_len;
};

#define NFC_SOCKPROTO_RAW	0
#define NFC_SOCKPROTO_LLCP	1
#define NFC_SOCKPROTO_MAX	2

#define NFC_HEADER_SIZE 1

#endif 