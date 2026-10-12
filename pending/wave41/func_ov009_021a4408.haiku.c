#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern void *func_0205681c(uint32_t size);
extern void func_02069210(void *obj, uint32_t b, uint32_t t, uint32_t c, Pair pr);
extern void func_020695ec(void *a, void *b);
extern uint32_t data_ov009_021b088c[];
extern uint32_t data_ov009_021b080c[];
extern uint32_t data_ov009_021b0a50[];

void func_ov009_021a4408(void *p)
{
    uint8_t i;
    uint32_t *obj;
    Pair pr;
    uint32_t t;
    uint32_t c;

    for (i = 0; i < 5; i++) {
        obj = (uint32_t *)func_0205681c(0x9c);
        if (obj != 0) {
            pr.a = data_ov009_021b080c[0x38 / 4] + i * data_ov009_021b088c[0x58 / 4];
            c = data_ov009_021b080c[0x3c / 4];
            t = i * data_ov009_021b088c[0x5c / 4];
            pr.b = c + t;
            func_02069210(obj, pr.b, t, c, pr);
            obj[0] = (uint32_t)data_ov009_021b0a50;
            obj[0x94 / 4] = pr.a;
            obj[0x98 / 4] = pr.b;
        }
        ((void **)p)[0x4f + i] = obj;
        func_020695ec(p, obj);
    }
}
