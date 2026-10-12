#include "ffc/types.h"

extern void func_02084ca4(void *dst, void *src, uint32_t n);
extern uint32_t func_ov000_02152ce0(void);
extern uint32_t func_ov000_02154cc8(uint8_t *p);
extern uint32_t func_ov000_02154d0c(uint8_t v);
extern uint32_t func_02087460(void);
extern uint8_t data_ov000_021696c4[];

void func_ov000_02154bcc(uint32_t *a, uint8_t *b, uint32_t *out)
{
    uint8_t *r4;
    uint32_t idx;
    uint16_t h;

    func_02084ca4(data_ov000_021696c4, out, 0x58);
    out[1] = a[0];
    out[2] = a[1];

    if (b[0x14bd] >= 0x12) {
        return;
    }

    idx = func_ov000_02152ce0();
    if (idx <= 2) {
        r4 = b + (idx << 8);
    } else {
        r4 = b + 0x300 + ((idx - 10) << 9);
    }

    if (r4[0xc0]) {
        out[3] = 0;
        out[4] = func_ov000_02154cc8(r4 + 0xc0);
        out[5] = func_ov000_02154d0c(r4[0xd0]);
        out[6] = func_ov000_02154cc8(r4 + 0xc4);
        out[7] = func_ov000_02154cc8(r4 + 0xc8);
        out[8] = func_ov000_02154cc8(r4 + 0xcc);
    } else {
        out[3] = 1;
        out[4] = 0;
        out[5] = 0;
        out[6] = 0;
        out[7] = 0;
        out[8] = 0;
    }

    if (func_02087460()) {
        h = *(uint16_t *)(r4 + 0xea);
        if (h == 0) {
            out[11] = 0x578;
        } else if (h > 0x5dc) {
            out[11] = 0x5dc;
        } else if (h < 0x240) {
            out[11] = 0x240;
        } else {
            out[11] = h;
        }
    } else {
        out[11] = 0x240;
    }

    if (func_02087460()) {
        h = *(uint16_t *)(r4 + 0xea);
        if (h == 0x240) {
            out[12] = 0;
        } else {
            out[12] = *(uint32_t *)(b + 0x14c8);
        }
    } else {
        out[12] = 0;
    }
}
