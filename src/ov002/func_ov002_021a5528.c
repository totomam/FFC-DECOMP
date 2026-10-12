#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern uint32_t func_ov002_021c85f8(void *p);
extern uint32_t func_ov002_0219a9dc(uint32_t x, Pair p);
extern void func_02056bc0(void *object, void *node);
extern void func_ov002_021c8e38(void *out, uint32_t a, uint32_t b, uint32_t c);
extern void func_ov002_021a56d0(void *self, void *x, void *out, uint32_t y, uint32_t z);
extern void func_ov002_021c8e40(void *p);
extern Pair data_ov002_021d524c;

void func_ov002_021a5528(uint8_t *a0, uint32_t *a1)
{
    uint8_t *self = a0;
    uint32_t *node = a1;
    uint32_t out[3];
    uint32_t r;
    uint8_t *x;

    if (func_ov002_021c85f8(self + 0x144) != node[5]) {
        return;
    }
    r = func_ov002_0219a9dc(*(uint32_t *)(self + 0xfc), data_ov002_021d524c);
    func_02056bc0(self + 0x14, (void *)r);
    *(uint32_t *)(self + 0x18c) = node[4];
    func_ov002_021c8e38(out, node[5], node[6], node[7]);
    x = self;
    if (self) {
        x = self + 0x80;
    }
    func_ov002_021a56d0(self, x, out, node[8], 1);
    func_ov002_021c8e40(out);
}
