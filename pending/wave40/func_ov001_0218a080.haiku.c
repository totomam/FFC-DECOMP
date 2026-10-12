#include "ffc/types.h"

extern void func_0203758c(void *self);
extern void *func_0205681c(uint32_t size);
extern void *func_ov012_021d2654(void *node, void *buf, uint32_t a, uint32_t b, uint32_t c);
extern void *func_ov001_0218dde0(void *self, uint32_t flag);
extern void func_02056bc0(void *object, void *node);
extern uint32_t data_ov001_02194608[2];

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

void func_ov001_0218a080(void *self)
{
    uint8_t *p = (uint8_t *)self;
    void *node;
    uint32_t i;

    func_0203758c(self);
    for (i = 0; i < 2; i++) {
        p[i * 0x2d8 + 0x105] = 0;
    }
    ((void (**)(void *))*(void **)self)[0x19](self);

    node = func_0205681c(0x88);
    if (node != 0) {
        node = func_ov012_021d2654(node, p + 0x100, p[0x725], 0, p[0xec]);
    }
    func_02056bc0(func_ov001_0218dde0(self, 1), node);
    p[0x725] = 0;
    *(uint32_t *)(p + 0xf0) = 0;
    *(Pair *)(p + 0xf4) = *(Pair *)data_ov001_02194608;
}
