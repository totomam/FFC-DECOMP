#include "ffc/types.h"

extern uint32_t func_ov006_021a0c18(void *a, uint32_t *p1, uint32_t *p2, uint32_t c);
extern uint32_t func_ov006_021a1b04(void *e, uint32_t r, uint32_t v, uint32_t d, uint32_t x);
extern void func_02090380(void *destination, const void *source, uint32_t length);

uint32_t func_ov006_021a0f2c(void *a, uint32_t b, void *e, uint32_t d)
{
    uint32_t v1;
    uint32_t v2;
    uint32_t r;

    r = func_ov006_021a0c18(a, &v1, &v2, d);
    if (r == 0) {
        return 0;
    }
    if (v1 != b) {
        return 0;
    }
    if (d != 0) {
        func_ov006_021a1b04(e, r, v2, d, 0x10);
        v2 -= 8;
    } else {
        func_02090380(e, (const void *)r, v2);
    }
    return v2;
}
