#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_02069210(void *obj, uint32_t b, uint32_t t, uint32_t c, uint32_t a1, uint32_t b1, uint32_t a2, uint32_t b2);
extern void func_020695ec(void *a, void *b);
extern uint32_t data_ov009_021b088c[];
extern uint32_t data_ov009_021b080c[];
extern uint32_t data_ov009_021b0a50[];

void func_ov009_021a4408(void *p)
{
    uint8_t i;
    for (i = 0; i < 5; i++) {
        uint32_t *obj = (uint32_t *)func_0205681c(0x9c);
        if (obj != 0) {
            uint32_t a = data_ov009_021b080c[0x38 / 4] + data_ov009_021b088c[0x58 / 4] * i;
            uint32_t c = data_ov009_021b080c[0x3c / 4];
            uint32_t t = data_ov009_021b088c[0x5c / 4] * i;
            uint32_t b = c + t;
            func_02069210(obj, b, t, c, a, b, a, b);
            obj[0] = (uint32_t)data_ov009_021b0a50;
            obj[0x94 / 4] = a;
            obj[0x98 / 4] = b;
        }
        ((void **)p)[0x4f + i] = obj;
        func_020695ec(p, obj);
    }
}
