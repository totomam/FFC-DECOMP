#include "ffc/types.h"
extern void func_ov000_0214dcc8(void);
extern int func_ov000_0214d1d8(void *f, void *a, int b);
extern int func_ov000_0214d2ac(void *a, int b);
int func_ov000_0214dc8c(uint8_t *a) {
    uint8_t *p = *(uint8_t **)(a + 0xa0);
    if (*(int *)(p + 0xf8) < *(uint16_t *)(p + 0xfc)) return 0;
    {
        int z = 0;
        int r = func_ov000_0214d1d8((void *)func_ov000_0214dcc8, a, 0);
        if (r == 0) return z - 0x21;
        func_ov000_0214d2ac(a, r);
    }
}
