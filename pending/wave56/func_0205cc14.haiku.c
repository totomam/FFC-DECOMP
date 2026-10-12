#include "ffc/types.h"

typedef struct {
    int32_t x, y, z, w;
} V4;

typedef struct {
    int32_t pad0[5];
    int32_t f14;
    int32_t f18;
    int32_t f1c;
    int32_t f20;
    uint16_t f24;
    uint16_t pad24;
    int32_t f28;
    int32_t f2c;
    int32_t f30;
    int32_t f34;
} Obj;

extern void func_02059be4(Obj *p);
extern void func_0207fe88(V4 *out, int16_t a, int16_t b);
extern uint32_t func_02081210(uint32_t a, int32_t b);
extern void func_0207fe94(V4 *out, V4 *in, uint32_t c, uint32_t d);
extern int32_t *func_0204f098(int32_t a, int32_t b, int32_t c, int32_t d, int32_t e);
extern uint16_t data_0213e130;
extern int16_t data_020a1bd0[];

void func_0205cc14(Obj *p)
{
    V4 v;
    int32_t *out;
    int32_t p14, p18, p1c, p20, p30, p34;
    int32_t und1, und2;
    uint32_t idx;
    uint32_t r4, r2;
    int32_t dx, dy;

    func_02059be4(p);
    data_0213e130 += 0x10;
    idx = p->f24 >> 4;
    func_0207fe88(&v, data_020a1bd0[idx * 2], data_020a1bd0[idx * 2 + 1]);
    r4 = func_02081210(1 << 12, p->f2c);
    r2 = func_02081210(1 << 12, p->f28);
    func_0207fe94(&v, &v, r2, r4);

    p14 = p->f14;
    p18 = p->f18;
    p1c = p->f1c;
    p20 = p->f20;
    p30 = p->f30;
    p34 = p->f34;
    out = func_0204f098(p14, p18, und1, und2, p20);

    out[0] = ((v.x >> 4) & 0xffff) | (((v.y >> 4) & 0xffff) << 16);
    out[1] = ((v.z >> 4) & 0xffff) | (((v.w >> 4) & 0xffff) << 16);

    dx = p1c - p30;
    dy = p20 - p34;
    out[2] = ((p30 << 12) + (v.x * dx + v.y * dy) + 0x800) >> 4;
    out[3] = ((p34 << 12) + (v.z * dx + v.w * dy) + 0x800) >> 4;
}
