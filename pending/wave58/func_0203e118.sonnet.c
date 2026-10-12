#include "ffc/types.h"

typedef struct {
    uint32_t a;
    void *mar;
    uint32_t idx;
    uint8_t flag;
} FfcTmp;

typedef struct { uint32_t a; uint32_t b; } Pair;

extern void *func_020424e0(void *h);
extern void *func_ov003_02146494(void);
extern uint32_t func_ov003_021464f4(void *a, uint32_t b);
extern uint32_t func_ov003_02149964(void *a, Pair b);
extern void *func_ov003_02155b40(void *h);
extern void func_ov003_0214f240(void *out, uint32_t v);
extern void *func_ov003_0214649c(void *h);
extern void *func_02052d90(void *mar, uint32_t index);
extern void *func_0203b6fc(void);
extern void *func_0205681c(uint32_t size);
extern void *func_ov003_02165838(void *obj, void *h, uint32_t n);
extern void func_02056bc0(void *obj, void *node);
extern void func_02016448(void *out, void *h);
extern void *func_ov003_02165254(void *obj, void *h, uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, int32_t f);
extern void func_02052d3c(void *mar, uint32_t index);
extern void func_02052c04(void *mar);
extern void func_02053290(void *obj);
extern void *func_ov003_0214bf10(void *h, uint32_t a, Pair b, uint32_t c, void *e, uint32_t f, uint32_t g, uint32_t h2);

extern void *data_020b8e44;
extern uint32_t data_020aeee0[2];
extern uint32_t data_020aeee8[2];

#define FLD32(o) (*(uint32_t *)(self + (o)))

void func_0203e118(void *s)
{
    uint8_t *self = (uint8_t *)s;
    uint32_t r7;
    struct { Pair x; Pair pb; Pair pa; uint32_t pad; Pair pc; FfcTmp tmp; } L;
    uint32_t r4v;
    uint32_t v24, v20, v1c, v18, v14;
    void *obj4, *node, *m, *c, *alloc;
    uint32_t r6;
    uint32_t x;
    uint8_t *q;

    r7 = 0x19;
    if (*(uint8_t *)(self + 0xe8)) {
        r7 = 0x1b;
    }

    func_020424e0(*(void **)(self + 0x88));
    q = (uint8_t *)func_ov003_02146494();
    q += 0xb0;
    x = func_ov003_021464f4(func_020424e0(*(void **)(self + 0x88)), *(uint32_t *)q);
    FLD32(0xb8) = x;

    {
        x = func_ov003_02149964(func_020424e0(*(void **)(self + 0x88)), *(Pair *)(self + 0x8c));
    }
    FLD32(0xbc) = x;

    {
        uint8_t *w = (uint8_t *)func_ov003_02155b40(*(void **)(self + 0xb8));
        FLD32(0xec) = *(uint16_t *)(w + 0x10);
    }

    func_ov003_0214f240(&L.pb, FLD32(0xbc));
    r4v = L.pb.b;
    func_ov003_0214f240(&L.pa, FLD32(0xbc));
    L.pc.a = L.pa.a;
    L.pc.b = r4v;

    v24 = *(uint32_t *)(*(uint8_t **)(self + 0xbc) + 0x98);
    c = func_ov003_0214649c(func_020424e0(*(void **)(self + 0x88)));
    m = func_02052d90(*(void **)((uint8_t *)c + 0xe4), *(uint32_t *)((uint8_t *)c + 0xe8));
    r6 = (*((uint8_t *)m + 8) == 0) ? 2 : 3;

    obj4 = func_0203b6fc();
    alloc = func_0205681c(0x38);
    node = alloc ? func_ov003_02165838(alloc, *(void **)(self + 0x88), r6) : alloc;
    func_02056bc0(obj4, node);

    c = func_ov003_0214649c(func_020424e0(*(void **)(self + 0x88)));
    m = func_02052d90(*(void **)((uint8_t *)c + 0xe4), *(uint32_t *)((uint8_t *)c + 0xe8));

    if (*((uint8_t *)m + 8) != 0) {
        func_02016448(&L.tmp, data_020b8e44);
        m = func_02052d90(L.tmp.mar, L.tmp.idx);
        v20 = *(uint32_t *)((uint8_t *)m + *(uint32_t *)((uint8_t *)m + 0x64));
        m = func_02052d90(L.tmp.mar, L.tmp.idx);
        v1c = *(uint32_t *)((uint8_t *)m + *(uint32_t *)((uint8_t *)m + 0x64) + 8);
        m = func_02052d90(L.tmp.mar, L.tmp.idx);
        v18 = *(uint32_t *)((uint8_t *)m + *(uint32_t *)((uint8_t *)m + 0x64) + 4);
        m = func_02052d90(L.tmp.mar, L.tmp.idx);
        v14 = *(uint16_t *)((uint8_t *)m + 0x16);
        m = func_02052d90(L.tmp.mar, L.tmp.idx);
        r6 = *(int16_t *)((uint8_t *)m + 0x18);

        alloc = func_0205681c(0x98);
        node = alloc ? func_ov003_02165254(alloc, *(void **)(self + 0x88), 1, v20, v1c, v18, v14 & 0xffff, (int32_t)r6) : alloc;
        func_02056bc0(obj4, node);

        {
            FfcTmp *t = &L.tmp;
            if (L.tmp.mar != 0) {
                if (t->flag) {
                    func_02052d3c(t->mar, t->idx);
                }
                func_02052c04(t->mar);
            }
            func_02053290(t);
        }
    }

    node = func_ov003_0214bf10(func_020424e0(*(void **)(self + 0x88)), FLD32(0xb8), L.pc, v24, obj4, r7, FLD32(0xf0), FLD32(0xf4));
    func_02056bc0(self + 0x14, node);

    if (*(uint8_t *)(self + 0xe8) == 0) {
        *(Pair *)(self + 0x80) = *(Pair *)data_020aeee0;
        return;
    }
    *(Pair *)(self + 0x80) = *(Pair *)data_020aeee8;
}
