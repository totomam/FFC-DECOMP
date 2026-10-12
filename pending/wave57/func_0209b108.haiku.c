/* cflags: -nothumb */
#include "ffc/types.h"

extern uint32_t func_0209b344(uint32_t a, uint32_t b);

uint32_t func_0209b108(uint32_t a, uint32_t b)
{
    uint32_t d, ma, mb, r3, ea, eb, sum, low, res;
    uint32_t sbit;

    if ((a ^ b) & 0x80000000u) {
        return func_0209b344(a, b ^ 0x80000000u);
    }
    d = a - b;
    if (a < b) {
        a -= d;
        b += d;
    }
    r3 = a >> 23;
    ea = r3 & 0xff;
    sbit = a & 0x80000000u;
    if (ea == 0 || ea == 0xff) {
        if (ea == 0xff) {
            if ((a << 1) != 0) return 0x7fffffffu;
            eb = (b >> 23) & 0xff;
            if (eb == 0xff && (b << 9) != 0) return 0x7fffffffu;
            return sbit | 0x7f800000u;
        }
        if ((a << 1) == 0) {
            eb = (b >> 23) & 0xff;
            if (eb == 0xff) {
                if ((b << 9) != 0) return 0x7fffffffu;
                return (b & 0x80000000u) | 0x7f800000u;
            }
            return b;
        }
        return 0x7fffffffu;
    }
    eb = (b >> 23) & 0xff;
    if (eb == 0) {
        if ((b << 1) == 0) return a;
        return 0x7fffffffu;
    }
    if (eb == 0xff) {
        if ((b << 9) != 0) return 0x7fffffffu;
        return sbit | 0x7f800000u;
    }
    ma = 0x80000000u | (a << 8);
    mb = 0x80000000u | (b << 8);
    if (ea != eb) {
        uint32_t sh = ea - eb;
        uint32_t lost = mb << (32 - sh);
        mb = (mb >> sh) | (lost != 0);
    }
    sum = ma + mb;
    if (sum < ma) {
        low = sum & 1;
        sum = (0x80000000u | (sum >> 1)) | low;
        r3 += 1;
    }
    if ((r3 & 0xff) == 0xff) {
        return (r3 >= 0x100 ? 0x80000000u : 0) | 0x7f800000u;
    }
    low = sum & 0xff;
    res = (sum + sum) >> 9;
    res |= r3 << 23;
    if (low & 0x80) {
        if ((low & 0x7f) != 0 || (res & 1)) {
            res += 1;
        }
    }
    return res;
}
