#include "ffc/types.h"

extern uint32_t func_ov001_0217cdfc(void *a, void **out, int n, uint32_t d);
extern uint32_t func_ov001_0217ce78(void *a, void *p, uint32_t d, uint32_t e, uint32_t f);

uint32_t func_ov001_0217d000(void *a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f)
{
    void *p;
    uint32_t r;

    r = func_ov001_0217cdfc(a, &p, 9, d);
    if (r != 0) {
        return r;
    }
    *(uint32_t *)((uint8_t *)p + 0x190) = b;
    *(uint32_t *)((uint8_t *)p + 0x194) = c;
    r = func_ov001_0217ce78(a, p, d, e, f);
    if (r != 0) {
        return r;
    }
    return 0;
}
