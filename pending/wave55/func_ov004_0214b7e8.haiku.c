#include "ffc/types.h"

typedef struct Obj {
    uint8_t pad0[0xa8];
    uint8_t *a8;
    uint8_t *ac;
    uint32_t pad1;
    uint32_t b4;
    uint32_t b8;
} Obj;

extern void *func_ov004_02149be0(Obj *p);
extern void *func_ov004_02153114(void *x);
extern uint32_t func_ov004_02149c04(Obj *p);
extern int func_ov004_0214e85c(void *o, uint32_t y, uint32_t a, uint32_t b);
extern int func_ov004_0214e844(void *o);
extern int func_ov004_0214b7ac(Obj *p, void *o, uint32_t a, uint32_t b);
extern void func_ov004_0214edcc(uint32_t *out, uint32_t x, uint32_t y, uint32_t a, uint32_t b);
extern void func_ov004_0214f354(void *o, uint32_t y, uint32_t b0, uint32_t b1);
extern void func_ov004_0214ee84(void *o, uint32_t y, uint32_t j, uint32_t i, uint32_t s1, uint32_t d2, uint32_t z0, uint32_t z1);
extern void func_ov004_0214f774(void *o);
extern int func_ov004_0214ea04(void *o, uint32_t y, uint32_t z, uint32_t a, uint32_t b);
extern void func_020213b8(uint32_t code);
extern uint32_t data_ov004_02158cd4[];

typedef struct Vec {
    uint32_t x;
    uint32_t y;
    uint32_t z;
} Vec;

void func_ov004_0214b7e8(Obj *p, Vec vec, uint32_t s0, uint32_t s1)
{
    uint32_t t = s0;
    void *o;
    uint32_t buf[2];
    uint32_t i, j;
    int flag = 0;
    int v;

    o = func_ov004_02153114(func_ov004_02149be0(p));

    if (func_ov004_0214e85c(o, func_ov004_02149c04(p), vec.z, t) == 0 &&
        func_ov004_0214e844(o) == 0 &&
        func_ov004_0214b7ac(p, o, vec.z, t) == 0) {
        uint32_t xa = (uint32_t)func_ov004_02153114(func_ov004_02149be0(p));
        uint32_t y = func_ov004_02149c04(p);
        func_ov004_0214edcc(buf, xa, y, vec.x, vec.y);
        func_ov004_0214f354(o, func_ov004_02149c04(p), buf[0], buf[1]);
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
        if (func_ov004_0214ea04(o, func_ov004_02149c04(p), 0, vec.z, t)) {
            func_020213b8(0x95);
            return;
        }
    }

    v = func_ov004_0214ea04(o, func_ov004_02149c04(p), 0, vec.z, t);
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
