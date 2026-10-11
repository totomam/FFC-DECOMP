#include "ffc/types.h"

extern uint32_t func_02056aec(void *p);
extern uint32_t func_ov013_021be2dc(uint32_t a, uint32_t b, uint32_t c);
extern uint32_t func_0206cbf4(uint32_t x);
extern void func_02056bc0(void *object, void *node);
extern uint32_t data_ov013_021c4e94[];

void func_ov013_021c29e8(char *p)
{
    uint32_t r4 = func_02056aec(p);
    uint32_t *d = data_ov013_021c4e94;
    uint32_t v0 = *(uint32_t *)(p + 0xf0);
    uint32_t v1 = *d++;
    uint32_t v2 = *d++;
    uint32_t r6 = func_ov013_021be2dc(v0, v1, v2);
    uint32_t r1 = func_0206cbf4(*(uint32_t *)(p + 0xf4));
    p += 0x14;
    func_02056bc0(p, (void *)r1);
    func_02056bc0(p, (void *)r6);
    func_02056bc0(p, (void *)r4);
}
