#include "ffc/types.h"

typedef struct { uint32_t a, b, c, d; } S;
extern void func_02056c9c(void *self, int zero);
extern void func_020095b8(void *self, uint32_t v);
extern char data_ov003_0217a49c[];

void *func_ov003_021637a4(uint8_t *p, uint32_t a, S s)
{
    func_02056c9c(p, 0);
    *(char **)p = data_ov003_0217a49c;
    *(uint32_t *)(p + 0x84) = a;
    *(uint32_t *)(p + 0x88) = s.a;
    *(uint32_t *)(p + 0x8c) = s.b;
    func_020095b8(p + 0x90, s.c);
    *(uint32_t *)(p + 0x9c) = s.d;
    return p;
}
