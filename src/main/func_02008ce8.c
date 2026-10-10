#include "ffc/types.h"

extern void func_02008b78(void *a, int b, uint32_t c, uint32_t d, uint32_t e);
extern uint8_t data_020aacd0[];

void *func_02008ce8(void *p0, uint32_t p1, uint32_t p2, uint32_t p3)
{
    func_02008b78(p0, 6, p1, p2, p3);
    *(void **)p0 = (void *)data_020aacd0;
    return p0;
}
