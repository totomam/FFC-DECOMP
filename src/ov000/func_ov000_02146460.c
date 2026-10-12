#include "ffc/types.h"

typedef struct {
    uint8_t b0;
    uint8_t b1;
    uint8_t pad[0x4e];
    uint32_t f50;
} Bc60;

extern int func_ov000_02145810(uint8_t *a, uint8_t *b);
extern void func_ov000_02145bdc(uint8_t *a, uint32_t b, uint32_t c);
extern void func_ov000_021463e8(uint8_t *a);
extern uint8_t data_ov000_0216bcc8[];
extern Bc60 data_ov000_0216bc60;

#define VG ((volatile Bc60 *)&data_ov000_0216bc60)
#define RD(off) (*(uint16_t *)(p + (off)))
#define SW(x) ((uint16_t)(((x) >> 8) | ((x) << 8)))

void func_ov000_02146460(uint8_t *p, uint32_t len)
{
    uint32_t v;
    uint32_t r4;
    uint32_t r7;
    uint16_t r6;

    if (len < 0x1c) {
        return;
    }
    if (!func_ov000_02145810(p + 8, data_ov000_0216bcc8)) {
        return;
    }
    if (VG->f50 == 0) {
        return;
    }
    if (RD(0) != 0x100) {
        return;
    }
    if (RD(2) != 8) {
        return;
    }
    if (RD(4) != 0x406) {
        return;
    }
    r6 = SW(RD(6));
    if (r6 != 1 && r6 != 2) {
        return;
    }
    r7 = 1;
    v = ((uint32_t)SW(RD(0xe)) << 16) | SW(RD(0x10));
    r4 = VG->f50;
    if (v != r4) {
        r7 = 0;
    }
    if ((((uint32_t)SW(RD(0x18)) << 16) | SW(RD(0x1a))) == r4) {
        r4 = 1;
    } else {
        r4 = 0;
    }
    if (r7 == 0) {
        func_ov000_02145bdc(p + 8, v, r4);
    }
    if (r6 == 1 && r4 != 0) {
        func_ov000_021463e8(p);
        return;
    }
    if (r6 == 2 && r4 != 0 && r7 != 0) {
        VG->b1 = 1;
    }
}
