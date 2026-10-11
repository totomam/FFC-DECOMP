#include "ffc/types.h"

extern int32_t func_ov000_0215c188(int32_t a, void *p, int32_t n);
extern int32_t func_0208f68c(int32_t x);
extern uint8_t data_ov007_021c5c7c[];

int32_t func_ov007_021b112c(int32_t a, uint8_t *b)
{
    int32_t t = func_ov000_0215c188(a, data_ov007_021c5c7c, 10);
    int32_t v = *(int32_t *)(b + 0xc0);
    int32_t r = func_0208f68c(v - t);
    r = 0x270f - r;
    if (r >= 1) {
        return r;
    }
    return 1;
}
