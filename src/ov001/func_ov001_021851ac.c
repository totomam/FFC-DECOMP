#include "ffc/types.h"

typedef struct {
    uint32_t w[351];
} Big;

extern void func_ov001_02184444(void *dst, uint32_t n, void *src, uint32_t m);
extern void func_ov000_0216552c(void *a, void *b, uint32_t c, uint32_t d, void *e, uint32_t f);
extern uint32_t func_ov000_0216591c(void);
extern void func_ov000_021652a8(uint32_t a, uint32_t b, uint32_t c, void *d, Big e);
extern uint8_t data_ov001_02193b78[];


void func_ov001_021851ac(uint8_t *p, int u1, int u2, uint32_t c)
{
    Big b;

    b.w[350] = 0;
    func_ov001_02184444(&b, 8, p + 0x84, c);
    func_ov000_0216552c(*(void **)p, &b, b.w[350], 0, p + 0xd4, 8);
    *(uint32_t *)(p + 0xb8) = func_ov000_0216591c();
    func_ov000_021652a8(3, 0, 0x10, data_ov001_02193b78, b);
}
