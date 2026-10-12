/* cflags: -nothumb */
#include "ffc/types.h"

extern uint32_t data_02144c00;

uint32_t func_0209ae44(uint32_t x) {
    uint32_t m, rem, root, trial, bit, t;
    int32_t ip;
    uint32_t e;
    int32_t clz;


    uint32_t k = 0xffu;
    if (x >= (k << 23)) {
        if (x == (k << 23)) {
            return x;
        }
        if (x & 0x80000000u) {
            if ((x & 0x7fffffffu) == 0) {
                return x;
            }
        }
        data_02144c00 = 0x21;
        return x | 0x7fc00000u;
    }

    e = x >> 23;
    if (e == 0) {
        if (x == 0) {
            return x;
        }
        clz = 0;
        t = x;
        while (!(t & 0x80000000u)) {
            t <<= 1;
            clz++;
        }
        m = t >> 8;
        ip = 9 - clz;
    } else {
        m = (x & 0x7fffffu) | 0x800000u;
        ip = (int32_t)e;
    }

    if (!(ip & 1)) {
        ip = (ip >> 1) - 1;
        m <<= 1;
    } else {
        ip = ip >> 1;
    }

    rem = m << 1;
    root = 0;
    trial = 0;
    bit = 0x1000000u;
    do {
        t = trial + bit;
        if ((int32_t)t <= (int32_t)rem) {
            trial = t + bit;
            rem -= t;
            root += bit;
        }
        rem <<= 1;
        bit >>= 1;
    } while (bit != 0);

    if (rem == 0) {
        root &= ~1u;
    }
    return ((root >> 1) + (root & 1u)) + 0x20000000u - 0x800000u + ((uint32_t)ip << 23);
}
