#include "ffc/types.h"

uint32_t func_02078314(uint8_t *p, uint32_t x) {
    uint32_t r = 0xffff;
    switch (*(uint16_t *)(p + 4)) {
    case 0:
        r = (uint16_t)(*(uint16_t *)(p + 0xc) + (x - *(uint16_t *)p));
        break;
    case 1: {
        uint32_t off = (x - *(uint16_t *)p) * 2;
        r = *(uint16_t *)(p + 0xc + off);
        break;
    }
    case 2: {
        uint32_t n = *(uint16_t *)(p + 0xc);
        uint16_t *base = (uint16_t *)p;
        uint8_t *lo;
        uint8_t *hi;
        base = (uint16_t *)((uint8_t *)base + 0xc);
        lo = (uint8_t *)base;
        lo = lo + 2;
        hi = lo + (n - 1) * 4;
        while (lo <= hi) {
            int diff = hi - lo;
            uint8_t *mid = lo + ((diff / 4) / 2) * 4;
            uint16_t key = *(uint16_t *)mid;
            if (key < x) {
                lo = mid + 4;
            } else if (x < key) {
                hi = mid - 4;
            } else {
                r = *(uint16_t *)(mid + 2);
                break;
            }
        }
        break;
    }
    }
    return r;
}
