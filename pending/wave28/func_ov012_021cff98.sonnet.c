#include "ffc/types.h"

extern void func_02069694(void *p, uint32_t v, int n);
extern void func_02069670(void *p, uint32_t v, int n, uint32_t x);

typedef struct { uint8_t pad[0xec]; uint32_t t1[75]; uint32_t t2[15]; uint32_t h; uint8_t pad2[0x2e5-0x254-4]; uint8_t c; } S;

void func_ov012_021cff98(S *p)
{
    uint32_t idx;
    uint32_t *a, *b;
    func_02069694(p, p->h, 4);
    func_02069694(p, p->h, 2);
    idx = 14;
    if (p->c >= 10) idx = p->c;
    a = &p->t2[idx];
    b = &p->t1[idx];
    func_02069670(p, p->h, 4, *a);
    func_02069670(p, p->h, 2, *b);
}
