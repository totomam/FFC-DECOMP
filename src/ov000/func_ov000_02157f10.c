#include "ffc/types.h"

extern void func_ov000_02157c50(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f, int8_t *g);

void func_ov000_02157f10(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f)
{
    int8_t buf;
    buf = *(int8_t *)0x2fffe0f;
    func_ov000_02157c50(a, b, c, d, e, f, &buf);
}
