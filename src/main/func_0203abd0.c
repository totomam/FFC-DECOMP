#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern uint32_t func_ov011_021bf0f8(void *obj, uint8_t a, uint32_t b, uint8_t c);
extern void func_02056bc0(void *object, void *node);

typedef struct { uint32_t a; uint32_t b; } Pair;
extern Pair data_020aea88;

void func_0203abd0(uint8_t *p, uint32_t x, uint32_t y)
{
    void *node = func_0205681c(0x344);
    uint32_t r = (uint32_t)node;
    if (node) {
        r = func_ov011_021bf0f8(node, (uint8_t)x, y, p[0x88]);
    }
    func_02056bc0(p + 0x14, (void *)r);
    *(Pair *)(p + 0x80) = data_020aea88;
}
