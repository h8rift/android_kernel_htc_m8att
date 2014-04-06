/*
	Copyright (C) 2009 Ivo van Doorn <IvDoorn@gmail.com>
	Copyright (C) 2009 Mattias Nissler <mattias.nissler@gmx.de>
	Copyright (C) 2009 Felix Fietkau <nbd@openwrt.org>
	Copyright (C) 2009 Xose Vazquez Perez <xose.vazquez@gmail.com>
	Copyright (C) 2009 Axel Kollhofer <rain_maker@root-forum.org>
	<http://rt2x00.serialmonkey.com>

	This program is free software; you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation; either version 2 of the License, or
	(at your option) any later version.

	This program is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with this program; if not, write to the
	Free Software Foundation, Inc.,
	59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 */


#ifndef RT2800USB_H
#define RT2800USB_H

#define FIRMWARE_RT2870			"rt2870.bin"
#define FIRMWARE_IMAGE_BASE		0x3000

#define TXINFO_DESC_SIZE		(1 * sizeof(__le32))
#define RXINFO_DESC_SIZE		(1 * sizeof(__le32))


#define TXINFO_W0_USB_DMA_TX_PKT_LEN	FIELD32(0x0000ffff)
#define TXINFO_W0_WIV			FIELD32(0x01000000)
#define TXINFO_W0_QSEL			FIELD32(0x06000000)
#define TXINFO_W0_SW_USE_LAST_ROUND	FIELD32(0x08000000)
#define TXINFO_W0_USB_DMA_NEXT_VALID	FIELD32(0x40000000)
#define TXINFO_W0_USB_DMA_TX_BURST	FIELD32(0x80000000)



#define RXINFO_W0_USB_DMA_RX_PKT_LEN	FIELD32(0x0000ffff)



#define RXD_W0_BA			FIELD32(0x00000001)
#define RXD_W0_DATA			FIELD32(0x00000002)
#define RXD_W0_NULLDATA			FIELD32(0x00000004)
#define RXD_W0_FRAG			FIELD32(0x00000008)
#define RXD_W0_UNICAST_TO_ME		FIELD32(0x00000010)
#define RXD_W0_MULTICAST		FIELD32(0x00000020)
#define RXD_W0_BROADCAST		FIELD32(0x00000040)
#define RXD_W0_MY_BSS			FIELD32(0x00000080)
#define RXD_W0_CRC_ERROR		FIELD32(0x00000100)
#define RXD_W0_CIPHER_ERROR		FIELD32(0x00000600)
#define RXD_W0_AMSDU			FIELD32(0x00000800)
#define RXD_W0_HTC			FIELD32(0x00001000)
#define RXD_W0_RSSI			FIELD32(0x00002000)
#define RXD_W0_L2PAD			FIELD32(0x00004000)
#define RXD_W0_AMPDU			FIELD32(0x00008000)
#define RXD_W0_DECRYPTED		FIELD32(0x00010000)
#define RXD_W0_PLCP_RSSI		FIELD32(0x00020000)
#define RXD_W0_CIPHER_ALG		FIELD32(0x00040000)
#define RXD_W0_LAST_AMSDU		FIELD32(0x00080000)
#define RXD_W0_PLCP_SIGNAL		FIELD32(0xfff00000)

#endif 
