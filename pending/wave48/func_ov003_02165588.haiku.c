#include "ffc/types.h"

typedef struct Obj {
    uint8_t pad0[0x14];
    void *p14;
    uint8_t f18;
    uint8_t pad19;
    uint16_t h1a;
    uint16_t h1c;
    uint16_t h1e;
    int32_t i20;
    int32_t i24;
    int32_t i28;
    int32_t i2c;
    int32_t i30;
} Obj;

typedef struct Vec3 {
    int32_t x;
    int32_t y;
    int32_t z;
} Vec3;

extern void *func_020424e0(void *p);
extern uint8_t *func_ov003_02146494(void *p);
extern void func_ov003_0215e54c(void *p, uint16_t a);
extern int32_t func_ov003_021654f8(Obj *s, uint16_t idx, Vec3 *out);
extern int64_t func_0209a71c(int64_t first, int64_t second);
extern void func_ov003_0215e200(void *p, int32_t x, int32_t y, int32_t z);
extern void func_ov003_0215f0d4(void *p);
extern void func_ov003_0215e358(void *p, int32_t x, int32_t y, int32_t z, uint16_t w, int32_t v);

void func_ov003_02165588(Obj *s)
{
    Vec3 a;
    Vec3 b;
    int64_t k;
    int64_t t;
    int32_t ax, ay, az;
    int32_t sx, sy, sz;
    int32_t c0, c1, c2;
    int32_t r4, r6, r7;
    uint8_t *o;

    o = func_ov003_02146494(func_020424e0(s->p14));
    func_ov003_0215e54c(o, s->h1a);

    if (func_ov003_021654f8(s, s->h1a, &a) == 0) {
        return;
    }
    if (func_ov003_021654f8(s, s->h1c, &b) == 0) {
        return;
    }

    if (s->i24 < 0 || s->i24 > 0x1000) {
        if (s->i24 > 0x1000) {
            s->i24 = 0x1000;
        } else {
            s->i24 = 0;
        }
    }

    k = s->i24;
    ax = a.x;
    t = func_0209a71c((int64_t)(b.x - ax), k);
    c0 = (int32_t)((t + 0x800) >> 12);
    sx = ax + c0;
    ay = a.y;
    t = func_0209a71c((int64_t)(b.y - ay), k);
    c1 = (int32_t)((t + 0x800) >> 12);
    sy = ay + c1;
    az = a.z;
    t = func_0209a71c((int64_t)(b.z - az), k);
    c2 = (int32_t)((t + 0x800) >> 12);
    sz = az + c2;

    if (s->f18 != 0) {
        r4 = c0 + s->i28;
        r7 = c1 + s->i2c;
        r6 = c2 + s->i30;
    } else {
        r4 = 0;
        r7 = 0;
        r6 = 0;
    }

    o = func_ov003_02146494(func_020424e0(s->p14));
    func_ov003_0215e200(o, r4, r7, r6);
    o = func_ov003_02146494(func_020424e0(s->p14));
    o[0xdd] = s->f18;
    o = func_ov003_02146494(func_020424e0(s->p14));
    func_ov003_0215f0d4(o);
    o = func_ov003_02146494(func_020424e0(s->p14));
    func_ov003_0215e358(o, sx + s->i28, sy + s->i2c, sz + s->i30, s->h1e, s->i20);
    o = func_ov003_02146494(func_020424e0(s->p14));
    o[0xdc] = 0;
}
