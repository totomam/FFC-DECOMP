#include "ffc/types.h"

extern void func_02021b68(void *p, int a, int b);
extern void func_ov004_0214cf64(void *p);
extern uint32_t data_ov004_02159cd0[2];

typedef struct { uint32_t a; uint32_t b; } Pair;

void func_ov004_02154b04(uint8_t *p)
{
    func_02021b68(*(void **)(p + 0xf4), 0x1c, 1);
    func_ov004_0214cf64(*(void **)(p + 0xfc));
    *(Pair *)(p + 0x94) = *(Pair *)data_ov004_02159cd0;
}
