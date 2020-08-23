#ifndef IZANAMI_INTERRUPT_H_
#define IZANAMI_INTERRUPT_H_

#include <kern/boolean.h>
#include <kern/types.h>

#ifdef _KERNEL

void isr_init(void);
void isr_load(void);
void interrupt_init_bsp(void);
void interrupt_init_ap(void);

typedef void (*irq_handler_t)(u64 vector);

void interrupt_set_handler(u64 vector, irq_handler_t handler);
void interrupt_clear_handler(u64 vector);

typedef void (*irq_defer_callback_t)(void *data);

void interrupt_defer(irq_defer_callback_t callback, void *data);

typedef struct irq_defer_queue_s irq_defer_queue_t;

struct interrupt_percpu_data_s {
        irq_defer_queue_t *defer_queue;
        irq_defer_queue_t *defer_queue_end;
        size_t             defer_queue_size;

        irq_handler_t *irq_handlers;
};

void interrupt_enable_preemption(void);
void interrupt_disable_preemption(void);

typedef boolean irqflag_t;
void            interrupt_save_flag(irqflag_t *flag);
void            interrupt_load_flag(irqflag_t flag);

        #define INTERRUPT_CRITICAL_BEGIN                 \
                do {                                     \
                        irqflag_t __irqflag;             \
                        interrupt_save_flag(&__irqflag); \
                        interrupt_disable_preemption();  \
                        do

        #define INTERRUPT_CRITICAL_END          \
                while (0)                       \
                        ;                       \
                interrupt_load_flag(__irqflag); \
                }                               \
                while (0)

typedef struct interrupt_percpu_data_s interrupt_percpu_data_t;

        /* === APIC related === */

        #define APIC_REG_ID             0x20
        #define APIC_REG_TASK_PRIORITY  0x80
        #define APIC_REG_EOI            0xB0
        #define APIC_REG_DEST_FORMAT    0xE0
        #define APIC_REG_SPURIOUS       0xF0
        #define APIC_REG_ICR0           0x300
        #define APIC_REG_ICR1           0x310
        #define APIC_REG_TIMER_LVT      0x320
        #define APIC_REG_TIMER_INIT_CNT 0x380
        #define APIC_REG_TIMER_CURR_CNT 0x390
        #define APIC_REG_TIMER_DIV_CFG  0X3E0

u32  apic_read_reg(uintptr offset);
void apic_write_reg(uintptr offset, u32 value);

#endif /* _KERNEL */

#endif /* IZANAMI_INTERRUPT_H_ */
