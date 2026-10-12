#include "ffc/types.h"

extern uint8_t *func_0209bfdc(uint8_t *r0, uint8_t *r1);

typedef struct {
    uint32_t pad;
    uint8_t *p;
} S;

void func_0209d160(uint8_t *a, S *b) {
    uint8_t *p = b->p;
    uint8_t f = p[0];
    uint32_t r4 = f & 0x40;
    uint32_t r6;
    uint8_t *q;

    a[0x6b] = (r4 != 0);
    a[0x6a] = (f & 0x20) != 0;
    r6 = f & 0x80;
    a[0x6c] = (r6 != 0);

    *(uint16_t *)(a + 0x68) = (uint16_t)(p[1] << 4);
    *(uint16_t *)(a + 0x68) = *(uint16_t *)(a + 0x68) | 0x4000;
    q = p + 2;

    q = func_0209bfdc(q, a + 0x60);
    if (r4) {
        q = func_0209bfdc(q, a + 0x64);
    }
    if (r4) {
        if (r6) {
            *(uint32_t *)(a + 0x18) = *(uint32_t *)(a + 0x38);
        } else {
            *(uint32_t *)(a + 0x18) = *(uint32_t *)(a + 0x48);
        }
    } else {
        *(uint32_t *)(a + 0x18) = *(uint32_t *)(a + 0x14);
    }
}
