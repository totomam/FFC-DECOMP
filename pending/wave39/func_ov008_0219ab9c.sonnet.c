#include "ffc/types.h"

extern void func_020694ac(void *a, uint32_t b, uint32_t c);
extern char data_ov008_021a7b70[];

void *func_ov008_0219ab9c(void *a, uint32_t b) {
    uint8_t *p = (uint8_t *)a;
    uint32_t *q;
    uint8_t i;

    func_020694ac(a, 0, 0);
    *(void **)p = data_ov008_021a7b70;
    uint32_t *q1 = (uint32_t *)(p + 0xcc);
    uint32_t *q2;
    *(uint32_t *)(p + 0xcc) = 0;
    q1[1] = 0;
    q1[2] = 0;
    q2 = (uint32_t *)(p + 0xe0);
    q2[1] = 0;
    q2[2] = 0;
    *(uint32_t *)(p + 0xe0) = 0;
    p[0x104] = 0;
    p[0x105] = 0;
    *(uint32_t *)(p + 0x10c) = 0;
    p[0x110] = 0;
    p[0x111] = 0xff;
    p[0x112] = 0;
    *(uint32_t *)(p + 0x118) = b;
    for (i = 0; i < 8; i++) {
        p[0xfc + i] = 0;
    }
    return a;
}
