#include "ffc/types.h"

extern void func_02056c9c(void *self, int zero);
extern void func_020095b8(void *self, uint32_t v);
extern char data_ov003_0217a49c[];

void func_ov003_021637a4(uint8_t *p, uint32_t a, ...)
{
    uint32_t av = a;
    func_02056c9c(p, 0);
    {
        uint32_t *ap = (uint32_t *)&a + 1;
        *(char **)p = data_ov003_0217a49c;
        *(uint32_t *)(p + 0x84) = av;
        *(uint32_t *)(p + 0x88) = ap[0];
        *(uint32_t *)(p + 0x8c) = ap[1];
        func_020095b8(p + 0x90, ap[2]);
        *(uint32_t *)(p + 0x9c) = ap[3];
    }
}
