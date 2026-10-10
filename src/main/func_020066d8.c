#include "ffc/types.h"

extern void func_02007924(void *p);
extern void func_02007a0c(void *p, uint32_t v, int flag);

void func_020066d8(uint8_t *p)
{
    func_02007924(p + 0x31d8);
    func_02007a0c(p + 0x31d8, *(uint32_t *)(p + 8), 0);
}
