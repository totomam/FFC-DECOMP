#include "ffc/types.h"

extern void func_02088f30(void);

typedef struct {
    uint32_t a:12; uint32_t b:12; uint32_t c:1; uint32_t d:2;
} BF;

typedef union { uint16_t h[2]; BF b; } U;

typedef struct {
    uint16_t a, b, c, d;
} E;

typedef struct {
    uint32_t w0;
    void (*cb)(uint32_t, uint32_t, uint32_t);
    uint16_t f8, fa, fc, fe;
    uint16_t counter;
    uint16_t pad12;
    uint8_t *entries;
    uint16_t limit;
    uint8_t pad1a[0x1c];
    uint16_t f36;
    uint16_t mask38;
    uint16_t mask3a;
} S;
extern S data_021434e4;

void func_0208a6a8(uint32_t a, uint32_t v, uint32_t flag)
{
    uint16_t key = (uint16_t)v;
    uint32_t idx = (((uint32_t)key & 0x7f00u) << 8) >> 16;
    U u2;
    U u1;
    uint32_t t;

    if (flag != 0) {
        data_021434e4.mask38 = (uint16_t)(data_021434e4.mask38 | (uint16_t)(1u << idx));
        if (data_021434e4.cb != 0) {
            data_021434e4.cb(idx, 4, 0);
        }
        return;
    }

    if (idx == 0x10) {
        E *e;
        data_021434e4.counter++;
        if (data_021434e4.counter >= data_021434e4.limit) {
            data_021434e4.counter = 0;
        }
        e = (E *)(data_021434e4.entries + (data_021434e4.counter << 3));
        u2.h[0] = *(uint16_t *)0x02ffffaa;
        u2.h[1] = *(uint16_t *)0x02ffffac;
            e->a = (uint16_t)u2.b.a;
        e->b = (uint16_t)u2.b.b;
        e->c = (uint8_t)u2.b.c;
        e->d = (uint8_t)u2.b.d;
        if (data_021434e4.cb != 0) {
            data_021434e4.cb(idx, 0, (uint8_t)data_021434e4.counter);
        }
        return;
    }

    if ((v & 0x01000000u) == 0) {
        return;
    }

    t = (uint8_t)key;
    if (t > 4) {
        func_02088f30();
        return;
    }
    switch (t) {
    case 0:
        if (idx == 0) {
            u1.h[0] = *(uint16_t *)0x02ffffaa;
            u1.h[1] = *(uint16_t *)0x02ffffac;
                    data_021434e4.f8 = (uint16_t)u1.b.a;
            data_021434e4.fa = (uint16_t)u1.b.b;
            data_021434e4.fc = (uint8_t)u1.b.c;
            data_021434e4.fe = (uint8_t)u1.b.d;
            data_021434e4.f36 = 0;
        } else if (idx == 1) {
            data_021434e4.f36 = 2;
        } else if (idx == 2) {
            data_021434e4.f36 = 0;
        }
        data_021434e4.mask3a = (uint16_t)(data_021434e4.mask3a & (uint16_t)~(1u << idx));
        if (data_021434e4.cb != 0) {
            data_021434e4.cb(idx, 0, 0);
        }
        return;
    case 2: t = 1; break;
    case 3: t = 2; break;
    case 4: t = 3; break;
    default:
        func_02088f30();
        return;
    }
    data_021434e4.mask38 = (uint16_t)(data_021434e4.mask38 | (uint16_t)(1u << idx));
    data_021434e4.mask3a = (uint16_t)(data_021434e4.mask3a & (uint16_t)~(1u << idx));
    if (data_021434e4.cb != 0) {
        data_021434e4.cb(idx, t, 0);
    }
}
