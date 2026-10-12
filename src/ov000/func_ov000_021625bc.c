#include "ffc/types.h"

extern int32_t func_ov000_0215b5f8(int32_t a);
extern uint8_t *func_ov000_02163350(void);
extern int32_t func_ov000_02163a84(void);
extern void func_ov000_0216335c(int32_t a);
extern void func_ov000_0215e8f8(int32_t a, int32_t b, void *c);
extern int32_t func_ov000_02161b10(void);

void func_ov000_021625bc(int32_t a)
{
    uint8_t *p;

    if (func_ov000_0215b5f8(a) == 0 && *(int32_t *)(func_ov000_02163350() + 0x57c) != 0) {
        return;
    }

    if (*(int32_t *)(func_ov000_02163350() + 0x61c) == 1) {
        if (func_ov000_02163a84() == 0) {
            return;
        }
        func_ov000_0216335c(5);
    } else {
        if (*(int32_t *)(func_ov000_02163350() + 0x61c) != 5) {
            if (*(int32_t *)(func_ov000_02163350() + 0x61c) != 0xe) {
                return;
            }
        }
    }

    if (*(int32_t *)(func_ov000_02163350() + 0x5fc) == a) {
        p = func_ov000_02163350();
        p[0x5f8] = p[0x5f8] + 1;
    } else {
        p = func_ov000_02163350();
        p[0x5f8] = 0;
        p = func_ov000_02163350();
        *(int32_t *)(p + 0x5fc) = a;
    }

    p = func_ov000_02163350();
    *(int32_t *)(p + 0x600) = 0;
    *(int32_t *)(p + 0x604) = 0;

    p = func_ov000_02163350();
    func_ov000_0215e8f8(1, a, p + 0x554);

    if (func_ov000_02161b10() == 0) {
        p = func_ov000_02163350();
        p[0x6d8] = 0xff;
    }
}
