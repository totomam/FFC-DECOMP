#include "ffc/types.h"

extern uint8_t *func_ov000_02166414(void *a, uint32_t b);
extern uint32_t func_ov001_02180818(void *a);
extern uint32_t func_ov001_0218081c(void *a);
extern uint32_t func_ov001_021821ac(uint32_t a, uint32_t b, uint32_t *c);
extern void func_ov000_021652a8(uint32_t a, uint32_t b, uint32_t c, void *d, uint32_t e);
extern int func_ov000_02168768(void *a);
extern uint8_t *func_ov000_0216876c(void *a, int b);
extern uint8_t data_ov000_0216b628[];
extern uint8_t data_ov000_0216b64c[];
extern uint8_t data_ov000_0216b674[];

void func_ov000_02166768(void *a, uint32_t b)
{
    typedef void (*fn4)(uint32_t, uint32_t, uint32_t, uint32_t);
    uint8_t *r4;
    uint8_t *r7;
    uint32_t local[6];
    uint32_t r5;
    uint32_t r1;
    int i;
    int n;

    r4 = func_ov000_02166414(a, b);
    r5 = func_ov001_02180818(a);
    r1 = func_ov001_0218081c(a);
    func_ov000_021652a8(12, 0, 16, data_ov000_0216b628,
                        func_ov001_021821ac(r5, r1, local));
    n = func_ov000_02168768(*(void **)(r4 + 8));
    for (i = 0; i < n; i++) {
        r7 = func_ov000_0216876c(*(void **)(r4 + 8), i);
        if (*(uint32_t *)(r7 + 0x30) != 0) {
            func_ov000_021652a8(12, 0, 16, data_ov000_0216b64c, 0);
            r5 = func_ov001_02180818(a);
            r1 = func_ov001_0218081c(a);
            ((fn4)*(uint32_t *)(r7 + 0x30))(r5, r1, b, *(uint32_t *)(r7 + 0x38));
            return;
        }
    }
    if (*(uint32_t *)(r4 + 0x18) != 0) {
        func_ov000_021652a8(12, 0, 16, data_ov000_0216b674, 0);
        r5 = func_ov001_02180818(a);
        r1 = func_ov001_0218081c(a);
        ((fn4)*(uint32_t *)(r4 + 0x18))(r5, r1, b, *(uint32_t *)(r4 + 0x2c));
    }
}
