#include "ffc/types.h"

extern int func_ov002_021994c0(uint32_t a, uint32_t b);

int func_ov002_021a8a2c(uint8_t *r0, uint32_t r1) {
    int flag;
    switch (r1) {
    case 5:
        flag = 1;
        break;
    case 1: case 2: case 3: case 4:
    case 6: case 7: case 8: case 9: case 10:
    case 11: case 12: case 13: case 14: case 15:
    case 16: case 17: case 18: case 19: case 20:
    case 21: case 22: case 23:
        flag = 0;
        break;
    default:
        flag = 0;
        break;
    }
    if (flag) {
        return 1;
    }
    return func_ov002_021994c0(*(uint32_t *)(r0 + 0xfc), 1);
}
