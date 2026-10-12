#include "ffc/types.h"

typedef struct {
    uint32_t w0;
    uint32_t w1;
    uint32_t f8;
    uint32_t fc;
} Obj;

extern uint32_t func_02088978(void);
extern void func_0208898c(uint32_t irq);
extern void func_020877f4(uint32_t cur, Obj *p);
extern void func_02087058(Obj *p);
extern uint32_t data_02141510[];

void func_0208772c(Obj *p, uint32_t val)
{
    uint32_t irq = func_02088978();
    int flag = 0;
    uint32_t cur = data_02141510[1];
    uint32_t hi;

    if (val != 0) {
        if (val != (p->fc & 0xff000000u)) {
            func_0208898c(irq);
            return;
        }
    }

    hi = p->fc & 0xff000000u;
    if (hi == 0x10000000u) {
        goto L46;
    }
    if (hi == 0x20000000u) {
        goto L60;
    }
    if (hi != 0x30000000u) {
        func_0208898c(irq);
        return;
    }

L46:
    if (p->f8 == cur) {
        p->fc = hi | ((p->fc - 1) & 0xffffffu);
        if ((p->fc & 0xffffffu) == 0) {
            flag = 1;
        }
    }

L78:
    if (flag) {
        func_020877f4(cur, p);
        p->f8 = 0;
        p->fc &= 0xffffffu;
        func_02087058(p);
    }
    func_0208898c(irq);
    return;

L60:
    p->fc = hi | ((p->fc - 1) & 0xffffffu);
    if ((p->fc & 0xffffffu) == 0) {
        flag = 1;
    }
    goto L78;
}
