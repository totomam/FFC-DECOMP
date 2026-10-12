#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} S;

extern uint32_t func_ov003_0214649c(void *p);
extern uint32_t func_ov003_02153cb4(uint32_t x, uint32_t a, uint32_t b);
extern void *func_0205681c(uint32_t size);
extern void *func_ov003_0214f18c(void *n, void *p, uint32_t v, S s, uint32_t c, uint32_t z, uint32_t r7);
extern void func_02056bc0(void *object, void *node);

void func_ov003_021499d0(void *p, S s, uint32_t c)
{
    uint32_t r7;
    void *node;

    r7 = func_ov003_02153cb4(func_ov003_0214649c(p), s.a, s.b);
    node = func_0205681c(0xd0);
    if (node != 0) {
        node = func_ov003_0214f18c(node, p, *(uint32_t *)((uint8_t *)p + 0x178), s, c, 0, r7);
    }
    func_02056bc0(*(void **)((uint8_t *)p + 0x190), node);
}
