#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_02056c9c(void *p, uint32_t v);
extern int data_ov003_0217b344;

void *func_ov003_0216b5b0(void *a, uint8_t *b)
{
    uint32_t off = *(uint32_t *)(b + 8);
    uint8_t *q = b + off;
    uint16_t lo = (uint16_t)*(uint32_t *)(b + off);
    uint32_t n = *(uint32_t *)(b + 4);
    uint16_t x = (uint16_t)*(uint32_t *)(q + 4);
    uint8_t *s;
    uint8_t flag;

    if (n > 2) {
        flag = 1;
        if (*(uint32_t *)(q + 8) != 0) {
            flag = 0;
        }
    } else {
        flag = 1;
    }

    s = func_0205681c(0x8c);
    if (s != 0) {
        func_02056c9c(s, 0);
        *(void **)s = (void *)&data_ov003_0217b344;
        *(void **)(s + 0x80) = a;
        *(uint16_t *)(s + 0x84) = lo;
        *(uint16_t *)(s + 0x86) = x;
        *(uint8_t *)(s + 0x88) = flag;
    }
    return s;
}
