#include "ffc/types.h"

extern void func_02021b68(void *p, int a, int b);
extern void func_ov004_0214cf64(void *p);

typedef struct {
    uint32_t x;
    uint32_t y;
} Pair;

extern Pair data_ov004_02159cd0;

void func_ov004_02154b04(uint8_t *a)
{
    func_02021b68(*(void **)(a + 0xf4), 0x1c, 1);
    func_ov004_0214cf64(*(void **)(a + 0xfc));
    {
        Pair p = data_ov004_02159cd0;
        *(Pair *)(a + 0x94) = p;
    }
}
