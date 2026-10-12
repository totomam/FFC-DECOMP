#include "ffc/types.h"

extern void func_ov000_0214b218(void *s);
extern int func_ov000_0214af30(void *s);
extern void func_ov000_0214a550(void *p);
extern int func_ov000_0214b500(void *s);
extern void func_ov000_0214b12c(void *s);
extern void func_ov000_0214b330(void *s);
extern void func_ov000_0214a510(void *p);
extern void func_ov000_021496b8(void *p, uint32_t a, uint16_t b);

int func_ov000_0214b524(void *s)
{
    uint8_t *p = *(uint8_t **)((uint8_t *)s + 0xc);
    int r;

    func_ov000_0214b218(s);
    for (;;) {
        r = func_ov000_0214af30(s);
        if (r == 9) {
            return 1;
        }
        if (r == 4) {
            break;
        }
        if (p[0x31] != 0) {
            break;
        }
    }

    if (p[0x31] != 0) {
        func_ov000_0214a550(p);
        if (func_ov000_0214b500(s) != 0) {
            return 1;
        }
        func_ov000_0214b12c(s);
    } else {
        func_ov000_0214b330(s);
        func_ov000_0214a510(p);
        if (p[0x30] != 0) {
            func_ov000_021496b8(p, *(uint32_t *)((uint8_t *)s + 0x1c), *(uint16_t *)((uint8_t *)s + 0x18));
        }
        func_ov000_0214a550(p);
        func_ov000_0214b12c(s);
        if (func_ov000_0214b500(s) != 0) {
            return 1;
        }
    }

    *(uint8_t *)(p + 0x455) = 8;
    return 0;
}
