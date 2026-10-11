#include "ffc/types.h"

typedef struct { uint32_t a, b; } S;
extern uint32_t func_02056aec(void *p);
extern uint32_t func_ov013_021be2dc(uint32_t a, S s);
extern uint32_t func_0206cbf4(uint32_t x);
extern void func_02056bc0(void *object, void *node);
extern S data_ov013_021c4e94;

void func_ov013_021c29e8(char *p)
{
    uint32_t r4 = func_02056aec(p);
    uint32_t r6 = func_ov013_021be2dc(*(uint32_t *)(p + 0xf0), data_ov013_021c4e94);
    uint32_t r1 = func_0206cbf4(*(uint32_t *)(p + 0xf4));
    char *q = p + 0x14;
    func_02056bc0(q, (void *)r1);
    func_02056bc0(q, (void *)r6);
    func_02056bc0(q, (void *)r4);
}
