#include "ffc/types.h"

extern void func_ov004_02150918(uint32_t a, uint32_t b, uint32_t c);

typedef struct {
    uint32_t a;
    uint32_t b;
} G;

extern G data_ov004_02158c8c;

typedef struct {
    uint8_t pad0[0x80];
    uint32_t f80;
    uint32_t f84;
    uint8_t pad1[0x10];
    uint32_t f98;
} S;

void func_ov004_0214a384(S *p) {
    uint32_t x, y;
    func_ov004_02150918(*(uint32_t *)((uint8_t *)p + 0x88), *(uint32_t *)((uint8_t *)p + 0x90), *(uint32_t *)((uint8_t *)p + 0x94));
    p->f98 = 0;
    x = data_ov004_02158c8c.a;
    y = data_ov004_02158c8c.b;
    p->f80 = x;
    p->f84 = y;
}
