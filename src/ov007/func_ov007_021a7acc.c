#include "ffc/types.h"

typedef struct {
    uint32_t w0;
    uint32_t w4;
    uint32_t w8;
    uint8_t flag;
} Tmp;

extern uint32_t data_020b8e44;

extern void func_02016b68(Tmp *out, uint32_t h);
extern uint8_t *func_02052d90(uint32_t mar, uint32_t index);
extern uint32_t func_02015938(uint32_t h);
extern uint32_t func_0206c184(uint32_t first, uint32_t second);
extern void func_02052d3c(uint32_t a, uint32_t b);
extern void func_02052c04(uint32_t a);
extern void func_02053290(void *object);
extern uint8_t *func_020197b4(uint32_t h, uint32_t idx);
extern uint32_t func_02019e04(uint32_t h, uint32_t x);
extern void func_02084b2c(void *p, int c, uint32_t n);
extern void func_02036de4(void *o, uint32_t v);
extern void func_02036df8(void *o, uint8_t v);
extern uint32_t func_020198e8(uint32_t h, uint32_t x);
extern void func_02036e40(void *o, uint32_t v);

void func_ov007_021a7acc(int unused, void *obj)
{
    Tmp a;
    Tmp b;
    Tmp *pb;
    Tmp *pa;
    uint8_t *m;
    uint8_t *m2;
    uint32_t idx;
    uint8_t *g;
    uint32_t r7;
    uint32_t v;

    func_02016b68(&a, data_020b8e44);
    pb = &b;
    func_02016b68(pb, data_020b8e44);

    m = func_02052d90(b.w4, b.w8);
    idx = func_02015938(data_020b8e44);
    idx = func_0206c184(idx, *(uint32_t *)(m + 8));

    m2 = func_02052d90(a.w4, a.w8);
    idx = *(uint16_t *)(m2 + *(uint32_t *)(m2 + 0xc) + (idx << 1));

    if (b.w4 != 0) {
        if (pb->flag != 0) {
            func_02052d3c(pb->w4, pb->w8);
        }
        func_02052c04(pb->w4);
    }
    func_02053290(pb);

    pa = &a;
    if (a.w4 != 0) {
        if (pa->flag != 0) {
            func_02052d3c(pa->w4, pa->w8);
        }
        func_02052c04(pa->w4);
    }
    func_02053290(pa);

    g = func_020197b4(data_020b8e44, idx);
    r7 = func_02019e04(data_020b8e44, (uint32_t)g);

    func_02084b2c(obj, 0, 0x18);
    func_02036de4(obj, idx);
    func_02036df8(obj, g[9]);
    v = func_020198e8(data_020b8e44, r7);
    func_02036e40(obj, v);
}
