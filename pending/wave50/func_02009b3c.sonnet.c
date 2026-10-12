#include "ffc/types.h"

extern void func_02056c9c(void *p);
extern void func_020095b8(void *dst, void *src);
extern void func_020393a8(void *a, void *b, int c);
extern void *func_020059cc(void *object);
extern uint8_t data_020aae38[];
extern uint8_t data_020aaddc[];

void *func_02009b3c(void *p, uint32_t unused, void *a, uint32_t b)
{
    uint8_t *self = (uint8_t *)p;
    uint32_t s1[3];
    uint32_t s0[3];
    uint32_t v1;
    uint32_t v2;

    func_02056c9c(p);
    *(uint8_t **)self = data_020aae38;
    func_020095b8(s1, a);
    func_020393a8(s0, s1, 1);
    func_020095b8(self + 0x88, s0);
    func_020059cc(s0);
    func_020059cc(s1);
    *(uint32_t *)(self + 0xa8) = 0;
    *(uint32_t *)(self + 0xac) = b;
    v1 = *(uint32_t *)(data_020aaddc + 0x1c);
    v2 = *(uint32_t *)(data_020aaddc + 0x20);
    *(uint32_t *)(self + 0x84) = v2;
    *(uint32_t *)(self + 0x80) = v1;
    return p;
}
