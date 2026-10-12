/* cflags: -lang c++ */
#include "ffc/types.h"

extern "C" {
uint32_t func_020367bc(void *p, uint32_t i);
void func_0200d5d4(void *object, uint32_t value);
}

extern "C" void func_ov010_021c0084(uint8_t *obj, uint32_t unused, uint32_t r2)
{
    uint8_t count = 0;
    uint32_t i;
    uint32_t off = 0x119;
    uint8_t * volatile p1 = obj;
    uint8_t * volatile p2 = obj;
    volatile uint32_t o1;
    volatile uint32_t o2 = off;
    uint32_t val;
    uint32_t a, b;

    *(uint8_t *)(obj + off) = count;
    a = *(volatile uint32_t *)(obj + 0xf8);
    p1 = obj + 0xf8;
    b = *(uint32_t *)(obj + 0xf8);
    *(uint32_t *)(obj + 0xf8) = b - a;
    p2 = obj + 0xf4;
    o1 = o2;
    o1 = o1 - 0xd;
    o2 = o2 - 0xd;
    for (i = 0; (uint8_t)i < 5; i++) {
        if (i == *(uint32_t *)(obj + o2)) {
            *(uint32_t *)(obj + o1) = count;
        }
        if (func_020367bc((void *)(uintptr_t)r2, i) != 0) {
            val = func_020367bc((void *)(uintptr_t)r2, i);
            if (*(uint32_t *)(obj + 0xf8) < *(uint32_t *)(obj + 0xfc)) {
                uint32_t k = *(uint32_t *)p1 + 1;
                *(uint32_t *)p1 = k;
                *(uint32_t *)(*(uint32_t *)(obj + 0xf4) + k*4 - 4) = val;
            } else {
                func_0200d5d4(p2, (uint32_t)&val);
            }
            count++;
        }
    }
    *(uint32_t *)(obj + 0x110) = count - 1;
}
