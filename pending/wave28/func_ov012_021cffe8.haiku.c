#include "ffc/types.h"

extern void func_02069694(void *p, uint32_t a, uint32_t b);
extern void func_02069670(void *p, uint32_t a, uint32_t b, uint32_t c);

void func_ov012_021cffe8(void *p0) {
    uint8_t *p = (uint8_t *)p0;
    uint32_t idx;
    uint8_t *q;
    uint8_t v;

    func_02069694(p0, *(uint32_t *)(p + 0x25C), 4);
    func_02069694(p0, *(uint32_t *)(p + 0x25C), 2);

    v = p[0x2E5];
    idx = 0;
    if (v < 5) {
        idx = v;
    }

    q = p + (idx << 2);
    func_02069670(p0, *(uint32_t *)(p + 0x25C), 4, *(uint32_t *)(q + 0x218));
    func_02069670(p0, *(uint32_t *)(p + 0x25C), 2, *(uint32_t *)(q + 0xEC));
}
