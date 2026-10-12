#include "ffc/types.h"

extern int func_ov000_021495ac(uint8_t *p);
extern void func_ov000_02149518(uint32_t idx, uint32_t *buf);
extern int func_ov000_02149558(uint8_t *p, uint32_t *buf);

int func_ov000_0214946c(uint8_t *a)
{
    uint32_t buf;

    if (a[0xc0] || a[0xc1] || a[0xc2] || a[0xc3]) {
        if (!func_ov000_021495ac(a + 0xc4)) {
            return 0;
        }
        if (a[0xd0] > 0x20) {
            return 0;
        }
        func_ov000_02149518(a[0xd0], &buf);
        if (!func_ov000_02149558(a + 0xc0, &buf)) {
            return 0;
        }
    }

    if (a[0xc8] || a[0xc9] || a[0xca] || a[0xcb]) {
        if (!func_ov000_021495ac(a + 0xc8)) {
            if (!func_ov000_021495ac(a + 0xcc)) {
                return 0;
            }
        }
    }
    return 1;
}
