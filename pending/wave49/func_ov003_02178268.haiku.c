#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

typedef struct {
    uint32_t a;
    uint32_t b;
    uint32_t c;
    uint32_t d;
} Four;

typedef struct {
    uint32_t h;
    uint32_t x;
    uint8_t flag;
} Out;

extern char data_ov003_0217bdd0[];
extern void func_02062930(void *obj, Pair pr);
extern void func_020095b8(void *dst, uint32_t v);
extern void func_0205d508(void *dst, void *src, uint32_t z);
extern void func_020059cc(void *obj);
extern uint32_t func_0205db04(const void *o);
extern uint32_t func_0205db2c(const void *o);
extern uint32_t func_020599c0(void *a, uint32_t b, uint32_t c, uint32_t d);
extern uint32_t func_02059484(void *a, uint32_t b, uint32_t c);
extern void func_02059c34(void *dst, const void *src);
extern uint32_t func_0205fbb8(void *o, uint32_t b, uint32_t c);
extern void func_0205fb50(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern uint32_t func_0205db1c(const void *o);
extern uint32_t func_0205da88(const void *o);
extern uint32_t func_020583cc(void *a, uint32_t b, uint32_t c, uint32_t d);
extern void func_0205dad8(Out *out, void *obj);
extern void func_0205fa3c(void *o, Out *desc, uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
extern void func_02052d3c(uint32_t h, uint32_t x);
extern void func_02052c04(uint32_t h);
extern void func_0205a028(void *o, Four f, uint32_t g, uint32_t h, uint32_t i, uint32_t j);
extern uint32_t func_0205daac(const void *o);
extern void func_0205db7c(int32_t *out, const void *desc);
extern void func_02059ecc(void *o, uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f, uint32_t g, uint32_t h, uint32_t i);

uint32_t *func_ov003_02178268(uint32_t *self, uint32_t p1, uint32_t *p2, uint32_t p3)
{
    uint32_t k1 = p1;
    uint32_t k3 = p3;
    uint32_t *k2 = p2;
    uint32_t obj5c[4];
    Out out50;
    Out out44;
    Pair pr;
    Four fo;
    uint32_t out24[4];
    uint32_t *o;
    uint32_t r7, t, v;

    pr.a = 1u << 8;
    pr.b = pr.a << 1;
    func_02062930(self, pr);
    self[0] = (uint32_t)data_ov003_0217bdd0;
    func_020095b8(obj5c, k1);
    func_0205d508((uint8_t *)self + 0x38, obj5c, 0);
    func_020059cc(obj5c);
    self[28] = 0;
    self[29] = 0;
    self[7] = (uint32_t)k2;
    r7 = func_0205db04((uint8_t *)self + 0x38);
    self[9] = func_020599c0((void *)k2[5], r7, func_0205db2c((uint8_t *)self + 0x38) + 1, k3);
    self[8] = func_02059484((void *)k2[5], 2, k3);
    func_02059c34((void *)self[8], (void *)self[9]);
    o = (uint32_t *)self[8];
    o[4] = (o[4] & ~0x80u) | ((func_0205db04((uint8_t *)self + 0x38) & 1u) << 7);
    v = func_0205fbb8((void *)self[9], 1, 1);
    self[11] = v;
    func_0205fb50(v, 0, 0, (uint32_t)-1);

    t = 0;
    if (func_0205db04((uint8_t *)self + 0x38) != 0) {
        t = ((uint32_t *)self[8])[13];
    }

    if (t != 0) {
        self[12] = t;
        self[13] = func_020583cc((void *)self[12], 1, func_0205da88((uint8_t *)self + 0x38), k3);
        self[10] = func_0205fbb8((void *)self[9], func_0205db2c((uint8_t *)self + 0x38), 1);
        func_0205dad8(&out44, (uint8_t *)self + 0x38);
        func_0205fa3c((void *)self[10], &out44, 0, 0, 0, (uint32_t)-1, 0);
        if (out44.h != 0) {
            if (out44.flag != 0) {
                func_02052d3c(out44.h, out44.x);
            }
            func_02052c04(out44.h);
        }
    } else {
        self[12] = ((uint32_t *)k2[5])[13];
        t = func_0205db1c((uint8_t *)self + 0x38);
        self[13] = func_020583cc((void *)self[12], t, func_0205da88((uint8_t *)self + 0x38), k3);
        self[10] = func_0205fbb8((void *)self[9], func_0205db2c((uint8_t *)self + 0x38), 1);
        func_0205dad8(&out50, (uint8_t *)self + 0x38);
        func_0205fa3c((void *)self[10], &out50, 0, 0, 0, (uint32_t)-1, ((uint32_t *)self[13])[6]);
        if (out50.h != 0) {
            if (out50.flag != 0) {
                func_02052d3c(out50.h, out50.x);
            }
            func_02052c04(out50.h);
        }
    }

    fo.a = 0;
    fo.b = 0;
    fo.c = 0x20;
    fo.d = 0x40;
    func_0205a028((void *)self[8], fo, ((uint32_t *)v)[6], ((uint32_t *)self[13])[6], 0, 0);
    r7 = func_0205daac((uint8_t *)self + 0x38);
    func_0205db7c((int32_t *)out24, (uint8_t *)self + 0x38);
    func_02059ecc((void *)self[8], r7, out24[0], out24[1], 0, 0,
                  ((uint32_t *)self[10])[6], ((uint32_t *)self[13])[6], 0, 0);
    return self;
}
