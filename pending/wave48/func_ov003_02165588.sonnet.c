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

typedef struct OP { int32_t off; int32_t pos; } OP;
void func_ov003_02165588(Obj *s)
{
    Vec3 a;
    Vec3 b;
    int32_t ox, px, oy, py, oz, pz;
    int64_t k;
    int32_t ax, ay, az;
    int32_t c0, c1, c2;
    int32_t r4, r6, r7;
    int32_t x;
    uint8_t *o;

    o = func_ov003_02146494(func_020424e0(s->p14));
    func_ov003_0215e54c(o, s->h1a);

    if (func_ov003_021654f8(s, s->h1a, &a) == 0) return;
    if (func_ov003_021654f8(s, s->h1c, &b) == 0) return;

    x = s->i24;
    if (x < 0 || x > 0x1000) {
        if (x > 0x1000) x = 0x1000;
        else if (x < 0) x = 0;
        s->i24 = x;
    }

    k = s->i24;
    ax = a.x;
    c0 = (int32_t)((func_0209a71c((int64_t)(b.x - ax), k) + 0x800) >> 12);
    ay = a.y;
    c1 = (int32_t)((func_0209a71c((int64_t)(b.y - ay), k) + 0x800) >> 12);
    az = a.z;
    c2 = (int32_t)((func_0209a71c((int64_t)(b.z - az), k) + 0x800) >> 12);
    ox = s->i28; px = ax + c0;
    oy = s->i2c; py = ay + c1;
    oz = s->i30; pz = az + c2;

    if (s->f18 != 0) {
        r4 = c0 + ox;
        r7 = c1 + oy;
        r6 = c2 + oz;
    } else {
        r4 = 0; r7 = 0; r6 = 0;
    }

    o = func_ov003_02146494(func_020424e0(s->p14));
    func_ov003_0215e200(o, r4, r7, r6);
    o = func_ov003_02146494(func_020424e0(s->p14));
    o[0xdd] = s->f18;
    o = func_ov003_02146494(func_020424e0(s->p14));
    func_ov003_0215f0d4(o);
    o = func_ov003_02146494(func_020424e0(s->p14));
    func_ov003_0215e358(o, ox + px, oy + py, oz + pz, s->h1e, s->i20);
    o = func_ov003_02146494(func_020424e0(s->p14));
    o[0xdc] = 0;
}
