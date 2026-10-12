#include "ffc/types.h"

extern void *func_ov000_02152ae4(uint32_t);
extern int func_ov000_02152b68(void);
extern int func_ov000_0214f964(void);
extern uint32_t func_ov000_0214fa18(void);
extern int func_02087460(void);
extern int func_ov000_02153f28(void *);
extern int func_ov000_021542e0(void *, int);
extern int func_ov000_02153fc0(void *);
extern int func_ov000_02154054(void *);
extern int func_ov000_02154178(void *);
extern void func_ov000_02152b80(int);

int func_ov000_02153d04(void)
{
    uint8_t *p;
    int r4;
    int r0;
    int idx;
    uint32_t bits;
    int r1;

    p = (uint8_t *)func_ov000_02152ae4(0x10);
    r4 = func_ov000_02152b68();
    r0 = func_ov000_0214f964();
    if (r4 == 2 && r0 == 3) {
        bits = func_ov000_0214fa18();
        for (idx = 0; idx <= 12; idx++) {
            if (bits & (0x1000 >> idx)) {
                break;
            }
        }
        *(uint16_t *)(p + 0x14ce) = (uint16_t)(13 - idx);
        if (func_02087460() == 0 || ((((uint32_t)p[0x14bc] << 26) >> 31) == 1)) {
            *(uint16_t *)(p + 0x14d2) = 0x12c;
            r1 = 0x96;
        } else {
            *(uint16_t *)(p + 0x14d2) = 0x116;
            r1 = 0xcb;
        }
        *(uint16_t *)(p + 0x14d4) = (uint16_t)r1;
        r4 = func_ov000_02153f28(p);
        return r4;
    }
    if (r4 == 6) {
        return func_ov000_021542e0(p, r4);
    }
    if (r0 == 3 || r0 == 6) {
        r4 = func_ov000_021542e0(p, r4);
        if (r4 == 7) {
            return r4;
        }
        if (r4 == 3) {
            return func_ov000_02153fc0(p);
        }
        if (r4 == 4) {
            return func_ov000_02154054(p);
        }
        if (r4 == 5) {
            return func_ov000_02154178(p);
        }
        return r4;
    }
    if (r0 == 11) {
        func_ov000_02152b80(0);
        return 0x11;
    }
    if (r0 > 11) {
        func_ov000_02152b80(4);
        return 0x11;
    }
    return r4;
}
