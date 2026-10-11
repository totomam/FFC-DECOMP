#include "ffc/types.h"

extern void func_020694ac(void *p, uint32_t a, uint32_t b);
extern uint8_t data_ov007_021c44d4[];

void *func_ov007_021a73d4(void *self, uint32_t param)
{
    uint8_t *p = (uint8_t *)self;
    func_020694ac(self, 0, 0);
    *(void **)p = data_ov007_021c44d4;
    *(uint32_t *)(p + 0xb8) = 0;
    *(uint32_t *)(p + 0xbc) = 0;
    *(uint32_t *)(p + 0xc0) = 0;
    *(uint32_t *)(p + 0xc4) = 0;
    *(uint32_t *)(p + 0xc8) = param;
    *(uint8_t *)(p + 0xcc) = 1;
    return self;
}
