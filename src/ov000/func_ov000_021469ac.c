#include "ffc/types.h"

extern void func_02084b2c(void *dst, int val, uint32_t size);
extern void func_ov000_02146904(void *obj, int n);
extern uint8_t data_ov000_0216be78[];

struct Dst {
    uint8_t pad0[0xa]; uint16_t f0a;
    uint8_t pad1[0xc]; uint16_t f18;
    uint8_t pad2[2]; uint32_t f1c;
    uint8_t pad3[4]; uint32_t f24;
    uint8_t pad4[0xc]; uint32_t f34;
};

#define RD16(p, off) (*(uint16_t *)((uint8_t *)(p) + (off)))
#define SW16(v) ((uint16_t)((((int32_t)(v)) >> 8) | (((int32_t)(v)) << 8)))

void func_ov000_021469ac(void *r6p, void *r5p, uint32_t r7v)
{
    struct Dst *d = (struct Dst *)data_ov000_0216be78;
    uint8_t *s = (uint8_t *)r5p;
    uint8_t *q = (uint8_t *)r6p;
    uint32_t v;
    uint32_t r1;

    func_02084b2c(data_ov000_0216be78, 0, 0xa0);
    d->f0a = SW16(RD16(s, 2));
    d->f18 = SW16(RD16(s, 0));
    d->f1c = ((uint32_t)SW16(RD16(q, 0xc)) << 16) | SW16(RD16(q, 0xe));

    if (s[0xd] & 0x10) {
        d->f34 = ((uint32_t)SW16(RD16(s, 8)) << 16) | SW16(RD16(s, 0xa));
        func_ov000_02146904(d, 4);
        return;
    }
    d->f34 = 0;
    v = ((uint32_t)SW16(RD16(s, 4)) << 16) | SW16(RD16(s, 6));
    r1 = r7v + v;
    d->f24 = r1;
    if (s[0xd] & 3) {
        d->f24 = r1 + 1;
    }
    func_ov000_02146904(d, 0x14);
}
