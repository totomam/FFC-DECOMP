#include "ffc/types.h"

extern uint8_t *func_ov000_02163350(void);

void func_ov000_02162b90(uint32_t a, uint8_t *b, uint32_t c)
{
    uint8_t *p;
    uint8_t *q;

    p = func_ov000_02163350();
    *(uint32_t *)(p + 0x7b8) = a;
    if (b != 0) {
        p = func_ov000_02163350();
        q = p + 0x7bc;
        p[0x7bc] = b[0];
        q[1] = b[1];
        q[2] = b[2];
        q[3] = b[3];
    } else {
        p = func_ov000_02163350();
        q = p + 0x7bc;
        p[0x7bc] = 0;
        q[1] = 0;
        q[2] = 0;
        q[3] = 0;
    }
    p = func_ov000_02163350();
    *(uint32_t *)(p + 0x7c0) = c;
}
