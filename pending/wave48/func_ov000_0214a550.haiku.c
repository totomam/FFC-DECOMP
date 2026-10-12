#include "ffc/types.h"

extern void func_ov000_0214c434(uint8_t *obj);
extern void func_ov000_0214c46c(uint8_t *obj, uint8_t *buf, int n);
extern void func_ov000_0214c4ec(uint8_t *obj, uint8_t *buf);
extern void func_ov000_0214bd88(uint8_t *obj);
extern void func_ov000_0214bdb8(uint8_t *obj, uint8_t *buf, int n);
extern void func_ov000_0214be38(uint8_t *obj, uint8_t *buf);
extern void func_ov000_0214c554(uint8_t *obj, uint8_t *buf, int n);

void func_ov000_0214a550(uint8_t *p)
{
    int a, b, c, n, i, j;
    uint8_t buf[0x20];
    uint8_t *base;
    uint8_t *q54, *q34, *q74;
    uint8_t *obj;

    switch (*(uint16_t *)(p + 0x32)) {
    case 4:
        a = 0x10;
        break;
    case 5:
        a = 0x14;
        break;
    default:
        goto skip;
    }
    b = 0x10;
    c = 0;
skip:
    n = (a + b + c) * 2;
    if (n > 0) {
        i = 0;
        q54 = p + 0x54;
        q34 = p + 0x34;
        q74 = p + 0x74;
        obj = p + 0x348;
        do {
            func_ov000_0214c434(obj);
            buf[0] = (uint8_t)(i + 0x41);
            j = 0;
            if (i + 1 > 0) do {
                func_ov000_0214c46c(obj, buf, 1);
                j++;
            } while (j < i + 1);
            func_ov000_0214c46c(obj, p, 0x30);
            func_ov000_0214c46c(obj, q54, 0x20);
            func_ov000_0214c46c(obj, q34, 0x20);
            func_ov000_0214c4ec(obj, buf + 1);
            func_ov000_0214bd88(p + 0x3fc);
            func_ov000_0214bdb8(p + 0x3fc, p, 0x30);
            func_ov000_0214bdb8(p + 0x3fc, buf + 1, 0x14);
            func_ov000_0214be38(p + 0x3fc, q74 + (i << 4));
            i++;
        } while ((i << 4) < n);
    }

    if (p[0x454] != 0) {
        base = q74;
        *(uint8_t **)(p + 0x1d4) = base;
        *(uint8_t **)(p + 0x1d8) = base + (a << 1);
        *(uint8_t **)(p + 0xbc) = base + a;
        *(uint8_t **)(p + 0xc0) = base + (a << 1) + a + b;
    } else {
        base = q74;
        *(uint8_t **)(p + 0xbc) = base;
        *(uint8_t **)(p + 0xc0) = base + (a << 1);
        *(uint8_t **)(p + 0x1d4) = base + a;
        *(uint8_t **)(p + 0x1d8) = base + (a << 1) + b;
    }

    func_ov000_0214c554(p + 0x1e0, *(uint8_t **)(p + 0x1d8), 0x10);
    func_ov000_0214c554(p + 0xc8, *(uint8_t **)(p + 0xc0), 0x10);
}
