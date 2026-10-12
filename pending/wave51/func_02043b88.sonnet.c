#include "ffc/types.h"

extern void func_0208763c(void *p);
extern void func_02087678(void *p);

struct Obj {
    uint32_t w0;
    struct Obj *next;
    uint8_t p8[0xa];
    uint8_t flag;
    uint8_t p13;
    struct Obj *p14;
};

uint32_t func_02043b88(uint8_t *self, struct Obj *r4)
{
    
    struct Obj *o = *(struct Obj **)(self + 0x150);
    volatile uint32_t fl[3]; fl[0] = o->flag;
    uint8_t *s = (uint8_t *)o + 0x1c;
    uint32_t ok;

    if (fl[0] != 0) {
        func_0208763c(s);
    }
    ok = (o->p14 == 0);
    if (fl[0] != 0) {
        func_02087678(s);
    }
    if (ok) {
        return 1;
    }
    if (r4 == 0) {
        return 1;
    }
    {
        struct Obj *c = (*(struct Obj **)(self + 0x150))->p14;
        while (c != 0) {
            if (c == r4) {
                return 0;
            }
            c = c->next;
        }
    }
    return 1;
}
