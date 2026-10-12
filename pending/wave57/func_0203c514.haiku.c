#include "ffc/types.h"

typedef struct {
    uint32_t f0;
    void *mar;
    uint32_t idx;
    uint8_t flag;
} Handle;

typedef struct {
    int16_t id;
    int16_t a;
    int16_t b;
    int16_t pad;
    int32_t c;
    int32_t d;
    int32_t e;
    int32_t f;
    int32_t g;
} Entry;

typedef struct {
    uint32_t w0;
    uint32_t w4;
    uint32_t count;
    uint32_t off;
} Sub;

extern void func_02016eb8(Handle *h, void *v);
extern void *func_02052d90(void *mar, uint32_t index);
extern uint32_t func_0209a76c(uint32_t x, uint32_t y);
extern void func_02022cac(void *o, void *p, void *q, int32_t r3, uint16_t s0, uint16_t s4, uint32_t s8);
extern void func_0208092c(void *a, void *b, void *c, void *ctx);
extern void func_020810c4(int16_t x, int16_t y, int32_t z, int32_t w, int32_t s0, int32_t s4, void *s8);
extern void func_02080a40(void *v);
extern void func_02080aa0(void *o, void *i, int16_t a, int16_t b, int32_t c);
extern void func_02080d08(void *a, void *b, void *c);
extern void func_02052d3c(void *a, uint32_t b);
extern void func_02052c04(void *a);
extern void func_02053290(void *o);
extern void *data_020b8e44;
extern int16_t data_020a1bd0[];

void func_0203c514(uint8_t *ctx, int32_t id) {
    Handle h;
    uint32_t t68[3];
    uint32_t t5c[3];
    uint32_t t50[3];
    uint32_t t10[16];
    Sub *s;
    Entry *e;
    Handle *hp;
    uint32_t i;
    uint32_t z;
    int32_t f;
    uint16_t v5;
    uint16_t v4;
    int32_t k;

    func_02016eb8(&h, data_020b8e44);
    i = 0;
    s = func_02052d90(h.mar, h.idx);
    if (i < s->count) {
        do {
            s = func_02052d90(h.mar, h.idx);
            e = (Entry *)((uint8_t *)s + s->off) + i;
            if (id == e->id) {
                break;
            }
            i++;
            s = func_02052d90(h.mar, h.idx);
        } while (i < s->count);
    }

    v5 = (uint16_t)func_0209a76c(e->d << 4, 360);
    v4 = (uint16_t)func_0209a76c(e->e << 4, 360);
    f = e->f;
    z = 0;
    t68[0] = z;
    t68[1] = z;
    t68[2] = z;
    func_02022cac(t5c, t50, t68, f, v5, v4, z);
    func_0208092c(t5c, t50, t68, ctx);

    k = ((int32_t)func_0209a76c(e->c << 4, 360) >> 4) * 2;
    func_020810c4(data_020a1bd0[k], data_020a1bd0[k + 1], 0x1555, 4096, 0x320000, 4096, ctx + 0x30);

    func_02080a40(t10);
    func_02080aa0(t10, t10, e->a, e->b, z);
    func_02080d08(ctx + 0x30, t10, ctx + 0x30);

    hp = &h;
    if (hp->mar != 0) {
        if (hp->flag != 0) {
            func_02052d3c(hp->mar, hp->idx);
        }
        func_02052c04(hp->mar);
    }
    func_02053290(hp);
}
