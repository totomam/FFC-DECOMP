#include "ffc/types.h"

extern void func_02084b2c(void *dst, int val, uint32_t n);
extern void func_02084ca4(uint32_t a, uint32_t b, uint16_t c);
extern uint16_t func_0208d770(void);
extern uint16_t func_0208d614(void);
extern uint32_t func_0208d918(void *fn, void *arg);
extern void func_0206cb44(uint8_t *p);
extern void func_0206d254(void);

void func_0206d188(uint8_t *p, uint16_t a1, uint32_t a2, uint16_t a3, uint32_t *a5)
{
    uint32_t o;
    uint32_t k;
    uint32_t n;
    uint32_t t;
    uint32_t v;
    uint32_t r;

    o = 0xf8e;
    *(uint16_t *)(p + o) = 0;
    *(uint16_t *)(p + o + 2) = 1;
    *(uint8_t *)(p + o + 5) = 1;

    k = 0x30ba;
    *(uint32_t *)(p + k + 0x62) = ((uint32_t)(p + k + 0x1f)) & ~0x1fu;
    func_02084b2c(*(void **)(p + k + 0x62), 0, 0x40);
    func_02084ca4(a2, *(uint32_t *)(p + k + 0xf6), a3);
    *(uint32_t *)(*(uint8_t **)(p + k + 0x62)) = *(uint32_t *)(p + k + 0xf6);
    *(uint16_t *)(*(uint8_t **)(p + k + 0x62) + 4) = a3;

    if (a5 != 0) {
        v = *a5;
    } else {
        v = *(uint32_t *)(p + 0x40);
    }
    *(uint32_t *)(*(uint8_t **)(p + k + 0x62) + 8) = v;

    t = *(uint32_t *)(p + 0x48);
    if (t == 0x10000) {
        t = func_0208d770();
    }
    n = 0x311c;
    *(uint16_t *)(*(uint8_t **)(p + n) + 0xc) = t;
    *(uint16_t *)(*(uint8_t **)(p + n) + 0xe) = 1;
    *(uint16_t *)(*(uint8_t **)(p + n) + 0x10) = *(uint32_t *)(p + 0x44) - 1;
    *(uint16_t *)(*(uint8_t **)(p + n) + 0x18) = func_0208d614();
    *(uint16_t *)(*(uint8_t **)(p + n) + 0x32) = a1;
    *(uint16_t *)(*(uint8_t **)(p + n) + 0x34) = *(uint32_t *)(p + 0x4c);
    *(uint16_t *)(*(uint8_t **)(p + n) + 0x36) = *(uint32_t *)(p + 0x50);
    *(uint8_t *)(p + n - 0x68) = 0;
    r = func_0208d918((void *)func_0206d254, *(void **)(p + n));
    if (r != 2) {
        func_0206cb44(p);
    }
}
