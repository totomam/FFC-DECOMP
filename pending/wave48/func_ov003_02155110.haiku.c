#include "ffc/types.h"

extern void func_02005988(void *obj, void *entry);
extern uint32_t func_02030f9c(void *first, void *second, uint32_t third);
extern uint32_t func_02008f2c(void *object, void *value, uint32_t x, uint32_t y);
extern uint32_t func_02093b18(uint32_t v);
extern void func_020059cc(void *object);
extern uint8_t data_ov003_0217a0cc[];

uint32_t func_ov003_02155110(uint8_t *self, uint32_t *out1, uint32_t *out2)
{
    uint32_t L[9];
    uint8_t *T = (uint8_t *)&L[6];
    uint32_t a = 0;
    uint32_t found = 0;
    uint32_t b = 0;
    uint8_t *list = *(uint8_t **)(self + 0xec);
    uint32_t count = *(uint32_t *)list;
    uint32_t i;

    for (i = 0; i < count; i++) {
        uint32_t r2;
        uint32_t r6;

        func_02005988(T, list + 0xc + i * 0x1c);
        r2 = func_02030f9c(T, data_ov003_0217a0cc, 0);
        if (r2 == 0xffffffffu) {
            func_020059cc(T);
            continue;
        }
        if (((T[0] & 1) ? *(uint32_t *)(T + 4) : ((T[0] >> 1) & 0x7f)) == 0xb) {
            func_02008f2c(&L[3], T, r2 + 2, 2);
            r6 = func_02093b18((L[3] & 1) ? L[5] : (uint32_t)((uint8_t *)&L[3] + 1));
            func_020059cc(&L[3]);
        } else if (((T[0] & 1) ? *(uint32_t *)(T + 4) : ((T[0] >> 1) & 0x7f)) == 0xc) {
            func_02008f2c(&L[0], T, r2 + 2, 3);
            r6 = func_02093b18((L[0] & 1) ? L[2] : (uint32_t)((uint8_t *)&L[0] + 1));
            func_020059cc(&L[0]);
        } else {
            func_020059cc(T);
            continue;
        }
        if (r6 != 0) {
            func_020059cc(T);
            continue;
        }
        a = *(uint32_t *)(list + i * 0x1c + 0x1c);
        if (i + 1 == count) {
            b = *(uint32_t *)(list + 4) - a;
        } else {
            b = *(uint32_t *)(list + i * 0x1c + 0x38) - a;
        }
        found = 1;
        func_020059cc(T);
        break;
    }

    if (found) {
        *out1 = a;
        *out2 = b;
        return 1;
    }
    *out1 = 0;
    *out2 = 0;
    return 0;
}
