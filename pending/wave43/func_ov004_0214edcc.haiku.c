#include "ffc/types.h"

typedef struct { uint32_t w0; uint32_t w1; } Pair;

extern uint32_t func_ov004_02153514(uint32_t);
extern uint32_t func_ov004_0214f740(uint8_t *, uint32_t);
extern void func_01ffddec(void *, Pair, Pair, uint32_t);

Pair func_ov004_0214edcc(uint8_t *a, uint32_t b, Pair key)
{
    Pair t1, t2;
    uint32_t r7;
    Pair *e;
    if (b != func_ov004_02153514(*(uint32_t *)(a + 0x88))) {
        r7 = func_ov004_0214f740(a, b);
        if (r7 != func_ov004_0214f740(a, func_ov004_02153514(*(uint32_t *)(a + 0x88)))) {
            key.w0 = 0x100 - key.w0;
        }
        e = (Pair *)(a + 0x158 + (b << 3));
        func_01ffddec(&t1, *e, key, 0);
        key = t1;
        e = (Pair *)(a + 0x158 + (func_ov004_02153514(*(uint32_t *)(a + 0x88)) << 3));
        func_01ffddec(&t2, *e, key, 1);
        key = t2;
    }
    return key;
}
