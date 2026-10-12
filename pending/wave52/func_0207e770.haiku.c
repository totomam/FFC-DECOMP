#include "ffc/types.h"

struct S {
    uint32_t a0;
    uint32_t a1;
    uint32_t a2;
    uint32_t flags;
    uint32_t b;
    uint32_t c;
    uint8_t sub[1];
};

extern uint32_t func_02088978(void);
extern void func_0208898c(uint32_t);
extern void func_0207e094(struct S *);
extern void func_02087024(void *);

int func_0207e770(struct S *p)
{
    int r4 = 0;
    int cond = 1;
    uint32_t st;

    st = func_02088978();
    if (!(p->flags & 1)) {
        cond = r4;
    }
    if (cond) {
        if (!(p->flags & 0x44)) {
            r4 = 1;
        } else {
            r4 = 0;
        }
        if (r4) {
            p->flags = p->flags | 4;
        }
    }

    func_0208898c(st);

    if (r4) {
        func_0207e094(p);
    } else {
        uint32_t s2 = func_02088978();
        while (p->flags & 1) {
            func_02087024(p->sub);
        }
        func_0208898c(s2);
    }

    if (p->c == 0) {
        return 1;
    }
    return 0;
}
