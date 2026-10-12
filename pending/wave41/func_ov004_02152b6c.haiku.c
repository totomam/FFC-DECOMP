#include "ffc/types.h"

extern void func_020095b8(void *buf, uint32_t a, uint32_t b, uint32_t c);
extern void func_020634e0(void *tmp, void *buf, uint32_t z);
extern void *func_0203b8d4(void *tmp, uint32_t a, uint32_t b, uint32_t c);
extern void func_02063530(void *tmp);
extern void *func_020059cc(void *object);

typedef struct { uint32_t a, b; } Pair;

typedef struct Obj {
    void **vt;
} Obj;

void func_ov004_02152b6c(void *p0, uint32_t p1, uint32_t p2, uint32_t p3, Pair s)
{
    uint32_t loc[4];
    Obj *obj;

    func_020095b8(&loc[1], p2, p2, p3);
    func_020634e0(&loc[0], &loc[1], 0);
    obj = (Obj *)func_0203b8d4(&loc[0], p1, 0, 1);
    func_02063530(&loc[0]);
    func_020059cc(&loc[1]);
    ((void (*)(void *, Pair))obj->vt[3])(obj, s);
    ((void (*)(void *, uint32_t, uint32_t))obj->vt[14])(obj, p3, 0);
    ((void (*)(void *, Obj *))obj->vt[7])(p0, obj);
    if (obj) {
        ((void (*)(void *))obj->vt[1])(obj);
    }
}
