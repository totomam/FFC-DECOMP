#include "ffc/types.h"

extern void *func_ov000_02163350(void);
extern void func_ov001_021867f8(uint32_t x);
extern void func_ov000_0216335c(int x);
extern void func_ov000_021600bc(int a, int b, int c);
extern int func_ov000_0215fed0(void);
extern int func_ov001_02175ea8(uint32_t a, uint32_t b);
extern void func_ov000_0215fef0(uint32_t a, int b);
extern void func_ov000_0215e584(uint32_t a);
extern int func_ov000_02161a1c(void);

#define G() ((uint8_t *)func_ov000_02163350())

int func_ov000_02162f80(void)
{
    int r4, r5;

    if (*(uint32_t *)(G() + 0x5e0) != 0) {
        func_ov001_021867f8(*(uint32_t *)(G() + 0x5e0));
    }
    if (*(uint32_t *)(G() + 0x798) != 0) {
        func_ov000_0216335c(12);
        goto L00cc;
    }
    if (G()[0x15] == 0) {
        func_ov000_0216335c(2);
        goto L00cc;
    }
    if (G()[0x15] == 1) {
        func_ov000_0216335c(3);
        r4 = 0;
        func_ov000_021600bc(0, 1, 0);
        r5 = 1;
        if (func_ov000_0215fed0() != 0) {
            r5 = r4;
        }
        return r5;
    }
    if (G()[0x15] == 2) {
        func_ov000_0216335c(13);
        G()[0xd] = 1;
        return 1;
    }
    if (G()[0x15] == 3) {
        uint8_t *a = G();
        uint8_t *b = G();
        if (func_ov001_02175ea8(*(uint32_t *)a, *(uint32_t *)(b + 0x554)) != 0) {
            func_ov000_0216335c(3);
            r4 = 0;
            func_ov000_0215fef0(*(uint32_t *)(G() + 0x554), 0);
            if (func_ov000_0215fed0() != 0) {
                return r4;
            }
        }
        return 1;
    }
L00cc:
    {
        uint8_t *g = G();
        r5 = 0;
        *(uint32_t *)(g + 0x67c) = r5;
    }
    func_ov000_0215e584(*(uint32_t *)(G() + 0x67c));
    if (func_ov000_02161a1c() == 0) {
        r5 = 1;
    }
    return r5;
}
