/* cflags: -lang c++ */
#include "ffc/types.h"

extern "C" {
void func_02021338(uint32_t x);
void func_02068514(void *a, uint32_t b);
void func_0208763c(void *p);
void func_02087678(void *p);
void func_02056c4c(void *p);
void func_0200c710(uint8_t *a);
}

struct Guard {
    uint8_t f; uint8_t *q; uint32_t pad;
    Guard(uint8_t *o) : f(o[0x12]), q(o + 0x1c) { if (f) func_0208763c(q); }
    ~Guard() { if (f) func_02087678(q); }
};

void func_0200c710(uint8_t *a)
{
    int ret;
    func_02021338(0xd7);
    func_02068514(*(void **)(a + 0x94), 0);
    {
        uint8_t *o = *(uint8_t **)(a + 0x98);
        Guard g(o);
        ret = (*(uint32_t *)(o + 0x14) == 0);
    }
    if (ret != 0) return;
    {
        uint32_t *s = *(uint32_t **)(a + 0x94);
        s[3] &= ~0xffu;
    }
    func_02056c4c(*(void **)(a + 0x98));
}
