#include "ffc/types.h"

typedef struct { uint8_t pad[0xe6]; uint8_t v:2; } B;
extern void func_02084ca4(uint8_t *src, uint8_t *dst, int n);
extern int func_ov000_02154634(uint8_t *base, uint8_t *dst);
extern int func_ov000_021545ac(uint8_t *base, uint8_t *dst);

int func_ov000_021523b4(uint8_t *base, uint32_t idx, uint8_t *out)
{
    uint8_t *r0 = base;
    uint8_t *p = base + 0x300;
    uint8_t t, v;

    switch (idx) {
    case 2: r0 += 0x100;
    case 1: r0 += 0x100;
    case 0:
        out[0] = ((B*)r0)->v;
        func_02084ca4(r0 + 0x80, out + 2, 16);
        break;
    case 5: r0 += 0x100;
    case 4: r0 += 0x100;
    case 3:
        out[0] = 1;
        func_02084ca4(r0 + 0xd1, out + 2, 5);
        break;
    case 8: p += 0x200;
    case 7: p += 0x200;
    case 6:
        t = p[0xe7];
        if (t == 0x10 || (uint8_t)(t + 0xee) <= 1) {
            v = p[0x181];
        T0:
            out[0] = v;
            out[1] = 0x20;
            func_02084ca4(p + 0x100, out + 2, 0x20);
            out[0x22] = 0;
            break;
        }
        out[0] = ((B*)p)->v;
        func_02084ca4(p + 0x80, out + 2, 0x10);
        break;
    case 11: p += 0x200;
    case 10: p += 0x200;
    case 9:
        p += 0xd1;
        out[0] = 1;
        func_02084ca4(p, out + 2, 5);
        break;
    case 14: p += 0x200;
    case 13: p += 0x200;
    case 12:
        v = 4;
        goto T0;
    case 17: p += 0x200;
    case 16: p += 0x200;
    case 15:
        out[0] = 6;
        out[1] = 0x20;
        func_02084ca4(p + 0x120, out + 2, 0x20);
        out[0x22] = 0;
        break;
    case 18:
        out[0] = 2;
        func_ov000_02154634(base + 0xc2c + 0xc0 * base[0x14c3], out + 2);
        break;
    case 19:
        out[0] = 2;
        func_ov000_021545ac(base + 0xc2c + 0xc0 * base[0x14c3], out + 2);
        break;
    case 20:
        break;
    }
    return out[0] != 0;
}
