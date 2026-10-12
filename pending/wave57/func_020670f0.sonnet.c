#include "ffc/types.h"

extern uint32_t func_0209a978(uint32_t a, uint32_t b);
extern void *func_0205ff14(void *object, uint32_t index, uint32_t third);
extern void *func_0205fbc8(void *obj, uint32_t zero, uint32_t sum, uint32_t b);
extern void func_0205fdb0(void *destination, const void *source);
extern uint32_t data_020b1134[];

typedef struct {
    uint32_t f0, f4, f8, fc, f10, f14, f18;
} Item;

void func_020670f0(uint8_t *a, uint32_t b) {
    uint32_t sum = 0;
    uint32_t i = 0;
    uint32_t off;
    Item *it;
    uint8_t *r6 = *(uint8_t **)(*(uint8_t **)(*(uint8_t **)(a + 0x1c) + 0x18) + 8);

    for (i = 0; i < *(uint32_t *)(a + 0x30); i++) {
        off = i * 0x1c;
        it = (Item *)(*(uint8_t **)(a + 0x2c) + off);
        {
            uint32_t r4 = *(uint32_t *)(r6 + 0x4c);
            uint32_t x = data_020b1134[it->f10 * 2] * data_020b1134[it->f10 * 2 + 1];
            if (*(uint32_t *)(r6 + 0x40) == 0) {
                it->f14 = func_0209a978(x + r4 - 1, r4) * r4;
            } else {
                it->f14 = (func_0209a978(2 * x + r4 - 1, r4) * r4) >> 1;
            }
        }
        it->f18 = sum;
        sum += it->f14;
    }

    *(void **)(a + 0x4c) = func_0205ff14(*(void **)(a + 0x20), *(uint32_t *)(a + 0x30), b);
    *(void **)(a + 0x48) = func_0205fbc8(r6, 0, sum, b);

    for (i = 0; i < *(uint32_t *)(a + 0x30); i++) {
        uint32_t k;
        uint32_t *P;
        uint32_t t;
        off = i * 0x1c;
        it = (Item *)(*(uint8_t **)(a + 0x2c) + off);
        k = it->f10;
        P = *(uint32_t **)(*(uint8_t **)(a + 0x4c) + 4);

        P[2 * i] = (P[2 * i] & 0xffff3fffu) | ((k & 3u) << 14);
        P[2 * i] = (P[2 * i] & 0x3fffffffu) | ((((uint32_t)((int32_t)k >> 2)) & 3u) << 30);
        func_0205fdb0(&P[2 * i], *(const void **)(a + 0x44));

        t = func_0209a978(*(uint32_t *)(*(uint8_t **)(a + 0x48) + 0x18) + it->f18,
                          *(uint32_t *)(r6 + 0x4c));
        if (((P[2 * i] >> 13) & 1u) == 1) {
            t <<= 1;
        }
        P[2 * i + 1] = (P[2 * i + 1] & 0xfffffc00u) | (t & 0x3ffu);
    }
}
