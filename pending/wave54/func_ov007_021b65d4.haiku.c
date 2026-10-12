#include "ffc/types.h"

extern void func_02021338(uint32_t x);
extern int func_020692e0(void *p);
extern void func_02069288(void *p);
extern int func_020692e8(void *p);

extern uint64_t func_0209a76c(uint32_t a, uint32_t b);
extern void func_020692a4(void *p);
extern void func_020692f0(void *p);
extern void func_ov007_021b64ec(void *p);
extern void func_ov007_021b61f4(void *p, int a);
typedef struct { int32_t a; int32_t b; } Ent;
extern Ent data_ov007_021c6cd0[];
typedef struct { uint8_t pad[0x1c]; int32_t x; int32_t y; } Gl;
extern Gl data_ov007_021c69d0;

typedef struct { int32_t a; int32_t b; } Pair;
typedef void (*Fn1)(void *);
typedef void (*Fn3)(void *, int, int);
typedef void (*FnP)(void *, Pair);

struct Obj {
    uint8_t pad0[0xc0];
    void *c0;
    void *c4;
    void *arr_c8[10];
    void *arr_f0[10];
    void *p118;
    uint8_t pad1[0x10];
    uint8_t pos;
    uint8_t ring[10];
    uint8_t pad2[6];
    uint8_t val;
};

void func_ov007_021b65d4(struct Obj *obj, uint8_t v)
{
    void *p;
    void *q;
    uint8_t i;
    Pair s;
    Ent *e;
    Gl *g;

    func_02021338(0xbc);
    obj->val = v;
    p = obj->c4;
    if (!func_020692e0(p)) {
        func_02069288(p);
        if (func_020692e8(p)) {
            q = *(void **)((uint8_t *)p + 0x98);
            ((Fn3)(((void **)*(void **)q)[14]))(q, 3, 1);
        } else {
            q = *(void **)((uint8_t *)p + 0x98);
            ((Fn3)(((void **)*(void **)q)[14]))(q, 2, 1);
        }
    }

    obj->ring[obj->pos] = (uint8_t)(func_0209a76c((uint32_t)obj->val + 1, 10) >> 32);
    q = obj->arr_f0[obj->pos];
    ((Fn3)(((void **)*(void **)q)[14]))(q, obj->ring[obj->pos] + 1, 0);
    q = obj->arr_f0[obj->pos];
    ((Fn1)(((void **)*(void **)q)[10]))(q);
    obj->pos++;

    if (obj->pos >= 10) {
        q = obj->p118;
        ((Fn1)(((void **)*(void **)q)[11]))(q);
        for (i = 0; i < 10; i++) {
            func_020692a4(obj->arr_c8[i]);
        }
        p = obj->c0;
        if (!func_020692e0(p)) {
            func_02069288(p);
            if (func_020692e8(p)) {
                q = *(void **)((uint8_t *)p + 0x98);
                ((Fn3)(((void **)*(void **)q)[14]))(q, 3, 1);
            } else {
                q = *(void **)((uint8_t *)p + 0x98);
                ((Fn3)(((void **)*(void **)q)[14]))(q, 2, 1);
            }
        }
        func_020692f0(obj->c0);
    } else {
        e = &data_ov007_021c6cd0[obj->pos];
        g = &data_ov007_021c69d0;
        s.a = e->a + g->x;
        s.b = e->b + g->y;
        q = obj->p118;
        ((FnP)(((void **)*(void **)q)[3]))(q, s);
    }

    func_ov007_021b64ec(obj);
    func_ov007_021b61f4(obj, 1);
}
