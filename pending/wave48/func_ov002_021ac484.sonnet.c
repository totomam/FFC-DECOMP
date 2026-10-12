/* cflags: -lang c++ */
#include "ffc/types.h"

typedef struct { int32_t u, a, b; } S;
typedef struct {
    uint32_t x0;
    void *p;
    uint32_t idx;
    uint8_t flag;
} Ref;

extern "C" {
extern uint32_t data_020b8e44;
extern int16_t data_020a1bd0[];
extern void func_02015e8c(void *ref, uint32_t ctx);
extern void *func_02052d90(void *mar, uint32_t index);
extern void func_02052d3c(void *p, uint32_t idx);
extern void func_02052c04(void *p);
extern void func_02053290(void *obj);
extern int32_t func_02081210(int32_t a, int32_t b);
extern int32_t func_020817c8(int32_t a, int32_t b);
}
inline const int32_t &mn(const int32_t &a, const int32_t &b){ return (b<a)?b:a; }
inline const int32_t &mx(const int32_t &a, const int32_t &b){ return (a<b)?b:a; }

extern "C" void func_ov002_021ac484(int32_t *out, S s)
{
    Ref g;
    Ref h;
    Ref k;
    int32_t r7, r4, r6, t, v, x, y, z, w, tab, res;
    uint32_t idx;

    func_02015e8c(&g, data_020b8e44);
    r7 = *(int32_t *)((uint8_t *)func_02052d90(g.p, g.idx) + 0x28);
    if (g.p != 0) {
        if (g.flag != 0) {
            func_02052d3c(g.p, g.idx);
        }
        func_02052c04(g.p);
    }
    func_02053290(&g);

    func_02015e8c(&h, data_020b8e44);
    r4 = *(int32_t *)((uint8_t *)func_02052d90(h.p, h.idx) + 0x24);
    if (h.p != 0) {
        if (h.flag != 0) {
            func_02052d3c(h.p, h.idx);
        }
        func_02052c04(h.p);
    }
    func_02053290(&h);

    func_02015e8c(&k, data_020b8e44);
    r6 = *(int32_t *)((uint8_t *)func_02052d90(k.p, k.idx) + 0x2c);
    if (k.p != 0) {
        if (k.flag != 0) {
            func_02052d3c(k.p, k.idx);
        }
        func_02052c04(k.p);
    }
    func_02053290(&k);

    t = func_02081210(s.a - s.b, r7);
    v = mx(mn(t, 0x1000), -0x1000);

    x = func_020817c8(0x800, 0x3244);
    y = func_020817c8(x, v);
    z = func_020817c8(y, 0x10000000);
    w = func_02081210(z, 0x6488);

    idx = (((uint32_t)w << 4) >> 16) >> 4;
    tab = data_020a1bd0[idx * 2];

    if (s.a < s.b) {
        res = func_020817c8(r4 - r6, tab);
    } else {
        res = func_020817c8(0x1000 - r4, tab);
    }
    *out = res + r4;
    if (*out > 0x1000) {
        *out = 0x1000;
    }
}
