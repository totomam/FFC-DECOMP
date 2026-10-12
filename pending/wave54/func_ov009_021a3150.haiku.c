#include "ffc/types.h"

typedef struct {
    int16_t key;
    int16_t s2;
    int16_t s4;
    int16_t pad6;
    uint32_t f8;
    uint32_t fc;
    uint32_t f10;
    uint32_t f14;
    uint32_t f18;
} Ent;

typedef struct {
    uint32_t pad0;
    uint32_t pad4;
    uint32_t count;
    uint32_t off;
} Mar;

typedef struct {
    uint32_t a;
    void *p;
    uint32_t i;
    uint8_t flag;
} Tmp;

extern void *data_020b8e44;
extern void func_02016eb8(void *out, void *x);
extern void *func_02052d90(void *mar, uint32_t index);
extern uint32_t func_0209a76c(uint32_t x, uint32_t y);
extern void func_ov009_021a3120(void *a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f);
extern void func_02022fdc(void *p, int x, int y, int z);
extern void func_02022bec(void *p, uint32_t x);
extern void func_02052d3c(void *p, uint32_t i);
extern void func_02052c04(void *p);
extern void *func_02053290(void *o);

void func_ov009_021a3150(void *a, uint32_t b, int c)
{
    Tmp t;
    Tmp *q;
    uint32_t v24 = 0;
    uint16_t v20 = 0;
    uint16_t v1c = 0;
    uint16_t v18 = 0;
    int v14 = 0;
    int v10 = 0;
    uint32_t i;
    Mar *m;

    func_02016eb8(&t, data_020b8e44);
    i = 0;
    m = (Mar *)func_02052d90(t.p, t.i);
    for (; i < m->count; i++, m = (Mar *)func_02052d90(t.p, t.i)) {
        Ent *e;
        m = (Mar *)func_02052d90(t.p, t.i);
        e = (Ent *)((uint8_t *)m + m->off) + i;
        if (c == e->key) {
            v18 = (uint16_t)func_0209a76c(e->f8 << 4, 360);
            v20 = (uint16_t)func_0209a76c(e->fc << 4, 360);
            v1c = (uint16_t)func_0209a76c(e->f10 << 4, 360);
            v24 = e->f14;
            v14 = e->s2;
            v10 = e->s4;
            break;
        }
    }

    func_ov009_021a3120(a, b, v18, v24, v20, v1c);

    if (v18 != 0) {
        func_02022fdc(*(void **)((uint8_t *)a + 0x80), v14, v10, 0);
        a = (uint8_t *)a + 0x80;
        func_02022bec(*(void **)a, v18);
    }

    q = &t;
    if (q->p != 0) {
        if (q->flag != 0) {
            func_02052d3c(q->p, q->i);
        }
        func_02052c04(q->p);
    }
    func_02053290(q);
}
