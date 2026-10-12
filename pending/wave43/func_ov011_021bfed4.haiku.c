#include "ffc/types.h"

extern void func_02069670(void *self, uint32_t a, uint32_t kind, uint32_t b);

void func_ov011_021bfed4(void *p)
{
    uint8_t *b = (uint8_t *)p;

    if (*(uint8_t *)(b + 0x27c) == 1) {
        func_02069670(p, *(uint32_t *)(b + 0x158), 3, *(uint32_t *)(b + 0x160));
        func_02069670(p, *(uint32_t *)(b + 0x158), 1, *(uint32_t *)(b + 0x15c));
        func_02069670(p, *(uint32_t *)(b + 0x15c), 3, *(uint32_t *)(b + 0x158));
        func_02069670(p, *(uint32_t *)(b + 0x15c), 1, *(uint32_t *)(b + 0x160));
        func_02069670(p, *(uint32_t *)(b + 0x160), 3, *(uint32_t *)(b + 0x15c));
        func_02069670(p, *(uint32_t *)(b + 0x160), 1, *(uint32_t *)(b + 0x158));
    } else {
        func_02069670(p, *(uint32_t *)(b + 0x158), 3, *(uint32_t *)(b + 0x160));
        func_02069670(p, *(uint32_t *)(b + 0x158), 1, *(uint32_t *)(b + 0x160));
        func_02069670(p, *(uint32_t *)(b + 0x160), 3, *(uint32_t *)(b + 0x158));
        func_02069670(p, *(uint32_t *)(b + 0x160), 1, *(uint32_t *)(b + 0x158));
    }

    func_02069670(p, *(uint32_t *)(b + 0x290), 3, *(uint32_t *)(b + 0x2b0));
    func_02069670(p, *(uint32_t *)(b + 0x2b0), 1, *(uint32_t *)(b + 0x290));
}
