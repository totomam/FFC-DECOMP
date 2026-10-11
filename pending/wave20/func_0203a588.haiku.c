#include "ffc/types.h"

extern void func_02056c9c(void *p, uint32_t x);
extern char data_020ae8b4[];

void *func_0203a588(void *p, uint32_t b)
{
    uint8_t *obj = (uint8_t *)p;
    func_02056c9c(p, 0);
    *(void **)obj = data_020ae8b4;
    *(uint8_t *)(obj + 0x80) = 0;
    *(uint32_t *)(obj + 0x84) = b;
    *(uint32_t *)(obj + 0x88) = 0;
    *(uint8_t *)(obj + 0x8c) = 1;
    return p;
}
