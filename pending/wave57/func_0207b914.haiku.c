#include "ffc/types.h"

extern void func_0207a204(uint8_t *p);
extern void func_0207c94c(uint8_t *p);
extern int32_t func_0207c92c(uint8_t *p);
extern void func_0207a24c(uint8_t *p, int32_t v);
extern int32_t func_0207c95c(uint8_t *p);
extern void func_0207bd2c(uint8_t *p);
extern int16_t data_020a5d80[];
extern uint8_t data_0213f080[];

#define BITSET(v, n) ((((int32_t)((uint32_t)(v) << (31 - (n)))) >> 31) != 0)

void func_0207b914(void)
{
    int32_t i;
    for (i = 0; i < 4; i++) {
        uint8_t *p = data_0213f080 + i * 0x17C;
        uint32_t f = *(uint32_t *)(p + 0x118);
        int32_t r5;

        if (!BITSET(f, 0)) {
            continue;
        }
        if (*(uint32_t *)(p + 0x11C) == 0) {
            func_0207bd2c(p);
            continue;
        }
        if (BITSET(f, 2) && *(uint32_t *)(p + 0x120) != 0) {
            func_0207a204(p);
            *(uint32_t *)(p + 0x118) = *(uint32_t *)(p + 0x118) | 2;
            *(uint32_t *)(p + 0x118) = *(uint32_t *)(p + 0x118) & ~4u;
        }
        if (!BITSET(*(uint32_t *)(p + 0x118), 1)) {
            continue;
        }
        func_0207c94c(p + 0xf0);
        r5 = data_020a5d80[*(uint32_t *)(p + 0x15C)];
        r5 = data_020a5d80[func_0207c92c(p + 0xf0) >> 8] + r5;
        r5 = data_020a5d80[*(uint32_t *)(p + 0x160)] + r5;
        if (r5 != (int32_t)*(uint32_t *)(p + 0x164)) {
            func_0207a24c(p, r5);
            *(uint32_t *)(p + 0x164) = r5;
        }
        if (!BITSET(*(uint32_t *)(p + 0x118), 3)) {
            continue;
        }
        if (func_0207c95c(p + 0xf0) != 0) {
            func_0207bd2c(p);
        }
    }
}
