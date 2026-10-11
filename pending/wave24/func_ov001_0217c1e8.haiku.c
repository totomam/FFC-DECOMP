#include "ffc/types.h"

extern uint32_t func_ov001_0217b738(void *a, int b, int c, void **d, int e, int f, int g);
extern uint32_t func_ov001_0217aefc(void *a, uint32_t b, uint32_t c);

uint32_t func_ov001_0217c1e8(void *a, uint32_t *b)
{
    void *obj;
    uint32_t r;

    r = func_ov001_0217b738(a, 2, 0, &obj, 0, 0, 0);
    if (r != 0) {
        return r;
    }
    r = func_ov001_0217aefc(a, *(uint32_t *)((uint8_t *)b + 0x10), *(uint32_t *)((uint8_t *)obj + 0x18));
    if (r != 0) {
        return r;
    }
    *b = 0x65;
    return 0;
}
