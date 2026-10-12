#include "ffc/types.h"

extern void *func_0207aa68(void *a, uint32_t b, uint32_t c, uint32_t d);
extern void *func_0207ac88(void *a, void *b, uint32_t c, uint32_t d, uint32_t e);
extern void *func_0207aa88(void *a, void *b, void *c, uint32_t d);
extern void func_02087890(void *a, void *b);

void *func_0207b090(void *a, uint32_t b, uint32_t c, uint32_t d, void *e)
{
    void *r4 = func_0207aa68(a, b, c, d);
    void *r5;

    if (r4 == 0) {
        return 0;
    }
    if (e == 0) {
        return 0;
    }
    r5 = func_0207ac88(e, (uint8_t *)r4 + 0x20, b, c, d);
    if (r5 == 0) {
        return 0;
    }
    if (r4 != func_0207aa88(a, r5, r4, 0)) {
        return 0;
    }
    func_02087890(r5, r4);
    return r5;
}
