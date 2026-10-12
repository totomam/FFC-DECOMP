#include "ffc/types.h"

extern void func_02069694(void *p, uint32_t v, uint32_t n);
extern void func_02069670(void *p, uint32_t v, uint32_t n, uint32_t w);

typedef struct { uint8_t pad0[0xec]; uint32_t b[0x50]; uint32_t c; uint8_t pad1[0x258-0xec-0x140-4]; uint32_t h; } S;

void func_ov012_021d0038(S *p)
{
    uint32_t i;
    uint32_t idx;

    func_02069694(p, p->h, 4);
    func_02069694(p, p->h, 2);

    idx = ((uint8_t *)p)[0x2e5];
    i = 7;
    if (idx >= 5 && idx < 10) {
        i = idx;
    }
    func_02069670(p, p->h, 4, ((uint32_t *)((uint8_t *)p + 0x218))[i]);
    func_02069670(p, p->h, 2, p->b[i]);
}
