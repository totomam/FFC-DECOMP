#include "ffc/types.h"

extern void func_ov001_02184558(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);

void func_ov001_021846f8(uint32_t a, uint32_t b, uint32_t c, uint32_t d,
                         uint32_t e, uint32_t f, uint32_t g, uint32_t h)
{
    func_ov001_02184558(a, b, 0, c, d);
    func_ov001_02184558(a, b, 1, e, f);
    func_ov001_02184558(a, b, 2, g, h);
}
