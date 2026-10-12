#include "ffc/types.h"

typedef struct {
    uint8_t type;
    uint8_t pad;
    uint16_t id;
    uint32_t a;
    uint32_t b;
} Obj;

extern void *func_ov000_02163350(void);
extern uint32_t func_ov001_021821ac(uint32_t a, uint32_t b, uint32_t c);
extern void func_ov001_0218677c(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern uint32_t func_ov000_02161a1c(void);
extern uint32_t func_ov001_02180834(uint32_t a);
extern uint32_t func_ov001_021831c0(uint32_t a, uint32_t b, uint32_t c, void *d, void *e, void *f);
extern int func_ov000_02162780(void);
extern int func_ov000_0216277c(void);

int func_ov000_0215ea94(Obj *p)
{
    uint32_t r;
    int i;
    uint32_t *s;
    void *f6;
    void *f7;

    if (p->type == 0) {
        s = (uint32_t *)func_ov000_02163350();
        func_ov001_0218677c(*(uint32_t *)((uint8_t *)s + 0x5e0),
                            func_ov001_021821ac(p->a, 0, 0),
                            p->id,
                            p->b);
        if (func_ov000_02161a1c() != 0) {
            return 2;
        }
    }

    f6 = (void *)func_ov000_02162780;
    f7 = (void *)func_ov000_0216277c;
    r = 0;
    for (i = 0; i < 1; i++) {
        s = (uint32_t *)func_ov000_02163350();
        r = func_ov001_02180834(*(uint32_t *)s[1]);
        r = func_ov001_021831c0(r, p->b, p->type, f7, f6, p);
        if (r == 0) {
            break;
        }
        if (r != 3) {
            break;
        }
    }
    return r;
}
