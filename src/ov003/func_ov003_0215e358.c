#include "ffc/types.h"

extern void func_02056c4c(void *object);
extern void *func_0205681c(uint32_t size);
extern void *func_ov003_0215d3d4(void *node, void *p, uint32_t e8, uint32_t ec, uint32_t f0,
                                 void *a1, uint32_t a2, uint32_t a3, uint32_t x4, uint32_t x5);
extern void func_02056bc0(void *object, void *node);

void func_ov003_0215e358(uint8_t *p, void *a1, uint32_t a2, uint32_t a3, uint32_t x4, uint32_t x5)
{
    void *node;

    func_02056c4c(*(void **)(p + 0xb8));
    node = func_0205681c(0x5c);
    if (node != 0) {
        node = func_ov003_0215d3d4(node, p, *(uint32_t *)(p + 0xe8), *(uint32_t *)(p + 0xec),
                                   *(uint32_t *)(p + 0xf0), a1, a2, a3, x4, x5);
    }
    func_02056bc0(*(void **)(p + 0xb8), node);
}
