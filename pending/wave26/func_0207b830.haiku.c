#include "ffc/types.h"

extern void *func_0207a918(uint32_t p);
extern int func_0207baf0(uint32_t a, void *b, uint8_t c, uint8_t d, uint32_t e, uint32_t f, uint32_t g, uint32_t h, uint32_t i, uint32_t j);

int func_0207b830(uint32_t a0, uint32_t a1, uint32_t a2)
{
    uint8_t *r = (uint8_t *)func_0207a918(a1);
    if (r == 0) {
        return 0;
    }
    return func_0207baf0(a0, r, r[6], r[5], a1, a2, 0, 0, 0, 0);
}
