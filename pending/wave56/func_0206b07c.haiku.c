#include "ffc/types.h"

extern void func_020849ac(uint32_t a, uint32_t b);
extern void func_02084a0c(uint32_t a, uint32_t b);
extern void func_020878ac(uint32_t a, uint32_t b);
extern void func_02084554(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
extern void func_02084498(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
extern uint8_t data_020b055c;
extern uint8_t data_0213e018[];

void func_0206b07c(uint8_t *p) {
    uint32_t a, b;

    p[0x49] = 1;
    a = *(uint32_t *)(p + 0x38);
    if (data_020b055c == 0 || data_0213e018[3] != 0) {
        if ((a | 0x300) & 3) {
            func_020849ac(0, a);
        } else {
            func_02084a0c(0, a);
        }
    } else {
        func_020878ac(a, 0x300);
        if ((a | 0x300) & 3) {
            func_02084554(a, 0, 0x300, 1, 0);
        } else {
            func_02084498(a, 0, 0x300, 1, 0);
        }
    }

    b = *(uint32_t *)(p + 0x44);
    if (data_020b055c == 0 || data_0213e018[3] != 0) {
        if ((b | 0x400) & 3) {
            func_020849ac(0, b);
        } else {
            func_02084a0c(0, b);
        }
    } else {
        func_020878ac(b, 0x400);
        if ((b | 0x400) & 3) {
            func_02084554(b, 1, 0, 0x400, 0);
        } else {
            func_02084498(b, 1, 0, 0x400, 0);
        }
    }
}
