#include "ffc/types.h"

extern uint8_t *func_ov000_02163350(void);
extern uint64_t func_020882cc(uint8_t *p);

void func_ov000_0216307c(uint32_t a, uint32_t b, uint32_t c)
{
    uint8_t *p;
    uint64_t v;

    p = func_ov000_02163350();
    p[0x30] = 0;
    p = func_ov000_02163350();
    *(uint32_t *)(p + 0x2c) = a;
    p = func_ov000_02163350();
    *(uint32_t *)(p + 0x34) = b;
    p = func_ov000_02163350();
    *(uint32_t *)(p + 0x38) = c;
    p = func_ov000_02163350();
    *(uint32_t *)(p + 0x20) = 0;
    *(uint32_t *)(p + 0x24) = 0;
    v = func_020882cc(p);
    p = func_ov000_02163350();
    *(uint32_t *)(p + 0x3c) = (uint32_t)v;
    *(uint32_t *)(p + 0x40) = (uint32_t)(v >> 32);
    p = func_ov000_02163350();
    *(uint32_t *)(p + 0x48) = 1;
}
