#ifndef __iop_fifo_in_extra_defs_h
#define __iop_fifo_in_extra_defs_h

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


typedef unsigned int reg_iop_fifo_in_extra_rw_wr_data;
#define REG_RD_ADDR_iop_fifo_in_extra_rw_wr_data 0
#define REG_WR_ADDR_iop_fifo_in_extra_rw_wr_data 0

typedef struct {
  unsigned int avail_bytes : 4;
  unsigned int last        : 8;
  unsigned int dif_in_en   : 1;
  unsigned int dif_out_en  : 1;
  unsigned int dummy1      : 18;
} reg_iop_fifo_in_extra_r_stat;
#define REG_RD_ADDR_iop_fifo_in_extra_r_stat 4

typedef struct {
  unsigned int last : 2;
  unsigned int dummy1 : 30;
} reg_iop_fifo_in_extra_rw_strb_dif_in;
#define REG_RD_ADDR_iop_fifo_in_extra_rw_strb_dif_in 8
#define REG_WR_ADDR_iop_fifo_in_extra_rw_strb_dif_in 8

typedef struct {
  unsigned int urun      : 1;
  unsigned int last_data : 1;
  unsigned int dav       : 1;
  unsigned int avail     : 1;
  unsigned int orun      : 1;
  unsigned int dummy1    : 27;
} reg_iop_fifo_in_extra_rw_intr_mask;
#define REG_RD_ADDR_iop_fifo_in_extra_rw_intr_mask 12
#define REG_WR_ADDR_iop_fifo_in_extra_rw_intr_mask 12

typedef struct {
  unsigned int urun      : 1;
  unsigned int last_data : 1;
  unsigned int dav       : 1;
  unsigned int avail     : 1;
  unsigned int orun      : 1;
  unsigned int dummy1    : 27;
} reg_iop_fifo_in_extra_rw_ack_intr;
#define REG_RD_ADDR_iop_fifo_in_extra_rw_ack_intr 16
#define REG_WR_ADDR_iop_fifo_in_extra_rw_ack_intr 16

typedef struct {
  unsigned int urun      : 1;
  unsigned int last_data : 1;
  unsigned int dav       : 1;
  unsigned int avail     : 1;
  unsigned int orun      : 1;
  unsigned int dummy1    : 27;
} reg_iop_fifo_in_extra_r_intr;
#define REG_RD_ADDR_iop_fifo_in_extra_r_intr 20

typedef struct {
  unsigned int urun      : 1;
  unsigned int last_data : 1;
  unsigned int dav       : 1;
  unsigned int avail     : 1;
  unsigned int orun      : 1;
  unsigned int dummy1    : 27;
} reg_iop_fifo_in_extra_r_masked_intr;
#define REG_RD_ADDR_iop_fifo_in_extra_r_masked_intr 24


enum {
  regk_iop_fifo_in_extra_fifo_in           = 0x00000002,
  regk_iop_fifo_in_extra_no                = 0x00000000,
  regk_iop_fifo_in_extra_rw_intr_mask_default = 0x00000000,
  regk_iop_fifo_in_extra_yes               = 0x00000001
};
#endif 