#include "ffc/types.h"

extern uint8_t *func_ov000_02163350(void);
extern int32_t func_ov001_021865a0(int32_t a, int32_t b, int32_t c, int32_t d, int32_t e, int32_t f, int32_t g, void *h, int32_t i);
extern int32_t func_ov000_02161a1c(int32_t x);
extern void func_ov000_0216335c(int32_t x);
extern void func_ov000_0215fef0(uint32_t a, int32_t b);
extern int32_t func_ov000_0215fed0(void);
extern void func_ov000_02161bf4(void);

void func_ov000_02162c7c(void)
{
    uint8_t *b;
    uint8_t *a;
    uint8_t *c;
    uint8_t *d;
    uint8_t *e;
    uint8_t *p;

    b = func_ov000_02163350();
    b[0x14] = 3;
    b = func_ov000_02163350();
    if (*(int32_t *)(b + 0x5e0) == 0) {
        a = func_ov000_02163350();
        c = func_ov000_02163350();
        d = func_ov000_02163350();
        e = func_ov000_02163350();
        *(int32_t *)(a + 0x5e0) = func_ov001_021865a0(*(int32_t *)(c + 0x684), *(int32_t *)(d + 0x684), *(int32_t *)(e + 0x688), 0, 0x14, 1, 0, (void *)func_ov000_02161bf4, 0);
    }
    b = func_ov000_02163350();
    if (*(int32_t *)(b + 0x5e0) == 0) {
        if (func_ov000_02161a1c(5) != 0) {
            return;
        }
    }
    func_ov000_0216335c(3);
    p = func_ov000_02163350();
    func_ov000_0215fef0(*(uint32_t *)(p + 0x554), 0);
    if (func_ov000_0215fed0() != 0) {
        return;
    }
}
