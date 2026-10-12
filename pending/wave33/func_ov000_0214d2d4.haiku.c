#include "ffc/types.h"

typedef struct Obj {
    uint32_t (*vfn)(struct Obj *self);
    uint32_t f4;
    uint32_t f8;
} Obj;

extern int func_020875d0(void *a, Obj **out, int flag);
extern uint32_t func_02088978(void);
extern void func_02087288(void);
extern void func_02087508(void *a, uint32_t b, uint32_t c);
extern void func_020874ac(uint32_t a, uint32_t b, uint32_t c);
extern void func_ov000_0214d1fc(Obj *p);
extern void func_020872ac(void);
extern void func_0208898c(uint32_t x);

void func_ov000_0214d2d4(void *a0)
{
    Obj *p;
    uint32_t r4, r6;

    while (1) {
        func_020875d0(a0, &p, 1);
        if (p == 0) {
            return;
        }
        r4 = p->vfn(p);
        r6 = func_02088978();
        func_02087288();
        func_02087508(a0, 0, 0);
        if (p->f4 != 0) {
            *(uint32_t *)(p->f4 + 0xa8) = r4;
        }
        if (p->f8 != 0) {
            func_020874ac(p->f8, r4, 0);
        }
        func_ov000_0214d1fc(p);
        func_020872ac();
        func_0208898c(r6);
    }
}
