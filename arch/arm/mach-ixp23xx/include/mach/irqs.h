/*
 * arch/arm/mach-ixp23xx/include/mach/irqs.h
 *
 * IRQ definitions for IXP23XX based systems
 *
 * Author: Naeem Afzal <naeem.m.afzal@intel.com>
 *
 * Copyright (C) 2003-2004 Intel Corporation.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef __ASM_ARCH_IRQS_H
#define __ASM_ARCH_IRQS_H

#define NR_IXP23XX_IRQS			IRQ_IXP23XX_INTB+1
#define IRQ_IXP23XX_EXTIRQS		NR_IXP23XX_IRQS


#define IRQ_IXP23XX_DBG0		0	
#define IRQ_IXP23XX_DBG1		1	
#define IRQ_IXP23XX_NPE_TRG		2	
#define IRQ_IXP23XX_TIMER1		3	
#define IRQ_IXP23XX_TIMER2		4	
#define IRQ_IXP23XX_TIMESTAMP		5	
#define IRQ_IXP23XX_WDOG		6	
#define IRQ_IXP23XX_PCI_DBELL		7	
#define IRQ_IXP23XX_PCI_DMA1		8	
#define IRQ_IXP23XX_PCI_DMA2		9	
#define IRQ_IXP23XX_PCI_DMA3		10	
#define IRQ_IXP23XX_PCI_INT_RPH		11	
#define IRQ_IXP23XX_CPP_PMU		12	
#define IRQ_IXP23XX_SWINT0		13	
#define IRQ_IXP23XX_SWINT1		14	
#define IRQ_IXP23XX_UART2		15	
#define IRQ_IXP23XX_UART1		16	
#define IRQ_IXP23XX_XSI_PMU_ROLLOVER	17	
#define IRQ_IXP23XX_XSI_AHB_PM0		18	
#define IRQ_IXP23XX_XSI_AHB_ECE0	19	
#define IRQ_IXP23XX_XSI_AHB_GASKET	20	
#define IRQ_IXP23XX_XSI_CPP		21	
#define IRQ_IXP23XX_CPP_XSI		22	
#define IRQ_IXP23XX_ME_ATTN0		23	
#define IRQ_IXP23XX_ME_ATTN1		24	
#define IRQ_IXP23XX_ME_ATTN2		25	
#define IRQ_IXP23XX_ME_ATTN3		26	
#define IRQ_IXP23XX_PCI_ERR_RPH		27	
#define IRQ_IXP23XX_D0XG_ECC_CORR	28	
#define IRQ_IXP23XX_D0XG_ECC_UNCORR	29	
#define IRQ_IXP23XX_SRAM_ERR1		30	
#define IRQ_IXP23XX_SRAM_ERR0		31	
#define IRQ_IXP23XX_MEDIA_ERR		32	
#define IRQ_IXP23XX_STH_DRAM_ECC_MAJ	33	
#define IRQ_IXP23XX_GPIO6		34	
#define IRQ_IXP23XX_GPIO7		35	
#define IRQ_IXP23XX_GPIO8		36	
#define IRQ_IXP23XX_GPIO9		37	
#define IRQ_IXP23XX_GPIO10		38	
#define IRQ_IXP23XX_GPIO11		39	
#define IRQ_IXP23XX_GPIO12		40	
#define IRQ_IXP23XX_GPIO13		41	
#define IRQ_IXP23XX_GPIO14		42	
#define IRQ_IXP23XX_GPIO15		43	
#define IRQ_IXP23XX_SHAC_RING0		44	
#define IRQ_IXP23XX_SHAC_RING1		45	
#define IRQ_IXP23XX_SHAC_RING2		46	
#define IRQ_IXP23XX_SHAC_RING3		47	
#define IRQ_IXP23XX_SHAC_RING4		48	
#define IRQ_IXP23XX_SHAC_RING5		49	
#define IRQ_IXP23XX_SHAC_RING6		50	
#define IRQ_IXP23XX_SHAC_RING7		51	
#define IRQ_IXP23XX_SHAC_RING8		52	
#define IRQ_IXP23XX_SHAC_RING9		53	
#define IRQ_IXP23XX_SHAC_RING10		54	
#define IRQ_IXP23XX_SHAC_RING11		55	
#define IRQ_IXP23XX_ME_THREAD_A0_ME0	56	
#define IRQ_IXP23XX_ME_THREAD_A1_ME0	57	
#define IRQ_IXP23XX_ME_THREAD_A2_ME0	58	
#define IRQ_IXP23XX_ME_THREAD_A3_ME0	59	
#define IRQ_IXP23XX_ME_THREAD_A4_ME0	60	
#define IRQ_IXP23XX_ME_THREAD_A5_ME0	61	
#define IRQ_IXP23XX_ME_THREAD_A6_ME0	62	
#define IRQ_IXP23XX_ME_THREAD_A7_ME0	63	
#define IRQ_IXP23XX_ME_THREAD_A8_ME1	64	
#define IRQ_IXP23XX_ME_THREAD_A9_ME1	65	
#define IRQ_IXP23XX_ME_THREAD_A10_ME1	66	
#define IRQ_IXP23XX_ME_THREAD_A11_ME1	67	
#define IRQ_IXP23XX_ME_THREAD_A12_ME1	68	
#define IRQ_IXP23XX_ME_THREAD_A13_ME1	69	
#define IRQ_IXP23XX_ME_THREAD_A14_ME1	70	
#define IRQ_IXP23XX_ME_THREAD_A15_ME1	71	
#define IRQ_IXP23XX_ME_THREAD_A16_ME2	72	
#define IRQ_IXP23XX_ME_THREAD_A17_ME2	73	
#define IRQ_IXP23XX_ME_THREAD_A18_ME2	74	
#define IRQ_IXP23XX_ME_THREAD_A19_ME2	75	
#define IRQ_IXP23XX_ME_THREAD_A20_ME2	76	
#define IRQ_IXP23XX_ME_THREAD_A21_ME2	77	
#define IRQ_IXP23XX_ME_THREAD_A22_ME2	78	
#define IRQ_IXP23XX_ME_THREAD_A23_ME2	79	
#define IRQ_IXP23XX_ME_THREAD_A24_ME3	80	
#define IRQ_IXP23XX_ME_THREAD_A25_ME3	81	
#define IRQ_IXP23XX_ME_THREAD_A26_ME3	82	
#define IRQ_IXP23XX_ME_THREAD_A27_ME3	83	
#define IRQ_IXP23XX_ME_THREAD_A28_ME3	84	
#define IRQ_IXP23XX_ME_THREAD_A29_ME3	85	
#define IRQ_IXP23XX_ME_THREAD_A30_ME3	86	
#define IRQ_IXP23XX_ME_THREAD_A31_ME3	87	
#define IRQ_IXP23XX_ME_THREAD_B0_ME0	88	
#define IRQ_IXP23XX_ME_THREAD_B1_ME0	89	
#define IRQ_IXP23XX_ME_THREAD_B2_ME0	90	
#define IRQ_IXP23XX_ME_THREAD_B3_ME0	91	
#define IRQ_IXP23XX_ME_THREAD_B4_ME0	92	
#define IRQ_IXP23XX_ME_THREAD_B5_ME0	93	
#define IRQ_IXP23XX_ME_THREAD_B6_ME0	94	
#define IRQ_IXP23XX_ME_THREAD_B7_ME0	95	
#define IRQ_IXP23XX_ME_THREAD_B8_ME1	96	
#define IRQ_IXP23XX_ME_THREAD_B9_ME1	97	
#define IRQ_IXP23XX_ME_THREAD_B10_ME1	98	
#define IRQ_IXP23XX_ME_THREAD_B11_ME1	99	
#define IRQ_IXP23XX_ME_THREAD_B12_ME1	100	
#define IRQ_IXP23XX_ME_THREAD_B13_ME1	101	
#define IRQ_IXP23XX_ME_THREAD_B14_ME1	102	
#define IRQ_IXP23XX_ME_THREAD_B15_ME1	103	
#define IRQ_IXP23XX_ME_THREAD_B16_ME2	104	
#define IRQ_IXP23XX_ME_THREAD_B17_ME2	105	
#define IRQ_IXP23XX_ME_THREAD_B18_ME2	106	
#define IRQ_IXP23XX_ME_THREAD_B19_ME2	107	
#define IRQ_IXP23XX_ME_THREAD_B20_ME2	108	
#define IRQ_IXP23XX_ME_THREAD_B21_ME2	109	
#define IRQ_IXP23XX_ME_THREAD_B22_ME2	110	
#define IRQ_IXP23XX_ME_THREAD_B23_ME2	111	
#define IRQ_IXP23XX_ME_THREAD_B24_ME3	112	
#define IRQ_IXP23XX_ME_THREAD_B25_ME3	113	
#define IRQ_IXP23XX_ME_THREAD_B26_ME3	114	
#define IRQ_IXP23XX_ME_THREAD_B27_ME3	115	
#define IRQ_IXP23XX_ME_THREAD_B28_ME3	116	
#define IRQ_IXP23XX_ME_THREAD_B29_ME3	117	
#define IRQ_IXP23XX_ME_THREAD_B30_ME3	118	
#define IRQ_IXP23XX_ME_THREAD_B31_ME3	119	

#define NUM_IXP23XX_RAW_IRQS		120

#define IRQ_IXP23XX_INTA		120	
#define IRQ_IXP23XX_INTB		121	

#define NR_IXP23XX_IRQ			(IRQ_IXP23XX_INTB + 1)

#define NR_IXP23XX_MACH_IRQS 		32

#define NR_IRQS				(NR_IXP23XX_IRQS + NR_IXP23XX_MACH_IRQS)

#define IXP23XX_MACH_IRQ(irq) 		(NR_IXP23XX_IRQ + (irq))



#define IXDP2351_INTB_IRQ_BASE 		0
#define IRQ_IXDP2351_INTA_82546		IXP23XX_MACH_IRQ(0)
#define IRQ_IXDP2351_INTB_82546		IXP23XX_MACH_IRQ(1)
#define IRQ_IXDP2351_SPCI_DB_0		IXP23XX_MACH_IRQ(2)
#define IRQ_IXDP2351_SPCI_DB_1		IXP23XX_MACH_IRQ(3)
#define IRQ_IXDP2351_SPCI_PMC_INTA	IXP23XX_MACH_IRQ(4)
#define IRQ_IXDP2351_SPCI_PMC_INTB	IXP23XX_MACH_IRQ(5)
#define IRQ_IXDP2351_SPCI_PMC_INTC	IXP23XX_MACH_IRQ(6)
#define IRQ_IXDP2351_SPCI_PMC_INTD	IXP23XX_MACH_IRQ(7)
#define IRQ_IXDP2351_SPCI_FIC		IXP23XX_MACH_IRQ(8)

#define IXDP2351_INTB_IRQ_BIT(irq)	(irq - IXP23XX_MACH_IRQ(0))
#define IXDP2351_INTB_IRQ_MASK(irq)	(1 << IXDP2351_INTB_IRQ_BIT(irq))
#define IXDP2351_INTB_IRQ_VALID		0x01FF
#define IXDP2351_INTB_IRQ_NUM 		16

#define IXDP2351_INTA_IRQ_BASE 		16
#define IRQ_IXDP2351_IPMI_FROM		IXP23XX_MACH_IRQ(16)
#define IRQ_IXDP2351_125US		IXP23XX_MACH_IRQ(17)
#define IRQ_IXDP2351_DB_0_ADD		IXP23XX_MACH_IRQ(18)
#define IRQ_IXDP2351_DB_1_ADD		IXP23XX_MACH_IRQ(19)
#define IRQ_IXDP2351_DEBUG1		IXP23XX_MACH_IRQ(20)
#define IRQ_IXDP2351_ADD_UART		IXP23XX_MACH_IRQ(21)
#define IRQ_IXDP2351_FIC_ADD		IXP23XX_MACH_IRQ(24)
#define IRQ_IXDP2351_CS8900		IXP23XX_MACH_IRQ(25)
#define IRQ_IXDP2351_BBSRAM		IXP23XX_MACH_IRQ(26)
#define IRQ_IXDP2351_CONFIG_MEDIA	IXP23XX_MACH_IRQ(27)
#define IRQ_IXDP2351_CLOCK_REF		IXP23XX_MACH_IRQ(28)
#define IRQ_IXDP2351_A10_NP		IXP23XX_MACH_IRQ(29)
#define IRQ_IXDP2351_A11_NP		IXP23XX_MACH_IRQ(30)
#define IRQ_IXDP2351_DEBUG_NP		IXP23XX_MACH_IRQ(31)

#define IXDP2351_INTA_IRQ_BIT(irq) 	(irq - IXP23XX_MACH_IRQ(16))
#define IXDP2351_INTA_IRQ_MASK(irq) 	(1 << IXDP2351_INTA_IRQ_BIT(irq))
#define IXDP2351_INTA_IRQ_VALID 	0xFF3F
#define IXDP2351_INTA_IRQ_NUM 		16


#define IRQ_ROADRUNNER_PCI_INTA 	IRQ_IXP23XX_INTA
#define IRQ_ROADRUNNER_PCI_INTB 	IRQ_IXP23XX_INTB
#define IRQ_ROADRUNNER_PCI_INTC 	IRQ_IXP23XX_GPIO11
#define IRQ_ROADRUNNER_PCI_INTD 	IRQ_IXP23XX_GPIO12



#endif