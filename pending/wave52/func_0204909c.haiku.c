#include "ffc/types.h"

typedef struct FfcTmp {
    uint32_t f0;
    void *f4;
    uint32_t f8;
    uint8_t fc;
} FfcTmp;

typedef struct FfcBuf {
    uint32_t pad;
    uint32_t w[3];
} FfcBuf;

extern uint32_t func_0204f7ec(const void *object);
extern void func_020173b0(FfcTmp *out, uint32_t x);
extern void *func_02052d90(const void *mar, uint32_t index);
extern void func_0203919c(void *obj, uint16_t v);
extern void func_020424e0(void *p);
extern uint32_t func_ov003_021464ac(void);
extern void *func_0203be48(uint32_t a, void *obj, uint32_t c, uint32_t d);
extern void func_020059cc(void *object);
extern void func_02056bc0(void *object, void *node);
extern void func_02052d3c(void *a, uint32_t b);
extern void func_02052c04(void *a);
extern void func_02053290(void *object);

extern uint32_t data_0213df18;
extern uint32_t data_0213df20;
extern uint32_t data_020b8e44;
extern uint32_t data_020afea8[2];

void func_0204909c(uint8_t *a)
{
    FfcTmp tmp;
    FfcBuf buf;
    FfcTmp *t;
    uint32_t old;
    uint32_t v;
    void *m;
    uint8_t *s;
    uint32_t p0, p1;

    v = func_0204f7ec((void *)data_0213df18);
    old = data_0213df20;
    data_0213df20 = v;
    t = &tmp;
    func_020173b0(t, data_020b8e44);
    s = func_02052d90(t->f4, t->f8);
    func_0203919c(buf.w, *(uint16_t *)(s + *(uint32_t *)(s + 0xc) + 2));
    func_020424e0(*(void **)(a + 0x94));
    v = func_ov003_021464ac();
    m = func_0203be48(data_0213df20, buf.w, v, 0);
    func_020059cc(buf.w);
    func_02056bc0(a + 0x14, m);
    p0 = data_020afea8[0];
    p1 = data_020afea8[1];
    *(uint32_t *)(a + 0x84) = p1;
    *(uint32_t *)(a + 0x80) = p0;
    if (t->f4 != 0) {
        if (t->fc != 0) {
            func_02052d3c(t->f4, t->f8);
        }
        func_02052c04(t->f4);
    }
    func_02053290(t);
    data_0213df20 = old;
}
