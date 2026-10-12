#include "ffc/types.h"

typedef struct Obj {
    uint32_t a0, a4, a8, ac;
    uint32_t f10, f14, f18, f1c, f20, f24;
    uint8_t pad[0x34 - 0x28];
    uint8_t sub[0x90 - 0x34];
    uint32_t f90, f94, f98;
} Obj;

extern uint32_t func_0207ea98(void *object, uint32_t first, uint32_t second);
extern uint32_t func_0207eab0(void *object, uint32_t first, uint32_t second);
extern uint32_t func_0207ac88(uint32_t a, uint32_t b, uint32_t c, void *d, uint32_t e);
extern void func_0207aba4(void);
extern void func_0207abac(void);
extern void func_0207abb4(void);

uint32_t func_0207a618(Obj *p, uint32_t r4, uint32_t r6)
{
    if (func_0207ea98(p->sub, 0, 0) == 0) {
        return 0;
    }
    if (func_0207eab0(p->sub, (uint32_t)p, 0x30) != 0x30) {
        return 0;
    }
    if (r4 != 0) {
        p->f98 = func_0207ac88(r4, p->f1c, (uint32_t)func_0207aba4, p, 0);
        if (p->f98 == 0) {
            return 0;
        }
        if (func_0207ea98(p->sub, p->f18, 0) == 0) {
            return 0;
        }
        uint32_t t1 = func_0207eab0(p->sub, p->f98, p->f1c);
        if (t1 != p->f1c) {
            return 0;
        }
        p->f90 = func_0207ac88(r4, p->f24, (uint32_t)func_0207abac, p, 0);
        if (p->f90 == 0) {
            return 0;
        }
        if (func_0207ea98(p->sub, p->f20, 0) == 0) {
            return 0;
        }
        uint32_t t2 = func_0207eab0(p->sub, p->f90, p->f24);
        if (t2 != p->f24) {
            return 0;
        }
        if (r6 != 0 && p->f14 != 0) {
            p->f94 = func_0207ac88(r4, p->f14, (uint32_t)func_0207abb4, p, 0);
            if (p->f94 == 0) {
                return 0;
            }
            if (func_0207ea98(p->sub, p->f10, 0) == 0) {
                return 0;
            }
            uint32_t t3 = func_0207eab0(p->sub, p->f94, p->f14);
            if (t3 != p->f14) {
                return 0;
            }
        }
    }
    return 1;
}
