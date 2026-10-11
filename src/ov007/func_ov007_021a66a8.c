#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern uint32_t func_0205681c(uint32_t size);
extern uint32_t func_ov007_021a55c4(uint32_t node, uint32_t a, uint32_t b);
extern void func_02056bc0(void *object, uint32_t node);
extern Pair data_ov007_021c43a0;

void func_ov007_021a66a8(uint8_t *p)
{
    uint32_t node = func_0205681c(300);
    if (node) {
        node = func_ov007_021a55c4(node, *(uint32_t *)(p + 0x88), *(uint32_t *)(p + 0x9c));
    }
    func_02056bc0(p + 0x14, node);
    *(uint32_t *)(p + 0x94) = 2;
    *(Pair *)(p + 0x80) = data_ov007_021c43a0;
}
