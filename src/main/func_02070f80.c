#include "ffc/types.h"

typedef struct Rec {
    uint32_t a;
    uint32_t b;
    uint32_t c;
    uint32_t d;
} Rec;

typedef struct Ent {
    uint32_t f0;
    uint32_t f4;
    uint32_t f8;
    Rec *recs;
    uint32_t nrec;
    uint32_t f14;
    uint8_t f18;
} Ent;

typedef struct Self {
    uint32_t h;
    uint8_t f4;
    uint8_t f5;
    uint8_t pad6[2];
    uint32_t size8;
    uint32_t *buf;
    uint32_t *buf2;
    Ent *ents;
    uint32_t count;
    uint8_t pad1c[0x2c - 0x1c];
    uint32_t crc;
} Self;

extern int func_02070a40(uint32_t h);
extern void func_02070a44(uint32_t h);
extern void func_020840a8(void *p, uint32_t x);
extern void *func_02056830(uint32_t size);
extern void func_02056858(void *p);
extern uint32_t func_02070ef0(Self *s, uint32_t n);
extern int func_02071170(Self *s, uint32_t x, void *p);
extern int func_02071188(Self *s, uint32_t x, void *p);
extern void func_02071270(Self *s);
extern int func_02090410(const void *a, const void *b, uint32_t len);
extern void func_020840d8(void *ctx, uint32_t *out, const void *data, uint32_t len);

void func_02070f80(Self *s) {
    uint32_t sp18;
    uint32_t i;
    uint32_t k;
    uint32_t best;
    uint32_t bestj;
    uint32_t *t2;
    uint32_t m;
    uint32_t j;
    uint32_t *tmp;

    s->f4 = 1;
    if (func_02070a40(s->h) == 0) {
        return;
    }
    func_020840a8(&s->crc, 0xedb88320);
    s->size8 = s->count * 4 + 4;
    s->buf = func_02056830(s->size8);
    s->buf2 = s->buf;
    s->buf[0] = 0x4d424b55;
    for (m = 0; m < s->count; m++) {
        s->buf2[m + 1] = s->ents[m].f0;
    }
    func_02070ef0(s, s->size8);
    for (i = 0; i < s->count; i++) {
        Ent *e = &s->ents[i];
        e->f4 = 0;
        e->f8 = 0;
        for (j = 0; j < e->nrec; j++) {
            Rec *r = &e->recs[j];
            r->a = 0;
            r->b = 0;
            r->c = func_02070ef0(s, 8);
            r->d = func_02070ef0(s, e->f0);
        }
    }
    tmp = func_02056830(s->size8);
    k = 0;
    if (!func_02071170(s, 0, tmp) || func_02090410(s->buf, tmp, s->size8) != 0) {
        func_02056858(tmp);
        func_02071270(s);
        return;
    }
    func_02056858(tmp);
    for (k = 0; k < s->count; k++) {
        Ent *e = &s->ents[k];
        best = 0;
        bestj = 0;
        t2 = func_02056830(e->f0);
        for (j = 0; j < e->nrec; j++) {
            Rec *r = &e->recs[j];
            if (!func_02071170(s, r->c, r)) {
                return;
            }
            if (r->a != 0) {
                if (!func_02071170(s, r->d, t2)) {
                    func_02056858(t2);
                    return;
                }
                sp18 = 0xffffffff;
                func_020840d8(&s->crc, &sp18, r, 4);
                func_020840d8(&s->crc, &sp18, t2, e->f0);
                if (r->b != ~sp18) {
                    e->f18 = 1;
                    r->a = 0;
                    if (!func_02071188(s, r->c, r)) {
                        func_02056858(t2);
                        return;
                    }
                } else {
                    if (best < r->a) {
                        best = r->a;
                        bestj = j;
                    }
                }
            }
        }
        e->f8 = best;
        e->f4 = bestj;
        func_02056858(t2);
    }
    s->f5 = 1;
    func_02070a44(s->h);
    func_02070a44(s->h);
    func_02070a44(s->h);
}
