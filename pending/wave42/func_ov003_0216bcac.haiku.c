#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_ov003_02165330(void *obj, void *a, uint32_t x, uint32_t y, uint32_t p5, uint32_t p6, uint32_t p7, uint32_t p8);
extern void func_ov003_02165254(void *obj, void *a, uint32_t x, uint32_t y, uint32_t p5, uint32_t p6, uint32_t p7, uint32_t p8);

void func_ov003_0216bcac(void *a, uint32_t *b)
{
    uint32_t off = b[2];
    uint32_t *s = (uint32_t *)((uint8_t *)b + off);
    uint32_t first = *(uint32_t *)((uint8_t *)b + off);
    uint32_t cnt = b[1];
    uint32_t f = (cnt > 1) ? s[1] : 1;
    uint32_t r3v = (cnt > 2) ? s[2] : 0;
    uint32_t r7 = (cnt > 4) ? s[4] : 0;
    uint32_t r6 = (cnt > 3) ? s[3] : 0;
    uint32_t r4 = (cnt > 5) ? s[5] : 0;
    uint32_t r5 = (cnt > 6) ? s[6] : 0;
    void *o;

    if (f == 0) {
        o = func_0205681c(0x98);
        if (o != 0) {
            func_ov003_02165330(o, a, (uint16_t)first, r3v, r7, r6, (uint16_t)r4, r5);
        }
    } else {
        o = func_0205681c(0x98);
        if (o != 0) {
            func_ov003_02165254(o, a, (uint16_t)first, r3v, r7, r6, (uint16_t)r4, r5);
        }
    }
}
