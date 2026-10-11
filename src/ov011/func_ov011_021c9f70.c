#include "ffc/types.h"

extern void func_ov011_021c9edc(void *self);
extern void *func_0205681c(uint32_t size);
extern void *func_ov012_021cddd4(void *obj, void *field, int flag);
extern void func_02056bc0(void *object, void *node);
extern uint32_t data_ov011_021cbdf4[2];

typedef struct { uint32_t a; uint32_t b; } Pair;

void func_ov011_021c9f70(void *self)
{
    uint8_t *s = (uint8_t *)self;
    void *node;

    if (*(uint32_t *)(s + 0x94) == 1) {
        *(uint32_t *)(s + 0x94) = 0;
        func_ov011_021c9edc(self);
        return;
    }

    node = func_0205681c(0x8c);
    if (node != 0) {
        node = func_ov012_021cddd4(node, s + 0x94, 1);
    }
    func_02056bc0(s + 0x14, node);
    *(Pair *)(s + 0x80) = *(Pair *)data_ov011_021cbdf4;
}
