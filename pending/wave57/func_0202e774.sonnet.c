#include "ffc/types.h"

typedef struct { uint32_t a; void *mar; uint32_t idx; uint8_t flag; } Ref16;
typedef struct { void *mar; uint32_t idx; uint8_t flag; } Ref12;

extern void *func_02015ba4(void *unused, uint32_t index);
extern void func_020199f4(Ref16 *out, void *g);
extern void *func_02052d90(void *mar, uint32_t index);
extern void func_02052d3c(void *mar, uint32_t idx);
extern void func_02052c04(void *mar);
extern void func_02053290(void *object);
extern void func_020195b0(Ref16 *out, void *g);
extern void func_0202e8d0(Ref12 *out, void *mar, Ref16 *m, uint32_t index);
extern void func_0202f6ac(void *self, void *x);
extern void func_0202e570(void *self);
extern void *func_02056830(uint32_t v);
extern void func_02052d98(void *mar, uint32_t idx, uint32_t z, void *p, uint32_t v, uint32_t w);
extern void func_02005988(void *buf, void *v);
extern void func_0202e8e8(void *self, void *buf, uint32_t p1);
extern void func_0202f9e4(void *self, void *a, void *b, void *c, void *d, uint32_t e, uint32_t f);
extern void func_02056858(void *p);
extern void func_020059cc(void *buf);

extern void *data_020b8e44;
extern uint8_t data_020add34[];
extern uint8_t data_020add44[];

typedef struct { uint32_t f:1; uint32_t n:31; uint32_t a; uint8_t *p; } SB;
static inline void *bufptr(SB *b)
{
    if (b->f == 0) return (uint8_t *)b + 1;
    return b->p;
}

static inline uint32_t getv(Ref12 *h)
{
    return *(uint32_t *)(*(uint8_t **)((uint8_t *)h->mar + 0x14) + h->idx * 8 + 4);
}

void func_0202e774(uint8_t *self, uint32_t p1, uint32_t p2, uint32_t p3)
{
    Ref16 m3;
    Ref12 h;
    SB buf;
    uint32_t tv;
    Ref16 m1;
    uint8_t *mar;
    uint8_t *y;
    uint32_t *base;
    uint8_t *tbl;
    uint32_t t4;
    uint32_t v;
    void *r4v;
    void *r2v;
    uint16_t sel;
    int16_t r6;
    uint32_t off;
    uint8_t *x;

    x = (uint8_t *)func_02015ba4(data_020b8e44, p1);
    sel = *(uint16_t *)(x + 0x42);
    func_020199f4(&m1, data_020b8e44);
    mar = (uint8_t *)func_02052d90(m1.mar, m1.idx);
    off = *(uint32_t *)(mar + *(uint32_t *)(mar + 8) + sel * 4);
    y = mar + off;
    base = (uint32_t *)(y + *(uint32_t *)(y + 8));
    v = *(uint32_t *)((uint8_t *)base + p2 * 4 - 4);
    r6 = *(int16_t *)(y + v);

    if (m1.mar != 0) {
        Ref16 *q = &m1;
        if (q->flag) {
            func_02052d3c(q->mar, q->idx);
        }
        func_02052c04(q->mar);
    }
    func_02053290(&m1);

    func_020195b0(&m3, data_020b8e44);
    mar = (uint8_t *)func_02052d90(m3.mar, m3.idx);
    func_0202e8d0(&h, mar, &m3, p2 + r6 * 10);
    func_0202f6ac(self, data_020add34);
    func_0202e570(self);

    r4v = func_02056830(getv(&h));
    tv = getv(&h);
    func_02052d98(((volatile Ref12 *)&h)->mar, ((volatile Ref12 *)&h)->idx, 0, r4v, tv, 0);

    func_02005988(&buf, r4v);
    func_0202e8e8(self, &buf, p1);
    r2v = bufptr(&buf);
    func_0202f9e4(self, data_020add44, r2v, *(void **)(self + 0x9c), data_020add34, p3, 0);
    if (r4v != 0) {
        func_02056858(r4v);
    }
    func_020059cc(&buf);

    if (h.mar != 0) {
        if (h.flag) {
            func_02052d3c(h.mar, h.idx);
        }
        func_02052c04(h.mar);
    }
    {
        Ref16 *p = &m3;
        if (p->mar != 0) {
            if (p->flag) {
                func_02052d3c(p->mar, p->idx);
            }
            func_02052c04(p->mar);
        }
        func_02053290(p);
    }
}
