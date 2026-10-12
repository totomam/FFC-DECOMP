/* cflags: -lang c++ */
#include "ffc/types.h"

extern "C" {
extern void *func_0205681c(uint32_t x);
extern void *func_02035b64(void *);
extern void func_02035ba4(void *p, uint32_t zero, uint8_t b);
extern void func_02035bd8(void *p, uint32_t *v);
extern void func_02035c18(uint32_t *v);
extern void func_0202afc0(void *self, uint32_t a1, uint32_t a2, void *a3, uint32_t a4);
extern void func_02035b84(void *p);
extern void func_02056844(void *p);
void func_0202be14(void *a0, uint32_t a1, uint32_t a2, void *a3, uint8_t a4, uint32_t *a5, uint8_t a6);
}

void func_0202be14(void *a0, uint32_t a1, uint32_t a2, void *a3, uint8_t a4, uint32_t *a5, uint8_t a6)
{
    uint32_t tmp[2];
    volatile uint32_t spill;
    uint8_t *s = (uint8_t *)a0;

    spill = a2;
    void *p = func_0205681c(8);
    if (p) p = func_02035b64(p);
    if (p != 0) {
        func_02035ba4(p, 0, a6);
        tmp[0] = *a5;
        func_02035bd8(p, &tmp[0]);
        func_02035c18(&tmp[0]);
    }
    *(uint32_t *)(s + 0x1c) = 1u << 30;
    *(uint32_t *)(s + 0x18) = 0;
    func_0202afc0(a0, a1, spill, p, 0);
    *(uint32_t *)(s + 0x0c) &= ~0xffu;
    *(void **)(s + 0x20) = a3;
    s[0x41] = a4;
    if (p != 0) {
        func_02035b84(p);
        func_02056844(p);
    }
}
