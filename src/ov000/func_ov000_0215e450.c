#include "ffc/types.h"

extern void func_ov000_0215e1d8(int x, uint8_t b, uint32_t c, uint32_t d);
extern uint8_t *func_ov000_02163350(void);

void func_ov000_0215e450(uint8_t a, uint8_t b, uint32_t c, uint32_t d)
{
    uint8_t *q;

    func_ov000_0215e1d8(0, b, c, d);

    q = func_ov000_02163350();
    q[0x14] = a;
    q = func_ov000_02163350();
    q[0x17] = b;
    q = func_ov000_02163350();
    *(uint32_t *)(q + 0x770) = c;
    q = func_ov000_02163350();
    *(uint32_t *)(q + 0x774) = d;
    q = func_ov000_02163350();
    q[0x5f9] = 0;
    q = func_ov000_02163350();
    *(uint32_t *)(q + 0x2c) = 0xff;
    q = func_ov000_02163350();
    q[0x30] = 0;
    q = func_ov000_02163350();
    q[0x16] = 0;
    q = func_ov000_02163350();
    q[0x770 + 0x38] = 1;
    q = func_ov000_02163350();
    *(uint32_t *)(q + 0x770 + 0x3c) = 0;
    q = func_ov000_02163350();
    q[0x17] = b;
    q = func_ov000_02163350();
    *(uint32_t *)(q + 0x1c) = 0;
    q = func_ov000_02163350();
    *(uint32_t *)(q + 0x28) = 0;
    q = func_ov000_02163350();
    *(uint32_t *)(q + 0x20) = 0;
    *(uint32_t *)(q + 0x24) = 0;
    q = func_ov000_02163350();
    *(uint32_t *)(q + 0x48) = 0;
    q = func_ov000_02163350();
    *(uint32_t *)(q + 0x770 + 0x54) = 1;
    q = func_ov000_02163350();
    *(uint32_t *)(q + 0x770 + 0x5c) = 0;
    *(uint32_t *)(q + 0x770 + 0x60) = 0;
    q = func_ov000_02163350();
    *(uint32_t *)(q + 0x634) = 0;
}
