#include "ffc/types.h"

typedef struct { uint32_t a, b; } P2;
typedef struct { void *vt; uint8_t p1[0x84]; uint32_t f88,f8c,f90,f94,f98,f9c,fa0,fa4; uint8_t pa8[0x20]; uint8_t fc8; uint8_t pc9[3]; uint32_t fcc; uint8_t pd0[0x20]; uint32_t ff0; } Obj;
typedef struct {
    uint32_t pad;
    void *a;
    uint32_t b;
    uint8_t c;
} Loc;

extern void func_02056c9c(void *self);
extern void *func_0203b7c0(void *arg);
extern void func_02019548(Loc *out, void *arg);
extern uint8_t *func_02052d90(void *mar, uint32_t index);
extern void func_ov003_02177a84(void *self, int arg);
extern void *func_0203b67c(void);
extern void func_02056bc0(void *object, void *node);
extern void func_02052d3c(void *a, uint32_t b);
extern void func_02052c04(void *a);
extern void *func_02053290(void *object);

extern uint8_t data_ov003_0217bcf8[];
extern uint32_t data_ov003_021d4f88[2];
extern uint8_t data_ov003_0217bd08[];
extern uint8_t data_ov003_0217bd20[];
extern uint8_t data_ov003_0217bd3c;
extern void *data_020b8e44;
extern uint16_t data_ov003_021d4fb8[];
extern uint16_t data_ov003_021d4f90[];
extern uint16_t data_ov003_021d4fa4[];
extern uint32_t data_ov003_0217bd40[2];

#define PACK(e) ((uint16_t)(((((uint32_t)(e)[2]) >> 3) << 10) | (((((uint32_t)(e)[1]) >> 3) << 5) | ((2 << 14) | (((uint32_t)(e)[0]) >> 3)))))

void *func_ov003_0217775c(void *self)
{
    uint8_t *p = (uint8_t *)self;
    Obj *o = (Obj *)self;
    Loc L;
    uint8_t *m;
    uint8_t *r7;
    uint8_t *e0;
    uint8_t *base6;
    uint8_t *base5;
    uint32_t i, j, n, off;
    uint8_t ci;
    void *s;
    uint32_t k;
    Loc *lp;

    func_02056c9c(p);
    *(void **)p = (void *)data_ov003_0217bcf8;
    o->f88 = 0;
    o->f8c = 0;
    o->f90 = 0;
    o->f94 = 0;
    o->f98 = 0;
    o->f9c = 0;
    o->fa0 = 0;
    o->fa4 = 0;
    o->fc8 = 1;
    o->fcc = 0;
    o->ff0 = 0;

    *(void **)(p + 0x88) = func_0203b7c0(data_ov003_021d4f88[1] == 0 ? (void *)data_ov003_0217bd08 : (void *)data_ov003_0217bd20);
    p[0xa8] = data_ov003_0217bd3c;
    p[0xd0] = data_ov003_0217bd3c;

    for (i = 0; i < 5; i++) {
        *(uint32_t *)(p + 0xf4 + i * 8) = 0;
        *(uint32_t *)(p + 0xf8 + i * 8) = 0;
    }

    func_02019548(&L, data_020b8e44);
    m = func_02052d90(L.a, L.b);
    ci = m[4];
    m = func_02052d90(L.a, L.b);
    off = *(uint32_t *)(m + 0x1c);
    r7 = m + *(uint32_t *)(m + off + ci * 4);
    n = *(uint32_t *)(r7 + 4) + 1;
    data_ov003_021d4f88[0] = n;
    j = 1;
    if (n > 1) {
        do {
            e0 = r7 + *(uint32_t *)(r7 + 8);
            data_ov003_021d4fb8[j] = PACK(e0 + (j - 1) * 4);
            j++;
        } while (j < n);
    }

    m = func_02052d90(L.a, L.b);
    off = *(uint32_t *)(m + 0x30);
    base6 = 0;
    if (off != 0) {
        base6 = m + off;
    }
    m = func_02052d90(L.a, L.b);
    off = *(uint32_t *)(m + 0x34);
    base5 = 0;
    if (off != 0) {
        base5 = m + off;
    }
    for (k = 0; k < 10; k++) {
        data_ov003_021d4f90[k] = PACK(base6);
        data_ov003_021d4fa4[k] = PACK(base5);
    }

    func_ov003_02177a84(p, 1);
    s = func_0203b67c();
    *(void **)(p + 0xa0) = s;
    func_02056bc0(p + 0x48, s);

    lp = &L;
    *(P2 *)(p + 0x80) = *(P2 *)data_ov003_0217bd40;

    if (lp->a != 0) {
        if (lp->c != 0) {
            func_02052d3c(lp->a, lp->b);
        }
        func_02052c04(lp->a);
    }
    func_02053290(lp);
    return p;
}
