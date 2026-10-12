#include "ffc/types.h"

extern void func_02021338(uint32_t x);
extern void func_02068514(void *a, uint32_t b);
extern void func_0208763c(void *p);
extern void func_02087678(void *p);
extern void func_02056c4c(void *p);

void func_0200c710(uint8_t *a)
{
    uint8_t *o;
    uint8_t *q;
    uint8_t f;
    int ret;

    func_02021338(0xd7);
    func_02068514(*(void **)(a + 0x94), 0);
    o = *(uint8_t **)(a + 0x98);
    q = o + 0x1c;
    f = o[0x12];
    if (f != 0) {
        func_0208763c(q);
    }
    ret = 1;
    if (*(uint32_t *)(o + 0x14) != 0) {
        ret = 0;
    }
    if (f != 0) {
        func_02087678(q);
    }
    if (ret != 0) {
        return;
    }
    {
        uint32_t *s = *(uint32_t **)(a + 0x94);
        s[3] &= ~0xffu;
    }
    func_02056c4c(*(void **)(a + 0x98));
}
