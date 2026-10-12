#include "ffc/types.h"

typedef struct Pkt {
    uint8_t t;
    uint8_t b;
    uint16_t w2;
    uint16_t w4;
    uint16_t w6;
    uint16_t w8;
    uint16_t wa;
    uint16_t wc;
    uint16_t we;
} Pkt;

typedef struct Ent {
    uint32_t key;
    uint16_t cnt;
    uint16_t key2;
    uint16_t sz8;
    uint16_t lastsz;
    uint16_t idx[8];
    uint16_t off[8];
    uint32_t f2c;
    uint8_t *buf30;
    uint8_t *buf34;
} Ent;

typedef void *(*AllocFn)(uint32_t);
typedef void (*FreeFn)(void *);

extern Ent data_ov000_0216c458[8];
extern void *data_ov000_0216bc60[];
extern uint64_t func_020882cc(void);
extern void func_02084e04(void *a, void *b, uint32_t c);

#define BS16(x) ((uint16_t)((((int32_t)(x)) >> 8) | (((int32_t)(x)) << 8)))

void *func_ov000_021473b4(Pkt *p, uint32_t *out)
{
    Ent *ent = 0;
    Ent *e;
    Ent *c;
    uint32_t szb, t, key, sz, total, t2, lo, i, prev, best, n;
    uint16_t v, w2;
    uint64_t r;
    uint8_t *q;

    *out = 0;
    v = BS16(p->w6);
    if (!(v & 0x3fff)) {
        return p;
    }
    t = ((uint32_t)p->t << 28) >> 26;
    key = ((uint32_t)BS16(p->wc) << 16) | BS16(p->we);

    for (i = 0; i < 8; i++) {
        c = &data_ov000_0216c458[i];
        if (c->cnt != 0) {
            if (c->key == key && c->key2 == p->w4) {
                break;
            }
        } else if (ent == 0) {
            ent = c;
        }
    }

    w2 = BS16(p->w2);
    t2 = w2 - t;
    sz = v & 0x1fff;
    szb = sz << 3;
    total = t2 + szb;

    if (i == 8) {
        if (ent == 0) {
            return 0;
        }
        if (total > 0x1000) {
            return 0;
        }
        e = ent;
        e->buf34 = ((AllocFn)data_ov000_0216bc60[5])(t + 0x100e);
        if (e->buf34 == 0) {
            return 0;
        }
        e->key = key;
        e->key2 = p->w4;
        e->sz8 = 0;
        r = func_020882cc();
        e->f2c = ((uint32_t)r >> 16) | ((uint32_t)(r >> 32) << 16);
        e->buf30 = e->buf34 + 0xe + t;
        func_02084e04(p, e->buf34 + 0xe, t);
    } else {
        e = &data_ov000_0216c458[i];
    }

    if (e->cnt == 8 || total > 0x1000) {
        e->cnt = 0;
        ((FreeFn)data_ov000_0216bc60[0x11])(e->buf34);
        return 0;
    }

    lo = sz + ((t2 + 7) >> 3);
    if (!(v & 0x2000)) {
        e->lastsz = total;
        e->sz8 = lo;
    }
    n = e->cnt;
    e->idx[n] = sz;
    e->off[n] = lo;
    e->cnt = n + 1;
    func_02084e04((uint8_t *)p + t, e->buf30 + szb, t2);

    if (e->sz8 == 0) {
        return 0;
    }

    n = e->cnt;
    best = 0;
    for (i = 0; i < n;) {
        prev = best;
        if (e->idx[i] <= best && best < e->off[i]) {
            best = e->off[i];
            i = prev;
        } else {
            i++;
        }
    }

    if (best < e->sz8) {
        return 0;
    }

    q = e->buf34 + 0xe;
    ((Pkt *)q)->w2 = BS16(e->lastsz + ((((uint32_t)q[0]) << 28) >> 26));
    e->cnt = 0;
    *out = 1;
    return q;
}
