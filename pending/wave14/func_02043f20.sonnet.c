#include "ffc/types.h"

typedef struct { uint32_t a, b; } S;
extern void func_02043f40(void *a, S s, uint32_t d, uint32_t e);
extern S data_020af698;

void func_02043f20(void *p, uint32_t x)
{
    ((uint8_t *)p)[0x15c] = 1;
    func_02043f40(p, data_020af698, x, 1);
}
