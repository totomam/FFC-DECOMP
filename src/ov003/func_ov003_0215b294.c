#include "ffc/types.h"
typedef struct { uint32_t a, b; } S2;
typedef struct { uint32_t a, b, c, d, e; } S5;
extern void func_ov003_0215b2c8(uint32_t a, S2 d, uint32_t b, S2 x, uint32_t c, uint32_t d2, uint32_t e);
extern S2 data_ov003_0217a1e0;
typedef struct { S2 x; uint32_t c, d, e; } T;
void func_ov003_0215b294(uint32_t a, uint32_t b, T s)
{
    func_ov003_0215b2c8(a, data_ov003_0217a1e0, b, s.x, s.c, s.d, s.e);
}
