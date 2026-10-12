#include "ffc/types.h"

extern uint32_t func_0208cf38(uint32_t a, uint32_t b);
extern uint32_t func_02087460(void);
extern uint32_t func_0208d304(void);
extern uint32_t func_02087890(void *p, uint32_t n);
extern uint8_t *func_0208ceec(void);
extern void func_0208cdd8(uint32_t a, uint32_t b);
extern void *func_02084ca4(void *d, const void *s, uint32_t n);
extern void *func_02084b2c(void *d, int c, uint32_t n);
extern uint32_t func_0208cea4(void *p, uint32_t n);

uint32_t func_0208db80(uint32_t a, void *b, void *c, uint32_t d, uint16_t e)
{
    uint8_t buf[0x28];
    uint32_t r;
    uint8_t *p;

    r = func_0208cf38(1, 2);
    if (r == 0) {
        if (func_02087460() != 0 && func_0208d304() == 0) {
            return 4;
        }
        if (b == 0) {
            return 6;
        }
        func_02087890(b, (uint32_t)(*(uint16_t *)b) << 1);
        p = func_0208ceec();
        *(uint16_t *)(p + 0x150) = 0;
        *(uint32_t *)(p + 0x14c) = 0;
        func_0208cdd8(12, a);
        *(uint16_t *)buf = 12;
        *(void **)(buf + 4) = b;
        if (c != 0) {
            func_02084ca4(c, buf + 8, 0x18);
        } else {
            func_02084b2c(buf + 8, 0, 0x18);
        }
        *(uint32_t *)(buf + 0x20) = d;
        *(uint16_t *)(buf + 0x26) = e;
        r = func_0208cea4(buf, 0x28);
        if (r == 0) {
            r = 2;
        }
    }
    return r;
}
