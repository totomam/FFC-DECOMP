#include "ffc/types.h"

extern uint32_t func_02062a78(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f);
extern void func_02056bc0(void *object, void *node);

void func_ov007_0219e554(uint8_t *p)
{
    volatile uint32_t arr[7];
    uint32_t r;

    arr[5] = 0xfffffe00;
    arr[1] = 600;
    arr[0] = 0;
    arr[2] = 0;
    arr[3] = 0;
    arr[4] = 0;
    arr[6] = 0;
    r = func_02062a78(*(uint32_t *)(p + 0x80), arr[5], arr[6], 0, arr[0], arr[1]);
    func_02056bc0(p + 0x14, (void *)r);
}
