#include "ffc/types.h"

typedef struct { uint32_t a, b; } S;
extern void func_020213b8(int32_t x);
extern S data_ov004_02158724;

void func_ov004_021496c4(uint8_t *p)
{
    func_020213b8(0x9b);
    *(uint32_t *)(p + 0x8c) += 0x3c;
    if (*(uint32_t *)(p + 0x8c) == *(uint32_t *)(p + 0x90)) {
        *(S *)(p + 0x80) = data_ov004_02158724;
    }
}
