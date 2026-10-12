#include "ffc/types.h"

#define AT(T, p, off) (*(T *)((uint8_t *)(p) + (off)))

extern void *func_ov000_0214d5b4(uint8_t *a, uint8_t *b, uint8_t *c);
extern void *func_ov000_0214d59c(void *a, uint8_t *b, uint16_t c);
extern uint8_t *data_ov000_0216e018;

void *func_ov000_0214d4c4(uint8_t *s, uint8_t *d)
{
    uint8_t *r4;
    uint8_t *base;
    uint8_t *p;
    void *t;
    uint32_t off;

    AT(int8_t, s, 0xaf) = AT(int8_t, d, 0);
    AT(int8_t, s, 0xae) = AT(int8_t, d, 1);
    r4 = s + 0xbc;
    if (AT(uint16_t, d, 2) != 0) {
        AT(uint8_t *, s, 0xa0) = r4;
        base = r4;
        off = 0x45 << 2;
        AT(uint16_t, r4, 0xfc) = AT(uint16_t, d, 4);
        t = func_ov000_0214d5b4(r4 + off, r4, d + 0x10);
        t = func_ov000_0214d59c(t, s + 0x48, AT(uint16_t, d, 2));
        t = func_ov000_0214d59c(t, s + 0x5c, AT(uint16_t, d, 8));
        r4 = t;
        AT(uint16_t, base, off - 0xa) = AT(uint16_t, d, 0xe);
        AT(uint32_t, base, off - 4) = 0;
        AT(uint32_t, base, off - 8) = 0;
    }
    if (AT(uint16_t, d, 6) != 0) {
        uint8_t *base2 = r4;
        off = 0x43 << 2;
        AT(uint8_t *, s, 0xa4) = r4;
        uint8_t *a1 = base2 + (off + 4);
        AT(uint8_t *, base2, off) = s;
        t = func_ov000_0214d5b4(a1, base2, d + 0x14);
        t = func_ov000_0214d59c(t, s + 0x54, AT(uint16_t, d, 6));
        t = func_ov000_0214d59c(t, s + 0x64, AT(uint16_t, d, 0xa));
        r4 = func_ov000_0214d59c(t, base2 + 0xf8, AT(uint16_t, d, 0xc));
        AT(uint32_t, base2, off - 4) = 0;
        AT(uint32_t, base2, off - 8) = 0;
    } else {
        p = data_ov000_0216e018;
        AT(uint32_t, s, 0xa4) = AT(uint32_t, p, 0xa4);
    }
    return r4;
}
