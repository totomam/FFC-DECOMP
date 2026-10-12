#include "ffc/types.h"

typedef struct Ent {
    uint32_t w0;
    void *h4;
    uint32_t v8;
    uint8_t f0c;
    void *h10;
    uint32_t v14;
    uint8_t f18;
    void *h1c;
    uint32_t v20;
    uint8_t f24;
    void *h28;
    uint32_t v2c;
    uint8_t f30;
    uint32_t v34;
} Ent;

typedef struct Vec {
    Ent *data;
    uint32_t count;
    uint32_t cap;
} Vec;

typedef struct Tmp {
    Ent *data;
    uint32_t count;
    uint32_t cap;
    uint32_t *pcap;
    uint32_t misc;
} Tmp;

extern int func_ov012_021d1570(Vec *p, uint32_t x);
extern void func_ov012_021d1868(Tmp *t, int idx, uint32_t flag);
extern void func_ov012_021d1834(Tmp *t);
extern void *func_0205327c(void *destination, const void *source);
extern void func_02052be0(void *h);
extern void func_02052d10(void *h, uint32_t v);

#define COPY_ENT(D, S) do { \
    Ent *dd = (D); Ent *ss = (S); \
    func_0205327c(dd, ss); \
    dd->h4 = ss->h4; dd->v8 = ss->v8; dd->f0c = ss->f0c; \
    if (dd->h4 != 0) { func_02052be0(dd->h4); if (dd->f0c != 0) func_02052d10(dd->h4, dd->v8); } \
    dd->h10 = ss->h10; dd->v14 = ss->v14; dd->f18 = ss->f18; \
    if (dd->h10 != 0) { func_02052be0(dd->h10); if (dd->f18 != 0) func_02052d10(dd->h10, dd->v14); } \
    dd->h1c = ss->h1c; dd->v20 = ss->v20; dd->f24 = ss->f24; \
    if (dd->h1c != 0) { func_02052be0(dd->h1c); if (dd->f24 != 0) func_02052d10(dd->h1c, dd->v20); } \
    dd->h28 = ss->h28; dd->v2c = ss->v2c; dd->f30 = ss->f30; \
    if (dd->h28 != 0) { func_02052be0(dd->h28); if (dd->f30 != 0) func_02052d10(dd->h28, dd->v2c); } \
    dd->v34 = ss->v34; \
} while (0)

void func_ov012_021d15f0(Vec *p, uint32_t n, Ent *src)
{
    Tmp tmp;
    Ent *d;
    Ent *end;
    Ent *base;
    uint32_t old;
    uint32_t tcap;
    Ent *tdata;
    int idx;

    tmp.pcap = &p->cap;
    tmp.data = 0;
    tmp.count = 0;
    tmp.cap = 0;
    tmp.misc = 0;
    idx = func_ov012_021d1570(p, p->count + n - p->cap);
    func_ov012_021d1868(&tmp, idx, 0);
    old = p->count;
    d = tmp.data + (old + tmp.count);
    while (n != 0) {
        if (d != 0) {
            COPY_ENT(d, src);
        }
        n--;
        tmp.count++;
        d++;
    }
    base = p->data;
    end = base + old;
    d = tmp.data + old;
    while (end > base) {
        end--;
        d--;
        if (d != 0) {
            COPY_ENT(d, end);
        }
        tmp.count++;
    }
    tcap = p->cap;
    p->cap = tmp.cap;
    tmp.cap = tcap;
    tdata = p->data;
    p->data = tmp.data;
    tmp.data = tdata;
    old = p->count;
    p->count = tmp.count;
    tmp.count = old;
    func_ov012_021d1834(&tmp);
}
