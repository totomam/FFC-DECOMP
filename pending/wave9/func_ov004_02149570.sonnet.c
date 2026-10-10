#include "ffc/types.h"

extern void func_02021338(uint32_t arg);
typedef struct { uint32_t a, b; } S;
extern S data_ov004_02158714;

void func_ov004_02149570(uint8_t *p)
{
    func_02021338(0x8e);
    *(S *)(p + 0x80) = data_ov004_02158714;
}
