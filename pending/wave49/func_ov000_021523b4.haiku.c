#include "ffc/types.h"

extern void func_02084ca4(uint8_t *src, uint8_t *dst, int n);
extern int func_ov000_02154634(uint8_t *base, uint8_t *dst);
extern int func_ov000_021545ac(uint8_t *base, uint8_t *dst);

int func_ov000_021523b4(uint8_t *base, uint32_t idx, uint8_t *out)
{
    uint8_t *r0 = base;
    uint8_t *p = base + 0x300;
    uint8_t *q;
    uint8_t t;

    switch (idx) {
    case 2: r0 += 0x100;
    case 1: r0 += 0x100;
    case 0:
        out[0] = r0[0xe6] & 3;
        func_02084ca4(r0 + 0x80, out + 2, 16);
        goto done;
    case 5: r0 += 0x100;
    case 4: r0 += 0x100;
    case 3:
        out[0] = 1;
        func_02084ca4(r0 + 0xd1, out + 2, 5);
        goto done;
    case 8: p += 0x200;
    case 7: p += 0x200;
    case 6:
        t = p[0xe7];
        if (t == 0x10 || (uint8_t)(t + 0xee) <= 1) {
            out[0] = p[0x181];
            goto T0;
        }
        out[0] = p[0xe6] & 3;
        func_02084ca4(p + 0x80, out + 2, 0x10);
        goto done;
    case 11: p += 0x200;
    case 10: p += 0x200;
    case 9:
        p += 0xd1;
        out[0] = 1;
        func_02084ca4(p, out + 2, 5);
        goto done;
    case 14: p += 0x200;
    case 13: p += 0x200;
    case 12:
        out[0] = 4;
        goto T0;
    case 17: p += 0x200;
    case 16: p += 0x200;
    case 15:
        out[0] = 6;
        q = p + 0x120;
        goto T2;
    case 18:
        out[0] = 2;
        func_ov000_02154634(base + 0xc2c + 0xc0 * base[0x14c3], out + 2);
        goto done;
    case 19:
        out[0] = 2;
        func_ov000_021545ac(base + 0xc2c + 0xc0 * base[0x14c3], out + 2);
        goto done;
    case 20:
        goto done;
    }

T0:
    q = p + 0x100;
T2:
    out[1] = 0x20;
    func_02084ca4(q, out + 2, 0x20);
    out[0x22] = 0;

done:
    return out[0] != 0;
}
