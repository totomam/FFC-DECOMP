#include "ffc/types.h"
typedef struct { uint32_t a, b; } S;
typedef struct { uint32_t a; } W;
extern S data_ov003_0217a1f8;
extern void func_0203e894(uint32_t a, S s, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f, uint8_t g);
void func_ov003_0215b3c8(uint32_t a, uint32_t b, uint32_t c, W d, uint32_t e, uint32_t f, uint8_t g) {
    func_0203e894(a, data_ov003_0217a1f8, b, c, d.a, e, f, g);
}
