#include "ffc/types.h"

extern uint32_t data_020b8e44;
extern uint32_t func_02071e64(uint32_t x);
extern uint32_t func_0205681c(uint32_t x);
extern uint32_t func_ov007_021aac74(uint32_t a, uint32_t b, uint32_t c);
extern void func_02056bc0(void *object, void *node);
extern uint32_t data_ov007_021c4ec8[];

void func_ov007_021ab3e4(uint8_t *a, uint32_t b)
{
    uint32_t r6 = func_02071e64(*(uint32_t *)(*(uint32_t *)data_020b8e44 + 0x80));
    uint32_t node = func_0205681c(0xf4);
    if (node != 0) {
        node = func_ov007_021aac74(node, r6, b);
    }
    func_02056bc0(a + 0x14, (void *)node);
    uint32_t *src = data_ov007_021c4ec8;
    uint32_t v0 = src[0];
    uint32_t v1 = src[1];
    *(uint32_t *)(a + 0xb0) = v0;
    *(uint32_t *)(a + 0xb4) = v1;
}
