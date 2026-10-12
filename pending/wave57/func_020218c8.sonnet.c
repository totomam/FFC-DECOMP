#include "ffc/types.h"

typedef struct Slot {
    void *w0;
    uint32_t w4;
    uint32_t size;
    void *buf;
} Slot;

typedef struct Ent {
    int32_t a;
    int32_t b;
    int32_t c;
} Ent;

extern void func_02056c9c(void *a, uint32_t x);
extern void func_02009130(void *out, uint32_t a, uint32_t b);
extern void func_02021a84(void *dst, void *src);
extern void *func_020059cc(void *object);
extern void func_02053234(void *object);
extern void *func_02052d90(void *a, void *b);
extern void func_0202240c(void *a, uint32_t b);
extern void *func_02056830(uint32_t x);
extern void func_020224b8(void *a, uint32_t b, void *c);
extern void func_02084b2c(void *a, uint32_t b, uint32_t c);
extern char data_020ad714[];
extern uint32_t data_020ad6bc[];
extern char data_020acab8[];
extern char data_020ad6f4[];
extern char data_020ad6c4[];

uint8_t *func_020218c8(uint8_t *self, uint32_t p1, uint8_t p2, uint8_t p3)
{
    uint32_t tmp[3];
    uint8_t *mar;
    void *r;
    uint32_t i;
    Slot *s;

    func_02056c9c(self, 0);
    *(void **)self = data_020ad714;
    func_02009130(tmp, data_020ad6bc[1], p1);
    func_02021a84(self + 0x80, tmp);
    func_020059cc(tmp);
    mar = self + 0x90;
    func_02053234(mar);
    *(uint32_t *)(mar + 4) = 0;
    mar[0xc] = 0;
    r = func_02052d90(*(void **)(self + 0x84), *(void **)(self + 0x88));
    {
        uint32_t n = *(uint32_t *)((uint8_t *)r + 4);
        uint32_t *a0r0 = (uint32_t *)(self + 0xa0);
        uint32_t *a0r2 = (uint32_t *)(self + 0xa0);
        *a0r2 = 0;
        a0r0[1] = 0;
        a0r0[2] = 0;
        func_0202240c(self + 0xa0, n);
    }

    s = (Slot *)(self + 0xac);
    s->w0 = data_020acab8;
    s->w0 = data_020ad6f4;
    s->size = 0x4d5;
    s->buf = func_02056830((s->size + 7) >> 3);

    s = (Slot *)(self + 0xbc);
    s->w0 = data_020acab8;
    s->w0 = data_020ad6f4;
    s->size = 0x4d5;
    s->buf = func_02056830((s->size + 7) >> 3);

    {
        uint8_t *a0 = self + 0xcc;
        uint8_t *a1 = self + 0xcc;
        *(uint32_t *)a1 = 0;
        ((uint32_t *)a0)[1] = 0;
        ((uint32_t *)a0)[2] = 0;
        func_020224b8(a0, 0xd, data_020ad6c4);
    }

    self[0xd8] = 0;
    *(uint32_t *)(self + 0xdc) = 0;
    *(uint32_t *)(self + 0xe0) = 0;
    self[0xe4] = p2;
    self[0xe5] = p3;
    self[0xe6] = 1;

    func_02084b2c(*(void **)(self + 0xb8), 0, (*(uint32_t *)(self + 0xb4) + 7) >> 3);
    func_02084b2c(*(void **)(self + 0xc8), 0, (*(uint32_t *)(self + 0xc4) + 7) >> 3);

    r = func_02052d90(*(void **)(self + 0x84), *(void **)(self + 0x88));
    for (i = 0; i < *(uint32_t *)((uint8_t *)r + 4); ) {
        {
            uint8_t *base;
            uint32_t off;
            int32_t val;
            r = func_02052d90(*(void **)(self + 0x84), *(void **)(self + 0x88));
            val = *(int32_t *)((uint8_t *)r + *(uint32_t *)((uint8_t *)r + 8) + i * 4);
            base = (uint8_t *)r + val;
            off = i * 12;
            i++;
            *(int32_t *)(*(uint8_t **)(self + 0xa0) + off) = -1;
            *(int32_t *)(*(uint8_t **)(self + 0xa0) + off + 4) = (int8_t)base[2];
            *(int32_t *)(*(uint8_t **)(self + 0xa0) + off + 8) = 0;
            r = func_02052d90(*(void **)(self + 0x84), *(void **)(self + 0x88));
        }
    }
    return self;
}
