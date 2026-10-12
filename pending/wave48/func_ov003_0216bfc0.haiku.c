#include "ffc/types.h"

extern void func_02088f30(uint32_t x);
extern uint32_t func_0205681c(uint32_t x);
extern void func_ov003_0216602c(uint32_t r0, uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4, uint32_t a5, uint32_t a6);

void func_ov003_0216bfc0(uint32_t a0, uint8_t *p) {
    uint32_t r4 = 0;
    uint32_t r6;
    uint32_t r7 = 0;
    uint32_t val;
    uint32_t ret;
    uint32_t idx;

    idx = *(uint16_t *)p - 0x57;
    switch (idx) {
    case 0:
        r6 = r4;
        if (*(uint32_t *)(p + *(uint32_t *)(p + 8))) {
            r6 = 2;
        }
        r4++;
        break;
    case 1:
        r6 = 1;
        if (*(uint32_t *)(p + *(uint32_t *)(p + 8))) {
            r6 = 3;
        }
        r4++;
        break;
    case 2:
        r6 = 4;
        break;
    case 3:
        r6 = 5;
        break;
    case 4:
        r4++;
        r7 = *(uint32_t *)(p + *(uint32_t *)(p + 8));
        r6 = 6;
        break;
    case 5:
        r4++;
        r7 = *(uint32_t *)(p + *(uint32_t *)(p + 8));
        r6 = 7;
        break;
    case 6:
        r6 = 8;
        break;
    case 7:
        r6 = 9;
        break;
    default:
        func_02088f30(*(uint16_t *)p - 0x57);
        break;
    }

    val = 2;
    switch (*(uint16_t *)p - 0x57) {
    case 2:
    case 3:
    case 4:
    case 5:
        val = ((uint32_t *)(p + *(uint32_t *)(p + 8)))[r4];
        r4++;
        break;
    case 0:
    case 1:
        val = 0;
        break;
    case 6:
    case 7:
        break;
    default:
        break;
    }

    r4 = ((uint32_t *)(p + *(uint32_t *)(p + 8)))[r4];
    ret = func_0205681c(0x9c);
    if (ret != 0) {
        func_ov003_0216602c(ret, a0, r6, val, r4, 0, r7);
    }
}
