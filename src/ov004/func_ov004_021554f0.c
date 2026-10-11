#include "ffc/types.h"

extern int func_ov004_0214f580(void *h);
extern void func_020213b8(uint32_t size);
extern void func_ov004_0214f388(void *h);
extern uint32_t data_ov004_02159cf8[];

typedef struct { uint32_t a; uint32_t b; } Pair;

void func_ov004_021554f0(uint8_t *p)
{
    if (func_ov004_0214f580(*(void **)(p + 0xe4)) == 0) {
        func_020213b8(0x94);
        func_ov004_0214f388(*(void **)(p + 0xe4));
        return;
    }
    *(Pair *)(p + 0x94) = *(Pair *)data_ov004_02159cf8;
}
