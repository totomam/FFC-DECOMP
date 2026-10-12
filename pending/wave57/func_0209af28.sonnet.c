/* cflags: -nothumb */
#include "ffc/types.h"
extern int __clz(uint32_t);

uint32_t func_0209af28(uint32_t a, uint32_t b) {
    uint32_t sign = (a ^ b) & 0x80000000u;
    uint32_t ea = (a >> 23) & 0xffu;
    uint32_t eb = (b >> 23) & 0xffu;
    uint32_t ma, mb, hi, lo, r0, r1;
    int32_t ip;
    int s;
    uint64_t prod;

    if (ea == 0 || ea == 0xffu) {
        if (ea == 0) {
            if ((a << 9) == 0) {
                if (eb == 0xffu) return 0x7fffffffu;
                return sign;
            }
            ma = a << 8;
            s = __clz(ma);
            ma <<= s;
            ip = 1 - s;
        } else {
            if ((a << 9) != 0) return 0x7fffffffu;
            if (eb == 0) {
                if ((b << 9) == 0) return 0x7fffffffu;
                return sign | 0x7f800000u;
            }
            if (eb == 0xffu) {
                if ((b << 9) == 0) return sign | 0x7f800000u;
                return 0x7fffffffu;
            }
            return sign | 0x7f800000u;
        }
    } else {
        ma = (a << 8) | 0x80000000u;
        ip = (int32_t)ea;
    }

    if (eb == 0 || eb == 0xffu) {
        if (eb == 0xffu) {
            if ((b << 9) != 0) return 0x7fffffffu;
            return sign | 0x7f800000u;
        }
        if ((b << 9) == 0) return sign;
        mb = b << 8;
        s = __clz(mb);
        mb <<= s;
        ip = ip + (1 - s);
    } else {
        mb = (b << 8) | 0x80000000u;
        ip = ip + (int32_t)eb;
    }

    prod = (uint64_t)ma * (uint64_t)mb;
    hi = (uint32_t)(prod >> 32);
    lo = (uint32_t)prod;
    if (!(hi & 0x80000000u)) {
        hi <<= 1;
        ip -= 1;
    }
    ip -= 0x7f;

    if (ip < 0) {
        if (ip == -24) {
            hi <<= 1;
            return sign | ((hi != 0) ? 1u : 0u);
        }
        if (ip < -24) return sign;
        if (lo != 0) hi |= 1u;
        r0 = sign | ((hi >> 8) >> (uint32_t)(-ip));
        r1 = hi << (24 + ip);
        if (r1 == 0) return r0;
        if (!(r1 & 0x80000000u)) return r0;
        r1 <<= 1;
        if (r1 != 0 || (r0 & 1u)) r0 += 1;
        return r0;
    }

    if (ip >= 0xfe) return sign | 0x7f800000u;

    r0 = sign | (hi >> 8);
    r0 += (uint32_t)ip << 23;
    if (!(hi & 0x80u)) return r0;
    if ((lo | ((hi & 0xffu) << 25)) != 0 || (r0 & 1u)) r0 += 1;
    return r0;
}
