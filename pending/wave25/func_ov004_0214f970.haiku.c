#include "ffc/types.h"

extern uint32_t func_020817c8(int32_t first, int32_t second);
extern void func_01ffe554(void *p);
extern uint32_t data_ov004_021596ac[2];

void func_ov004_0214f970(uint8_t *p)
{
    int32_t v;

    v = func_020817c8(*(int32_t *)(p + 0xec), 0xecd);
    *(int32_t *)(p + 0xec) = v;
    if (v > 0x1000) {
        func_01ffe554(*(void **)(p + 0x90));
        return;
    }
    *(uint32_t *)(p + 0x80) = data_ov004_021596ac[0];
    *(uint32_t *)(p + 0x84) = data_ov004_021596ac[1];
}
