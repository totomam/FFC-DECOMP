#include "ffc/types.h"

extern uint32_t func_02086ad4(void *object, uint32_t first, ...);
extern void func_02005988(void *a, void *b);
extern void func_020095b8(void *a, void *b);
extern void func_02009574(void *object, void *a, uint32_t value);
extern void func_020059cc(void *object);
extern uint32_t data_ov013_021c3f1c[];

void func_ov013_021be5b0(uint8_t *self, uint32_t a, uint32_t b)
{
    uint32_t o1[3];
    uint32_t o2[0x20];
    uint32_t v = (*(uint32_t **)(self + 0xc8))[4];
    uint32_t k;
    uint32_t w;

    for (k = 3; k != 0; k--) {
        uint32_t t = (k >= 3) ? 0 : v;
        func_02086ad4(o2, data_ov013_021c3f1c[1], a, b, k, t + 0x61);
        func_02005988(o1, o2);
        if (*(uint32_t *)(self + 0x10c) < *(uint32_t *)(self + 0x110)) {
            void *base = *(void **)(self + 0x108) + *(uint32_t *)(self + 0x10c) * 12;
            if (base != 0) {
                func_020095b8(base, o1);
            }
            (*(uint32_t *)(self + 0x10c))++;
        } else {
            *(uint8_t *)&w = 0;
            func_02009574(self + 0x108, o1, w);
        }
        func_020059cc(o1);
    }
}
