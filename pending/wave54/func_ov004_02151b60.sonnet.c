#include "ffc/types.h"

extern uint8_t data_ov004_02159448[];
extern uint32_t func_0203b95c(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern uint32_t func_0206c184(uint32_t a, uint32_t b);
extern void func_0206c1a0(uint32_t *out, uint32_t obj, uint32_t a2, uint32_t a3, uint32_t a4);
extern int32_t func_020817c8(int32_t a, int32_t b);
extern void func_02064490(uint32_t obj, int32_t v);
extern uint16_t func_020816d4(int32_t a, int32_t b);
extern void func_ov004_02151ef8(uint8_t *list, void *e, uint8_t z);
extern void func_02056b88(uint32_t a, uint32_t b);
extern void func_02056bf4(uint32_t a, uint32_t b);
extern void func_ov004_02151ec8(uint8_t *list, uint32_t base, uint8_t z);

typedef struct {
    uint32_t obj;
    int32_t dist;
    uint16_t angle;
    uint16_t pad;
    uint32_t flag;
} Entry;

typedef struct { int32_t x, y; } P2;
typedef struct { int32_t x, y; } V;

#define F32(p, off) (*(uint32_t *)((uint8_t *)(p) + (off)))

void func_ov004_02151b60(uint8_t *p, P2 s)
{
    uint32_t *A = (uint32_t *)F32(p, 0x134);
    int32_t g34 = (int32_t)F32(data_ov004_02159448, 0x34);
    int32_t g38 = (int32_t)F32(data_ov004_02159448, 0x38);
    V d, e2, pos;
    int32_t Dx, Dy;
    e2.x = A[0]; e2.y = A[1];
    d.x = s.x; d.y = s.y;
    d.x -= g34; d.y -= g38;
    e2.x -= g34; e2.y -= g38;
    pos.x = d.x * 8 + ((d.y & 1) << 3) / 2 + 4;
    pos.y = d.y * 8 + 4;
    Dx = pos.x - (e2.x * 8 + ((e2.y & 1) << 3) / 2 + 4);
    Dy = pos.y - (e2.y * 8 + 4);
    uint32_t k = 1;
    uint32_t C = func_0203b95c(F32(data_ov004_02159448, 0x28), F32(p, 0x13c), 0, 1);
    uint32_t E = func_0206c184(F32(p, 0xe4), 3);
    uint32_t *vt;
    uint32_t out;
    uint32_t u2, u3;
    uint32_t big;
    int32_t t, u;
    uint16_t ang;
    int32_t dist;
    Entry e;
    uint32_t cnt;
    uint8_t z;

    vt = (uint32_t *)*(uint32_t *)C;
    ((void (*)(uint32_t, uint32_t, uint32_t))vt[0x38 / 4])(C, E + 1, 0);
    vt = (uint32_t *)*(uint32_t *)C;
    ((void (*)(uint32_t, V *))vt[0xc / 4])(C, &pos);

    big = k << 20;
    func_0206c1a0(&out, F32(p, 0xe4), u2, u3, big);
    k <<= 12;
    t = func_020817c8((int32_t)out, (int32_t)k);
    u = func_020817c8(t + (int32_t)k, (int32_t)big);
    func_02064490(C, u >> 12);
    vt = (uint32_t *)*(uint32_t *)C;
    ((void (*)(uint32_t))vt[0x28 / 4])(C);

    *(volatile uint16_t *)0x40002b0 = 0;
    *(volatile uint32_t *)0x40002b8 = Dx * Dx + Dy * Dy;
    while (*(volatile uint16_t *)0x40002b0 & 0x8000) {
    }
    dist = (int32_t)(*(volatile uint32_t *)0x40002b4) << 12;
    ang = func_020816d4(Dy << 12, Dx << 12);

    e.obj = C;
    e.dist = dist;
    e.angle = ang;
    e.flag = 0;

    cnt = F32(p, 0x148);
    if (cnt < F32(p, 0x14c)) {
        F32(p, 0x148) = cnt + 1;
        ((Entry *)F32(p, 0x144))[cnt] = e;
    } else {
        z = 0;
        func_ov004_02151ef8(p + 0x144, &e, z);
    }

    func_02056b88(F32(p, 0x140), C);
    if (F32(p, 0x148) > 0x1c) {
        uint32_t first;
        func_02056bf4(F32(p, 0x140), *(uint32_t *)F32(p, 0x144));
        first = *(uint32_t *)F32(p, 0x144);
        if (first != 0) {
            vt = (uint32_t *)*(uint32_t *)first;
            ((void (*)(uint32_t))vt[1])(first);
        }
        z = 0;
        func_ov004_02151ec8(p + 0x144, F32(p, 0x144), z);
    }
}
