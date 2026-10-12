#include "ffc/types.h"

extern int func_ov001_02181620(void *a, int b, uint32_t c, uint32_t *d);
extern void func_ov001_0217fe28(void *a, int b, uint32_t c);
extern int func_ov001_021816dc(void *a);

int func_ov001_021818a4(void *a, int b, uint32_t c) {
    uint32_t local;
    uint32_t *p = *(uint32_t **)((uint8_t *)a + 8);
    uint32_t v = p[0x44 / 4];
    if (func_ov001_02181620(a, 5, c + 7 + v, &local) == 0) {
        return 0;
    }
    if (local != 0) {
        return 1;
    }
    func_ov001_0217fe28((uint8_t *)a + 0x50, b, c);
    if (func_ov001_021816dc(a) != 0) {
        return 1;
    }
    return 0;
}
