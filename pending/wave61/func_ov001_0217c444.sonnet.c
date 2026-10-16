#include "ffc/types.h"
extern uint32_t *func_ov001_0217c148(uint32_t c, uint32_t a, uint32_t b);
extern uint32_t func_ov000_0214f148(uint32_t a);
extern void func_ov000_021652a8(uint32_t a, uint32_t b, uint32_t c, void *d, uint32_t e, uint32_t f, uint32_t g);
extern char data_ov001_021910dc[];
void func_ov001_0217c444(uint32_t a, uint32_t b, uint32_t c, uint32_t d)
{
    uint32_t *r = func_ov001_0217c148(d, a, b);
    if (r != 0) {
        func_ov000_021652a8(1, 0, 8, data_ov001_021910dc, func_ov000_0214f148(a), b, r[4]);
        r[0] = 0x6a;
    }
}
