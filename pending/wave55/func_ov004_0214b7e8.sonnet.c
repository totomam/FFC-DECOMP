#include "ffc/types.h"

typedef struct Obj {
    uint8_t pad0[0xa8];
    uint8_t *a8;
    uint8_t *ac;
    uint32_t pad1;
    uint32_t b4;
    uint32_t b8;
} Obj;

typedef struct Vec3 { uint32_t x,y,z; } Vec3;
typedef struct Vec {
    uint32_t x;
    uint32_t y;
} Vec;
extern void *func_ov004_02149be0(Obj *p);
extern void *func_ov004_02153114(void *x);
extern uint32_t func_ov004_02149c04(Obj *p);
extern int func_ov004_0214e85c(void *o, uint32_t y, uint32_t a, uint32_t b);
extern int func_ov004_0214e844(void *o);
extern int func_ov004_0214b7ac(Obj *p, void *o, uint32_t a, uint32_t b);


extern void func_ov004_0214ee84(void *o, uint32_t y, uint32_t j, uint32_t i, uint32_t s1, uint32_t d2, uint32_t z0, uint32_t z1);
extern void func_ov004_0214f774(void *o);
extern int func_ov004_0214ea04(void *o, uint32_t y, uint32_t z, uint32_t a, uint32_t b);
extern void func_020213b8(uint32_t code);
extern uint32_t data_ov004_02158cd4[];



extern Vec func_ov004_0214edcc(uint32_t x, uint32_t y, Vec v);
extern void func_ov004_0214f354(void *o, uint32_t y, Vec v);

void func_ov004_0214b7e8(Obj *p, Vec3 vec, uint32_t s0, uint32_t s1)
{
    void *o;
    Vec buf;
    uint32_t i, j;
    uint32_t *pz = &vec.z;
    int flag = 0;
    int v;

    o = func_ov004_02153114(func_ov004_02149be0(p));

    if (func_ov004_0214e85c(o, func_ov004_02149c04(p), *pz, s0) == 0 &&
        func_ov004_0214e844(o) == 0 &&
        func_ov004_0214b7ac(p, o, *pz, s0) == 0) {
        uint32_t xa = (uint32_t)func_ov004_02153114(func_ov004_02149be0(p));
        uint32_t y = func_ov004_02149c04(p);
        {Vec w; w.x=vec.x; w.y=vec.y; buf = func_ov004_0214edcc(xa, y, w);}
        func_ov004_0214f354(o, func_ov004_02149c04(p), buf);
    }

    for (i = 0; i < p->b8; i++) {
        for (j = 0; j < p->b4; j++) {
            uint32_t off = i * p->b4;
            if (p->a8[off + j] != 0 && p->ac[off + j] == 0 &&
                func_ov004_0214b7ac(p, o, j, i) == 0) {
                func_ov004_0214ee84(o, func_ov004_02149c04(p), j, i, s1,
                                    data_ov004_02158cd4[2], 0, 0);
                flag = 1;
            }
        }
    }

    if (flag) {
        func_ov004_0214f774(o);
    }

    if (func_ov004_0214e844(o)) {
        if (func_ov004_0214ea04(o, func_ov004_02149c04(p), 0, *pz, s0)) {
            func_020213b8(0x95);
            return;
        }
    }

    v = func_ov004_0214ea04(o, func_ov004_02149c04(p), 0, *pz, s0);
    if (v <= 0) {
        v = -v;
    }
    switch ((short)v) {
    case 1:
        func_020213b8(0x9a);
        break;
    case 2:
    case 3:
        func_020213b8(0x99);
        break;
    case 4:
        func_020213b8(0x98);
        break;
    case 5:
        func_020213b8(0x97);
        break;
    case 6:
        func_020213b8(0x96);
        break;
    default:
        break;
    }
}
