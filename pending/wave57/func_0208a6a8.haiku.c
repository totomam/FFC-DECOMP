#include "ffc/types.h"

extern void func_02088f30(void);
extern uint8_t data_021434e4[];

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

void func_0208a6a8(uint32_t a, uint32_t v, uint32_t flag)
{
    S *d;
    uint16_t key = (uint16_t)v;
    uint32_t idx = (key & 0x7f00u) >> 8;
    uint16_t buf[4];
    uint32_t w;

    d = (S *)data_021434e4;
    if (flag != 0) {
        d->mask38 = (uint16_t)(d->mask38 | (uint16_t)(1u << idx));
        if (d->cb != 0) {
            d->cb(idx, 4, 0);
        }
        return;
    }

    if (idx == 0x10) {
        E *e;
        uint16_t c;
        d->counter++;
        if (d->counter >= d->limit) {
            d->counter = 0;
        }
        c = d->counter;
        e = (E *)(d->entries + (c << 3));
        buf[0] = *(uint16_t *)0x02ffffaa;
        buf[1] = *(uint16_t *)0x02ffffac;
        w = *(uint32_t *)buf;
        e->a = (uint16_t)(w & 0xfff);
        e->b = (uint16_t)((w >> 12) & 0xfff);
        e->c = (uint16_t)((w >> 24) & 1);
        e->d = (uint16_t)((w >> 25) & 3);
        if (d->cb != 0) {
            d->cb(idx, 0, (uint8_t)c);
        }
        return;
    }

    if ((v & 0x01000000u) == 0) {
        return;
    }

    if ((uint8_t)key > 4) {
        func_02088f30();
        return;
    }
    switch ((uint8_t)key) {
    case 0:
        if (idx == 0) {
            buf[0] = *(uint16_t *)0x02ffffaa;
            buf[1] = *(uint16_t *)0x02ffffac;
            w = *(uint32_t *)buf;
            d->f8 = (uint16_t)(w & 0xfff);
            d->fa = (uint16_t)((w >> 12) & 0xfff);
            d->fc = (uint16_t)((w >> 24) & 1);
            d->fe = (uint16_t)((w >> 25) & 3);
            d->f36 = 0;
        } else if (idx == 1) {
            d->f36 = 2;
        } else if (idx == 2) {
            d->f36 = 0;
        }
        /* fallthrough */
    case 4:
        d->mask3a = (uint16_t)(d->mask3a & (uint16_t)~(1u << idx));
        if (d->cb != 0) {
            d->cb(idx, 0, 0);
        }
        return;
    default:
        d->mask38 = (uint16_t)(d->mask38 | (uint16_t)(1u << idx));
        d->mask3a = (uint16_t)(d->mask3a & (uint16_t)~(1u << idx));
        if (d->cb != 0) {
            d->cb(idx, (uint8_t)key, 0);
        }
        return;
    }
}
