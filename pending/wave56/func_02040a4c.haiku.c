#include "ffc/types.h"

typedef struct {
    uint32_t w0;
    uint32_t w1;
} Pair;

extern uint32_t func_02056aec(void *p);
extern uint32_t func_0203f784(void *p, int x);
extern void func_02056bc0(void *object, void *node);
extern Pair data_020af2a0;
extern Pair data_020af2a8;
extern Pair data_020af2b0;
extern Pair data_020af2b8;

void func_02040a4c(uint8_t *a)
{
    uint32_t v;
    uint32_t r5;
    uint32_t x;
    uint8_t *node;

    v = *(uint32_t *)(a + 0x19c);
    switch (v) {
    default:
        r5 = func_02056aec(a);
        x = func_0203f784(a, 0x17);
        node = a + 0x14;
        func_02056bc0(node, (void *)x);
        func_02056bc0(node, (void *)r5);
        return;
    case 3:
        *(Pair *)(a + 0x80) = data_020af2a0;
        return;
    case 0:
        *(Pair *)(a + 0x80) = data_020af2a8;
        return;
    case 2:
        *(Pair *)(a + 0x80) = data_020af2b0;
        return;
    case 1:
        *(Pair *)(a + 0x80) = data_020af2b8;
        return;
    }
}
