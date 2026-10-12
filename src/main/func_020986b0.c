#include "ffc/types.h"

extern int32_t func_02097acc(void *p);
extern void func_02097a18(void *p);
extern int32_t func_02097a54(void *p);

uint32_t func_020986b0(uint8_t *p, uint32_t x) {
    if (p[0x3a] == 0) {
        return 0xffff;
    }
    if (*(uint32_t *)(p + 8) != 0) {
        if (func_02097acc(p) < 0) {
            return 0xffff;
        }
        *(uint32_t *)(p + 4) = 0;
        *(uint32_t *)(p + 8) = 0;
        *(uint32_t *)(p + 0xc) = 0;
    }
    if (*(uint16_t **)(p + 0x14) == 0) {
        func_02097a18(p);
    }
    if (x != 0xffff) {
        **(uint16_t **)(p + 0x14) = (uint16_t)x;
        *(uint16_t **)(p + 0x14) += 1;
    }
    if (func_02097a54(p) < 0) {
        return 0xffff;
    }
    if (x == 0xffff) {
        x = 0xffff0000u;
    }
    return (x << 16) >> 16;
}
