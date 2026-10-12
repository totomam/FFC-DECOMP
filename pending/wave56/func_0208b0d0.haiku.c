#include "ffc/types.h"

extern int func_02089218(int cmd, uint32_t a, uint32_t b);

int func_0208b0d0(uint32_t a, uint32_t b, uint32_t c, uint32_t d)
{
    int r;

    r = func_02089218(9, 0x02004100u | d, 0);
    if (r < 0) return 0;

    r = func_02089218(9, (1u << 16) | (a >> 16), 0);
    if (r < 0) return 0;

    r = func_02089218(9, (1u << 17) | ((a << 16) >> 16), 0);
    if (r < 0) return 0;

    r = func_02089218(9, (3u << 16) | (b >> 16), 0);
    if (r < 0) return 0;

    r = func_02089218(9, (1u << 18) | ((b << 16) >> 16), 0);
    if (r < 0) return 0;

    r = func_02089218(9, (5u << 16) | (c >> 16), 0);
    if (r < 0) return 0;

    r = func_02089218(9, 0x01060000u | ((c << 16) >> 16), 0);
    if (r < 0) return 0;

    return 1;
}
