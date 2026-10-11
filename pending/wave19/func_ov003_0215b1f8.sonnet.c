#include "ffc/types.h"

typedef struct { uint32_t x, y; } S;
extern void func_ov003_0215b224(void *a, S s, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f, uint32_t g);
extern S data_ov003_0217a1d8;

void func_ov003_0215b1f8(void *a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint16_t f, uint32_t g)
{
    func_ov003_0215b224(a, data_ov003_0217a1d8, b, c, d, e, f, g);
}
