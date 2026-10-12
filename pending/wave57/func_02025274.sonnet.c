#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Ent;

typedef struct {
    uint32_t type;
    uint32_t count;
    Ent e[];
} Obj;

extern uint64_t func_0209a978(uint32_t a, uint32_t b);
extern uint32_t func_0209b338(uint32_t a, uint32_t b);
extern uint32_t func_0209a4cc(uint32_t a);
extern uint32_t func_0209b5bc(uint32_t a, uint32_t b);
extern uint32_t func_0209af28(uint32_t a, uint32_t b);
extern uint32_t func_0209b108(uint32_t a, uint32_t b);

uint32_t func_02025274(Obj *o, uint32_t a, uint32_t n) {
    uint64_t res;
    uint32_t ret, count, type, mode, t, f, x, i0, i1, v4, v0, r6, r5;
    ret = 0;
    if (o == 0) {
        return ret;
    }
    count = o->count;
    if (count == 1) {
        return o->e[0].b;
    }
    type = o->type;
    switch (type) {
    default:
        return ret;
    case 0:
        if (a > count - 1) {
            a = count - 1;
        }
        return o->e[a].b;
    case 1:
    case 2:
        break;
    }
    mode = (type == 1) ? 2 : 4;
    res = func_0209a978(n - 1, mode);
    t = (uint32_t)(res >> 32);
    if (t != 0 && a >= n - t) {
        x = (uint32_t)func_0209a978(a, mode);
        i0 = x + (t - (n - a));
        i1 = i0 + 1;
        if (i1 > count - 1) {
            i1 = count - 1;
        }
        return o->e[i1].b;
    }
    res = func_0209a978(a, mode);
    f = (uint32_t)(res >> 32);
    if (f == 0) {
        x = (uint32_t)func_0209a978(a, mode);
        if (x > count - 1) {
            x = count - 1;
        }
        return o->e[x].b;
    }
    x = (uint32_t)func_0209a978(a, mode);
    i0 = x;
    {
        uint32_t m = count - 1;
        if (i0 > m) {
            i0 = m;
        }
        i1 = i0 + 1;
        if (i1 > m) {
            i1 = m;
        }
    }
    v4 = o->e[i0].b;
    v0 = o->e[i1].b;
    r6 = func_0209b338(v0, v4);
    r5 = func_0209b5bc(0xfe000000, func_0209a4cc(mode));
    r5 = func_0209af28(r5, func_0209a4cc(f));
    r6 = func_0209af28(r6, r5);
    return func_0209b108(v4, r6);
}
