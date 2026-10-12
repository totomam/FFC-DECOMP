#include "ffc/types.h"

extern void func_02056c9c(void *p, int32_t x);
extern char data_020b1aec[];

uint8_t *func_02069210(uint8_t *p)
{
    func_02056c9c(p, 0);
    *(char **)p = data_020b1aec;
    *(int32_t *)(p + 0x80) = 0;
    *(uint8_t *)(p + 0x84) = 1;
    *(uint8_t *)(p + 0x85) = 0;
    *(uint8_t *)(p + 0x86) = 0;
    *(uint8_t *)(p + 0x87) = 0;
    *(uint8_t *)(p + 0x88) = 0;
    *(int32_t *)(p + 0x8c) = 0;
    *(int32_t *)(p + 0x90) = 1 - 2;
    return p;
}
