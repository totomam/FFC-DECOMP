#include "ffc/types.h"

extern uint32_t func_ov007_021c014c(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, void *f);
extern void func_ov007_021c0bb4(void);

uint32_t func_ov007_021c01ac(uint32_t a, uint32_t b, uint32_t c, uint32_t d)
{
    return func_ov007_021c014c(a, b, c, d, 0, (void *)func_ov007_021c0bb4);
}
