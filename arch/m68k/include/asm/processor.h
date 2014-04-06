/*
 * include/asm-m68k/processor.h
 *
 * Copyright (C) 1995 Hamish Macdonald
 */

#ifndef __ASM_M68K_PROCESSOR_H
#define __ASM_M68K_PROCESSOR_H

#define current_text_addr() ({ __label__ _l; _l: &&_l;})

#include <linux/thread_info.h>
#include <asm/segment.h>
#include <asm/fpu.h>
#include <asm/ptrace.h>

static inline unsigned long rdusp(void)
{
#ifdef CONFIG_COLDFIRE_SW_A7
	extern unsigned int sw_usp;
	return sw_usp;
#else
	register unsigned long usp __asm__("a0");
	
	__asm__ __volatile__(".word 0x4e68" : "=a" (usp));
	return usp;
#endif
}

static inline void wrusp(unsigned long usp)
{
#ifdef CONFIG_COLDFIRE_SW_A7
	extern unsigned int sw_usp;
	sw_usp = usp;
#else
	register unsigned long a0 __asm__("a0") = usp;
	
	__asm__ __volatile__(".word 0x4e60" : : "a" (a0) );
#endif
}

#ifdef CONFIG_MMU
#if defined(CONFIG_COLDFIRE)
#define TASK_SIZE	(0xC0000000UL)
#elif defined(CONFIG_SUN3)
#define TASK_SIZE	(0x0E000000UL)
#else
#define TASK_SIZE	(0xF0000000UL)
#endif
#else
#define TASK_SIZE	(0xFFFFFFFFUL)
#endif

#ifdef __KERNEL__
#define STACK_TOP	TASK_SIZE
#define STACK_TOP_MAX	STACK_TOP
#endif

#ifdef CONFIG_MMU
#if defined(CONFIG_COLDFIRE)
#define TASK_UNMAPPED_BASE	0x60000000UL
#elif defined(CONFIG_SUN3)
#define TASK_UNMAPPED_BASE	0x0A000000UL
#else
#define TASK_UNMAPPED_BASE	0xC0000000UL
#endif
#define TASK_UNMAPPED_ALIGN(addr, off)	PAGE_ALIGN(addr)
#else
#define TASK_UNMAPPED_BASE	0
#endif

struct thread_struct {
	unsigned long  ksp;		
	unsigned long  usp;		
	unsigned short sr;		
	unsigned short fs;		
	unsigned long  crp[2];		
	unsigned long  esp0;		
	unsigned long  faddr;		
	int            signo, code;
	unsigned long  fp[8*3];
	unsigned long  fpcntl[3];	
	unsigned char  fpstate[FPSTATESIZE];  
};

#define INIT_THREAD  {							\
	.ksp	= sizeof(init_stack) + (unsigned long) init_stack,	\
	.sr	= PS_S,							\
	.fs	= __KERNEL_DS,						\
}

#ifdef CONFIG_MMU
static inline void start_thread(struct pt_regs * regs, unsigned long pc,
				unsigned long usp)
{
	regs->pc = pc;
	regs->sr &= ~0x2000;
	wrusp(usp);
}

extern int handle_kernel_fault(struct pt_regs *regs);

#else

#ifdef CONFIG_COLDFIRE
#define reformat(_regs)		do { (_regs)->format = 0x4; } while(0)
#else
#define reformat(_regs)		do { } while (0)
#endif

#define start_thread(_regs, _pc, _usp)                  \
do {                                                    \
	(_regs)->pc = (_pc);                            \
	((struct switch_stack *)(_regs))[-1].a6 = 0;    \
	reformat(_regs);                                \
	if (current->mm)                                \
		(_regs)->d5 = current->mm->start_data;  \
	(_regs)->sr &= ~0x2000;                         \
	wrusp(_usp);                                    \
} while(0)

static inline  int handle_kernel_fault(struct pt_regs *regs)
{
	
	return 0;
}

#endif

struct task_struct;

static inline void release_thread(struct task_struct *dead_task)
{
}

#define prepare_to_copy(tsk)	do { } while (0)

extern int kernel_thread(int (*fn)(void *), void * arg, unsigned long flags);

static inline void exit_thread(void)
{
}

extern unsigned long thread_saved_pc(struct task_struct *tsk);

unsigned long get_wchan(struct task_struct *p);

#define	KSTK_EIP(tsk)	\
    ({			\
	unsigned long eip = 0;	 \
	if ((tsk)->thread.esp0 > PAGE_SIZE && \
	    (virt_addr_valid((tsk)->thread.esp0))) \
	      eip = ((struct pt_regs *) (tsk)->thread.esp0)->pc; \
	eip; })
#define	KSTK_ESP(tsk)	((tsk) == current ? rdusp() : (tsk)->thread.usp)

#define task_pt_regs(tsk)	((struct pt_regs *) ((tsk)->thread.esp0))

#define cpu_relax()	barrier()

#endif