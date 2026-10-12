#include "ffc/types.h"

extern void func_02069670(void *p, uint32_t a, int32_t b, uint32_t c);

void func_ov010_021ca380(void *p)
{
    uint8_t *b = (uint8_t *)p;
    if (b[0x27c] == 1) {
        func_02069670(p, *(uint32_t *)(b + 0x15c), 1, *(uint32_t *)(b + 0x2b0));
        func_02069670(p, *(uint32_t *)(b + 0x2b0), 3, *(uint32_t *)(b + 0x15c));
    } else {
        func_02069670(p, *(uint32_t *)(b + 0x158), 1, *(uint32_t *)(b + 0x2b0));
        func_02069670(p, *(uint32_t *)(b + 0x2b0), 3, *(uint32_t *)(b + 0x158));
    }
    func_02069670(p, *(uint32_t *)(b + 0x160), 1, *(uint32_t *)(b + 0x158));
}
