#include "ffc/types.h"

extern uint32_t func_02088978(void);
extern void func_0208898c(uint32_t);
extern void func_02087024(void *);
extern uint64_t func_0209a76c(uint32_t, uint32_t);
extern void func_02087058(void *);

struct Q {
    uint32_t f0;
    uint32_t f4;
    uint32_t f8;
    uint32_t fc;
    uint32_t *buf;
    uint32_t tail;
    uint32_t head;
    uint32_t count;
};

uint32_t func_02087508(struct Q *p, uint32_t *out, uint32_t flag) {
    uint32_t irq = func_02088978();
    while (p->count == 0) {
        if ((flag & 1) == 0) {
            func_0208898c(irq);
            return 0;
        }
        func_02087024(&p->f8);
    }
    if (out != 0) {
        *out = p->buf[p->head];
    }
    p->head = (uint32_t)(func_0209a76c(p->head + 1, p->tail) >> 32);
    p->count--;
    func_02087058(p);
    func_0208898c(irq);
    return 1;
}
