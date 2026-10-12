/* cflags: -nothumb */
#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern uint32_t func_01ff91f0(uint32_t a, uint32_t b, void *p);

void func_01ff92b4(void) {
    uint8_t *base = (uint8_t *)0x2ffe000;
    uint32_t r4 = 1;
    Pair *A[4];
    void *B[4];
    int i;

    if (base[0x1c] & 1) {
        A[0] = (Pair *)(base + 0x28);
        A[1] = (Pair *)(base + 0x38);
        A[2] = (Pair *)(base + 0x1c8);
        A[3] = (Pair *)(base + 0x1d8);
        B[0] = base + 0x3a0;
        B[1] = base + 0x314;
        B[2] = base + 0x350;
        B[3] = base + 0x364;
        for (i = 0; i < 4; i++) {
            uint32_t x = A[i]->a;
            uint32_t y = A[i]->b;
            if (i == 0) {
                x += 0x4000;
                y -= 0x4000;
            }
            r4 &= func_01ff91f0(x, y, B[i]);
        }
    }
    while (r4 == 0) {
    }
}
