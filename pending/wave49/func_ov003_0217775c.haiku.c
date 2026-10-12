#include "ffc/types.h"

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

#define PACK(e) ((uint16_t)((((e)[2] >> 3) << 10) | (2 << 14) | (((e)[1] >> 3) << 5) | ((e)[0] >> 3)))

void *func_ov003_0217775c(void *self)
{
    uint8_t *p = (uint8_t *)self;
    Loc L;
    uint8_t *m;
    uint8_t *r7;
    uint8_t *e0;
    uint8_t *base6;
    uint8_t *base5;
    uint32_t i, j, n, off;
    uint8_t ci;
    void *s;

    func_02056c9c(p);
    *(void **)p = (void *)data_ov003_0217bcf8;
    *(uint32_t *)(p + 0x88) = 0;
    *(uint32_t *)(p + 0x8c) = 0;
    *(uint32_t *)(p + 0x90) = 0;
    *(uint32_t *)(p + 0x94) = 0;
    *(uint32_t *)(p + 0x98) = 0;
    *(uint32_t *)(p + 0x9c) = 0;
    *(uint32_t *)(p + 0xa0) = 0;
    *(uint32_t *)(p + 0xa4) = 0;
    p[0xc8] = 1;
    *(uint32_t *)(p + 0xcc) = 0;
    *(uint32_t *)(p + 0xf0) = 0;

    *(void **)(p + 0x88) = func_0203b7c0(data_ov003_021d4f88[1] ? (void *)data_ov003_0217bd20 : (void *)data_ov003_0217bd08);
    p[0xa8] = data_ov003_0217bd3c;
    p[0xd0] = data_ov003_0217bd3c;

    for (i = 0; i < 5; i++) {
        *(uint32_t *)(p + 0xf4 + i * 8) = i;
        *(uint32_t *)(p + 0xf8 + i * 8) = i;
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
        e0 = r7 + *(uint32_t *)(r7 + 8);
        do {
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
    for (i = 0; i < 10; i++) {
        data_ov003_021d4f90[i] = PACK(base6);
        data_ov003_021d4fa4[i] = PACK(base5);
    }

    func_ov003_02177a84(p, 1);
    s = func_0203b67c();
    *(void **)(p + 0xa0) = s;
    func_02056bc0(p + 0x48, s);

    *(uint32_t *)(p + 0x80) = data_ov003_0217bd40[0];
    *(uint32_t *)(p + 0x84) = data_ov003_0217bd40[1];

    if (L.a != 0) {
        if (L.c != 0) {
            func_02052d3c(L.a, L.b);
        }
        func_02052c04(L.a);
    }
    func_02053290(&L);
    return p;
}
