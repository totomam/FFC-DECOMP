#include "ffc/types.h"

uint32_t func_020355d8(uint32_t x, uint32_t *p) {
    uint32_t n = 0;
    uint32_t v;
    switch (x) {
    case 0:
        v = 0;
        n += 1;
        break;
    case 1:
        v = 1;
        n += 1;
        break;
    case 2:
        v = 6;
        n += 1;
        break;
    case 3:
        v = 2;
        n += 1;
        break;
    case 4:
        v = 3;
        n += 1;
        break;
    case 5:
        p[0] = 0x11;
        n += 2;
        p[1] = 4;
        return n;
    case 9:
        v = 0xd;
        n += 1;
        break;
    case 6:
        v = 5;
        n += 1;
        break;
    case 7:
        p[0] = 7;
        n += 2;
        p[1] = 0xc;
        return n;
    case 8:
        p[0] = 8;
        n += 2;
        p[1] = 0xc;
        return n;
    case 10:
        v = 9;
        n += 1;
        break;
    case 11:
        v = 0xa;
        n += 1;
        break;
    case 12:
        p[0] = 0xb;
        n += 2;
        p[1] = 0xc;
        return n;
    case 13:
        p[0] = 0x12;
        n += 2;
        p[1] = 0xe;
        return n;
    case 14:
        v = 0xf;
        n += 1;
        break;
    case 15:
        v = 0x10;
        n += 1;
        break;
    default:
        return 0;
    }
    p[0] = v;
    return n;
}
