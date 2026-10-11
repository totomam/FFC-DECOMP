#include "ffc/types.h"

extern int32_t func_ov000_02147884(void *p);
extern void func_ov000_0214c434(void *p);
extern void func_ov000_0214bd88(void *p);
extern int32_t func_ov000_0214b524(void *p);

int32_t func_ov000_0214b5b8(void *p) {
    uint8_t *s = (uint8_t *)p;
    uint8_t *r5 = *(uint8_t **)(s + 0xc);
    if (s[8] != 4) {
        if (func_ov000_02147884(p) != 0) {
            return 1;
        }
    }
    r5[0x455] = 0;
    *(uint32_t *)(r5 + 0x1d4) = 0;
    r5[0x454] = 0;
    func_ov000_0214c434(r5 + 0x2ec);
    func_ov000_0214bd88(r5 + 0x3a4);
    return func_ov000_0214b524(p);
}
