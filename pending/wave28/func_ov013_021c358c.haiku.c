#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void *func_ov013_021c2974(void *obj, uint32_t a, uint32_t b, void *c);
extern void func_02056bc0(void *object, void *node);
extern uint32_t data_ov013_021c4ecc[2];

void func_ov013_021c358c(uint8_t *p)
{
    uint32_t a, b;
    void *n = func_0205681c(0x12c);
    if (n != 0) {
        n = func_ov013_021c2974(n, *(uint32_t *)(p + 0x88), *(uint32_t *)(p + 0x90), p + 0x98);
    }
    func_02056bc0(p + 0x14, n);
    a = data_ov013_021c4ecc[0];
    b = data_ov013_021c4ecc[1];
    *(uint32_t *)(p + 0x80) = a;
    *(uint32_t *)(p + 0x84) = b;
}
