#include "ffc/types.h"

extern int32_t func_ov004_0214f740(uint8_t *a, uint32_t c);
extern void func_ov004_0214ecac(uint8_t *a, uint32_t c, int32_t *d, int32_t *e);
extern int32_t func_01fff02c(uint8_t *b, int32_t d, int32_t e, int32_t g);

int32_t func_ov004_0214eb98(uint8_t *a, uint8_t *b, uint32_t c, int32_t d, int32_t e, uint8_t f, int32_t g) {
    int32_t v;
    if (b == 0) {
        return 0;
    }
    if (func_ov004_0214f740(a, c) == 0) {
        v = d;
    } else {
        v = *(int32_t *)(a + 0xfc) - 1 - d;
    }
    d = v;
    if (f == 0) {
        func_ov004_0214ecac(a, c, &d, &e);
    }
    return func_01fff02c(b, d, e, g);
}
