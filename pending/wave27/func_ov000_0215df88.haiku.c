#include "ffc/types.h"

extern int func_ov000_0215b5f8(void);
extern uint8_t *func_ov000_02163350(void);
extern uint32_t *func_ov000_0216361c(void);
extern void func_ov000_0215df58(uint32_t);

void func_ov000_0215df88(uint32_t *p)
{
    uint32_t a = p[0];
    uint32_t b = p[1];
    uint32_t c = p[2];
    uint32_t *q;

    if (func_ov000_0215b5f8() != 0) {
        return;
    }
    if (*(uint32_t *)(func_ov000_02163350() + 0x7c8) != c) {
        return;
    }
    q = func_ov000_0216361c();
    if (q == 0) {
        return;
    }
    if (*q != a) {
        return;
    }
    func_ov000_0215df58(b);
}
