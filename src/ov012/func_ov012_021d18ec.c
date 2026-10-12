#include "ffc/types.h"

typedef struct {
    uint8_t a;
    uint8_t pad[3];
    uint8_t b;
} S5;

extern void func_020694ac(void *p, uint32_t x, uint32_t y, uint32_t z);
extern void *data_ov012_021d45a0;

void *func_ov012_021d18ec(uint8_t *p, uint32_t a, uint8_t b, uint8_t c, S5 s)
{
    uint8_t *q;
    uint32_t t = c;

    func_020694ac(p, 0, 0, t);
    q = p;
    *(void **)q = &data_ov012_021d45a0;
    *(uint32_t *)(q + 0x108) = a;
    q[0x10c] = b;
    q[0x10d] = t;
    *(uint32_t *)(q + 0x110) = 0;
    *(uint32_t *)(q + 0x114) = 0;
    q[0x118] = s.a;
    q[0x128] = 0;
    q[0x130] = s.b;
    q[0x131] = 0;
    return p;
}
