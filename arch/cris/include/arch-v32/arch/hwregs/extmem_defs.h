#ifndef __extmem_defs_h
#define __extmem_defs_h

#ifndef REG_RD
#define REG_RD( scope, inst, reg ) \
  REG_READ( reg_##scope##_##reg, \
            (inst) + REG_RD_ADDR_##scope##_##reg )
#endif

#ifndef REG_WR
#define REG_WR( scope, inst, reg, val ) \
  REG_WRITE( reg_##scope##_##reg, \
             (inst) + REG_WR_ADDR_##scope##_##reg, (val) )
#endif

#ifndef REG_RD_VECT
#define REG_RD_VECT( scope, inst, reg, index ) \
  REG_READ( reg_##scope##_##reg, \
            (inst) + REG_RD_ADDR_##scope##_##reg + \
	    (index) * STRIDE_##scope##_##reg )
#endif

#ifndef REG_WR_VECT
#define REG_WR_VECT( scope, inst, reg, index, val ) \
  REG_WRITE( reg_##scope##_##reg, \
             (inst) + REG_WR_ADDR_##scope##_##reg + \
	     (index) * STRIDE_##scope##_##reg, (val) )
#endif

#ifndef REG_RD_INT
#define REG_RD_INT( scope, inst, reg ) \
  REG_READ( int, (inst) + REG_RD_ADDR_##scope##_##reg )
#endif

#ifndef REG_WR_INT
#define REG_WR_INT( scope, inst, reg, val ) \
  REG_WRITE( int, (inst) + REG_WR_ADDR_##scope##_##reg, (val) )
#endif

#ifndef REG_RD_INT_VECT
#define REG_RD_INT_VECT( scope, inst, reg, index ) \
  REG_READ( int, (inst) + REG_RD_ADDR_##scope##_##reg + \
	    (index) * STRIDE_##scope##_##reg )
#endif

#ifndef REG_WR_INT_VECT
#define REG_WR_INT_VECT( scope, inst, reg, index, val ) \
  REG_WRITE( int, (inst) + REG_WR_ADDR_##scope##_##reg + \
	     (index) * STRIDE_##scope##_##reg, (val) )
#endif

#ifndef REG_TYPE_CONV
#define REG_TYPE_CONV( type, orgtype, val ) \
  ( { union { orgtype o; type n; } r; r.o = val; r.n; } )
#endif

#ifndef reg_page_size
#define reg_page_size 8192
#endif

#ifndef REG_ADDR
#define REG_ADDR( scope, inst, reg ) \
  ( (inst) + REG_RD_ADDR_##scope##_##reg )
#endif

#ifndef REG_ADDR_VECT
#define REG_ADDR_VECT( scope, inst, reg, index ) \
  ( (inst) + REG_RD_ADDR_##scope##_##reg + \
    (index) * STRIDE_##scope##_##reg )
#endif


typedef struct {
  unsigned int lw     : 6;
  unsigned int ew     : 3;
  unsigned int zw     : 3;
  unsigned int aw     : 2;
  unsigned int dw     : 2;
  unsigned int ewb    : 2;
  unsigned int bw     : 1;
  unsigned int mode   : 1;
  unsigned int erc_en : 1;
  unsigned int dummy1 : 6;
  unsigned int size   : 3;
  unsigned int log    : 1;
  unsigned int en     : 1;
} reg_extmem_rw_cse0_cfg;
#define REG_RD_ADDR_extmem_rw_cse0_cfg 0
#define REG_WR_ADDR_extmem_rw_cse0_cfg 0

typedef struct {
  unsigned int lw     : 6;
  unsigned int ew     : 3;
  unsigned int zw     : 3;
  unsigned int aw     : 2;
  unsigned int dw     : 2;
  unsigned int ewb    : 2;
  unsigned int bw     : 1;
  unsigned int mode   : 1;
  unsigned int erc_en : 1;
  unsigned int dummy1 : 6;
  unsigned int size   : 3;
  unsigned int log    : 1;
  unsigned int en     : 1;
} reg_extmem_rw_cse1_cfg;
#define REG_RD_ADDR_extmem_rw_cse1_cfg 4
#define REG_WR_ADDR_extmem_rw_cse1_cfg 4

typedef struct {
  unsigned int lw     : 6;
  unsigned int ew     : 3;
  unsigned int zw     : 3;
  unsigned int aw     : 2;
  unsigned int dw     : 2;
  unsigned int ewb    : 2;
  unsigned int bw     : 1;
  unsigned int mode   : 1;
  unsigned int erc_en : 1;
  unsigned int dummy1 : 6;
  unsigned int size   : 3;
  unsigned int log    : 1;
  unsigned int en     : 1;
} reg_extmem_rw_csr0_cfg;
#define REG_RD_ADDR_extmem_rw_csr0_cfg 8
#define REG_WR_ADDR_extmem_rw_csr0_cfg 8

typedef struct {
  unsigned int lw     : 6;
  unsigned int ew     : 3;
  unsigned int zw     : 3;
  unsigned int aw     : 2;
  unsigned int dw     : 2;
  unsigned int ewb    : 2;
  unsigned int bw     : 1;
  unsigned int mode   : 1;
  unsigned int erc_en : 1;
  unsigned int dummy1 : 6;
  unsigned int size   : 3;
  unsigned int log    : 1;
  unsigned int en     : 1;
} reg_extmem_rw_csr1_cfg;
#define REG_RD_ADDR_extmem_rw_csr1_cfg 12
#define REG_WR_ADDR_extmem_rw_csr1_cfg 12

typedef struct {
  unsigned int lw     : 6;
  unsigned int ew     : 3;
  unsigned int zw     : 3;
  unsigned int aw     : 2;
  unsigned int dw     : 2;
  unsigned int ewb    : 2;
  unsigned int bw     : 1;
  unsigned int mode   : 1;
  unsigned int erc_en : 1;
  unsigned int dummy1 : 6;
  unsigned int size   : 3;
  unsigned int log    : 1;
  unsigned int en     : 1;
} reg_extmem_rw_csp0_cfg;
#define REG_RD_ADDR_extmem_rw_csp0_cfg 16
#define REG_WR_ADDR_extmem_rw_csp0_cfg 16

typedef struct {
  unsigned int lw     : 6;
  unsigned int ew     : 3;
  unsigned int zw     : 3;
  unsigned int aw     : 2;
  unsigned int dw     : 2;
  unsigned int ewb    : 2;
  unsigned int bw     : 1;
  unsigned int mode   : 1;
  unsigned int erc_en : 1;
  unsigned int dummy1 : 6;
  unsigned int size   : 3;
  unsigned int log    : 1;
  unsigned int en     : 1;
} reg_extmem_rw_csp1_cfg;
#define REG_RD_ADDR_extmem_rw_csp1_cfg 20
#define REG_WR_ADDR_extmem_rw_csp1_cfg 20

typedef struct {
  unsigned int lw     : 6;
  unsigned int ew     : 3;
  unsigned int zw     : 3;
  unsigned int aw     : 2;
  unsigned int dw     : 2;
  unsigned int ewb    : 2;
  unsigned int bw     : 1;
  unsigned int mode   : 1;
  unsigned int erc_en : 1;
  unsigned int dummy1 : 6;
  unsigned int size   : 3;
  unsigned int log    : 1;
  unsigned int en     : 1;
} reg_extmem_rw_csp2_cfg;
#define REG_RD_ADDR_extmem_rw_csp2_cfg 24
#define REG_WR_ADDR_extmem_rw_csp2_cfg 24

typedef struct {
  unsigned int lw     : 6;
  unsigned int ew     : 3;
  unsigned int zw     : 3;
  unsigned int aw     : 2;
  unsigned int dw     : 2;
  unsigned int ewb    : 2;
  unsigned int bw     : 1;
  unsigned int mode   : 1;
  unsigned int erc_en : 1;
  unsigned int dummy1 : 6;
  unsigned int size   : 3;
  unsigned int log    : 1;
  unsigned int en     : 1;
} reg_extmem_rw_csp3_cfg;
#define REG_RD_ADDR_extmem_rw_csp3_cfg 28
#define REG_WR_ADDR_extmem_rw_csp3_cfg 28

typedef struct {
  unsigned int lw     : 6;
  unsigned int ew     : 3;
  unsigned int zw     : 3;
  unsigned int aw     : 2;
  unsigned int dw     : 2;
  unsigned int ewb    : 2;
  unsigned int bw     : 1;
  unsigned int mode   : 1;
  unsigned int erc_en : 1;
  unsigned int dummy1 : 6;
  unsigned int size   : 3;
  unsigned int log    : 1;
  unsigned int en     : 1;
} reg_extmem_rw_csp4_cfg;
#define REG_RD_ADDR_extmem_rw_csp4_cfg 32
#define REG_WR_ADDR_extmem_rw_csp4_cfg 32

typedef struct {
  unsigned int lw     : 6;
  unsigned int ew     : 3;
  unsigned int zw     : 3;
  unsigned int aw     : 2;
  unsigned int dw     : 2;
  unsigned int ewb    : 2;
  unsigned int bw     : 1;
  unsigned int mode   : 1;
  unsigned int erc_en : 1;
  unsigned int dummy1 : 6;
  unsigned int size   : 3;
  unsigned int log    : 1;
  unsigned int en     : 1;
} reg_extmem_rw_csp5_cfg;
#define REG_RD_ADDR_extmem_rw_csp5_cfg 36
#define REG_WR_ADDR_extmem_rw_csp5_cfg 36

typedef struct {
  unsigned int lw     : 6;
  unsigned int ew     : 3;
  unsigned int zw     : 3;
  unsigned int aw     : 2;
  unsigned int dw     : 2;
  unsigned int ewb    : 2;
  unsigned int bw     : 1;
  unsigned int mode   : 1;
  unsigned int erc_en : 1;
  unsigned int dummy1 : 6;
  unsigned int size   : 3;
  unsigned int log    : 1;
  unsigned int en     : 1;
} reg_extmem_rw_csp6_cfg;
#define REG_RD_ADDR_extmem_rw_csp6_cfg 40
#define REG_WR_ADDR_extmem_rw_csp6_cfg 40

typedef struct {
  unsigned int lw     : 6;
  unsigned int ew     : 3;
  unsigned int zw     : 3;
  unsigned int aw     : 2;
  unsigned int dw     : 2;
  unsigned int ewb    : 2;
  unsigned int bw     : 1;
  unsigned int mode   : 1;
  unsigned int erc_en : 1;
  unsigned int dummy1 : 6;
  unsigned int size   : 3;
  unsigned int log    : 1;
  unsigned int en     : 1;
} reg_extmem_rw_css_cfg;
#define REG_RD_ADDR_extmem_rw_css_cfg 44
#define REG_WR_ADDR_extmem_rw_css_cfg 44

typedef struct {
  unsigned int h : 32;
} reg_extmem_rw_status_handle;
#define REG_RD_ADDR_extmem_rw_status_handle 48
#define REG_WR_ADDR_extmem_rw_status_handle 48

typedef struct {
  unsigned int val   : 16;
  unsigned int dummy1 : 15;
  unsigned int start : 1;
} reg_extmem_rw_wait_pin;
#define REG_RD_ADDR_extmem_rw_wait_pin 52
#define REG_WR_ADDR_extmem_rw_wait_pin 52

typedef struct {
  unsigned int dummy1 : 31;
  unsigned int en : 1;
} reg_extmem_rw_gated_csp;
#define REG_RD_ADDR_extmem_rw_gated_csp 56
#define REG_WR_ADDR_extmem_rw_gated_csp 56


enum {
  regk_extmem_b16                          = 0x00000001,
  regk_extmem_b32                          = 0x00000000,
  regk_extmem_bwe                          = 0x00000000,
  regk_extmem_cwe                          = 0x00000001,
  regk_extmem_no                           = 0x00000000,
  regk_extmem_rw_cse0_cfg_default          = 0x000006cf,
  regk_extmem_rw_cse1_cfg_default          = 0x000006cf,
  regk_extmem_rw_csp0_cfg_default          = 0x000006cf,
  regk_extmem_rw_csp1_cfg_default          = 0x000006cf,
  regk_extmem_rw_csp2_cfg_default          = 0x000006cf,
  regk_extmem_rw_csp3_cfg_default          = 0x000006cf,
  regk_extmem_rw_csp4_cfg_default          = 0x000006cf,
  regk_extmem_rw_csp5_cfg_default          = 0x000006cf,
  regk_extmem_rw_csp6_cfg_default          = 0x000006cf,
  regk_extmem_rw_csr0_cfg_default          = 0x000006cf,
  regk_extmem_rw_csr1_cfg_default          = 0x000006cf,
  regk_extmem_rw_css_cfg_default           = 0x000006cf,
  regk_extmem_s128KB                       = 0x00000000,
  regk_extmem_s16MB                        = 0x00000005,
  regk_extmem_s1MB                         = 0x00000001,
  regk_extmem_s2MB                         = 0x00000002,
  regk_extmem_s32MB                        = 0x00000006,
  regk_extmem_s4MB                         = 0x00000003,
  regk_extmem_s64MB                        = 0x00000007,
  regk_extmem_s8MB                         = 0x00000004,
  regk_extmem_yes                          = 0x00000001
};
#endif 
