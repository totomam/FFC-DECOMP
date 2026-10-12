#include "ffc/types.h"

extern void func_020375f4(uint32_t mask);
extern void func_02056bc0(void *object, void *node);
extern void *func_0205681c(uint32_t size);
extern void *func_ov004_02152d74(void *p, uint32_t a, void *b, uint32_t c,
                                 uint32_t d, uint32_t e, uint32_t f, uint32_t g,
                                 uint32_t h, uint32_t i, uint32_t j, uint32_t k);
extern uint32_t data_020afb50[2];

#define FIELD(off) (*(uint32_t *)((uint8_t *)self + (off)))

void func_02044ba0(void *self)
{
    uint32_t a94;
    uint32_t a90;
    uint8_t *obj48;
    void *node;

    func_020375f4(0x20);
    a94 = FIELD(0x94);
    a90 = FIELD(0x90);
    obj48 = (uint8_t *)self + 0x48;
    func_02056bc0(obj48, (void *)a90);
    func_02056bc0(obj48, (void *)a94);

    node = func_0205681c(0xe2 << 2);
    if (node != 0) {
        node = func_ov004_02152d74(node, FIELD(0x98), (uint8_t *)self + 0xf0, FIELD(0x9c),
                                   FIELD(0xa0), 0, FIELD(0xa8), 0,
                                   FIELD(0x90), FIELD(0xa4), (uint8_t *)self + 0xb0, 0);
    }
    func_02056bc0((uint8_t *)self + 0x14, node);
    {
        typedef struct { uint32_t a, b; } P;
        P v = *(P *)data_020afb50;
        *(P *)((uint8_t *)self + 0x80) = v;
    }
}
