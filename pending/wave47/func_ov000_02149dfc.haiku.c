#include "ffc/types.h"

extern void func_ov000_0214bd88(void *p);
extern void func_ov000_0214bdb8(void *p, int32_t a, int32_t b);
extern void func_ov000_0214be38(void *p, void *q);
extern void func_ov000_0214c434(void *p);
extern void func_ov000_0214c46c(void *p, int32_t a, int32_t b);
extern void func_ov000_0214c4ec(void *p, void *q);
extern uint32_t func_ov000_02149864(void *p, void *q);
extern uint32_t func_ov000_02149cd8(void *p);

uint32_t func_ov000_02149dfc(uint8_t *p)
{
    uint32_t flags;
    int32_t state;
    int32_t a;
    int32_t b;
    int32_t r4;
    uint8_t *s;

    if (p[0x5af]) {
        flags = 0;
    } else {
        flags = 0x8000;
    }

    r4 = 0x45c;
    if (*(int32_t *)(p + r4) == -1) {
        return 4 | flags;
    }

    state = *(int32_t *)(p + r4 - 4);
    switch (state) {
    case 3:
        s = p + (r4 - 0x60);
        func_ov000_0214bd88(s);
        a = *(int32_t *)(p + r4 + 4);
        b = *(int32_t *)(p + r4 + 8);
        func_ov000_0214bdb8(s, a, b - a);
        func_ov000_0214be38(s, p + r4 + 0xc);
        *(int32_t *)(p + r4 + 0x20) = 0x10;
        break;
    case 4:
        s = p + 0x348;
        func_ov000_0214c434(s);
        a = *(int32_t *)(p + r4 + 4);
        b = *(int32_t *)(p + r4 + 8);
        func_ov000_0214c46c(s, a, b - a);
        func_ov000_0214c4ec(s, p + r4 + 0xc);
        *(int32_t *)(p + r4 + 0x20) = 0x14;
        break;
    default:
        return 3 | flags;
    }

    r4 = (int32_t)func_ov000_02149864(p, p + 0x5b0);
    if (r4 == 0) {
        return 1 | flags;
    }
    return func_ov000_02149cd8(p) | flags;
}
