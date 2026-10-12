#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

typedef struct {
    uint32_t x;
    uint32_t y;
    uint32_t z;
} Args;

extern void func_ov005_021971e4(void *obj);
extern void *func_0203b77c(void *a, uint32_t b, uint32_t c);
extern uint32_t func_0203b9cc(Pair p, uint32_t c, uint32_t d);
extern void *func_0203b878(uint32_t a, void *obj);
extern void func_02056bc0(void *object, void *node);
extern void func_02068d58(void *obj, uint32_t a, uint32_t b);
extern uint8_t data_ov009_021af8e8[];
extern uint8_t data_ov009_021afa98[];

void *func_ov009_021997ac(void *a0, Args s)
{
    uint8_t *self = (uint8_t *)a0;
    void *r6;
    void *res;
    void *obj;
    void **vt;
    uint32_t v;
    Pair p1;
    Pair p2;

    func_ov005_021971e4(a0);
    *(void **)self = (void *)data_ov009_021af8e8;
    *(uint32_t *)(self + 0x84) = 0;

    r6 = func_0203b77c(data_ov009_021afa98, 0, 0);

    p1.b = 0x10;
    vt = *(void ***)r6;
    p1.a = 0x40;
    res = (void *)((uint32_t (*)(void *))vt[8])(r6);
    v = func_0203b9cc(p1, (uint32_t)res, 1);
    res = func_0203b878(v, r6);
    *(void **)(self + 0x80) = res;
    func_02056bc0(self + 0x48, res);

    obj = *(void **)(self + 0x80);
    func_02068d58(obj, s.x + 8, s.y);
    vt = *(void ***)obj;
    ((void (*)(void *, uint32_t))vt[8])(obj, 2);
    obj = *(void **)(self + 0x80);
    vt = *(void ***)obj;
    ((void (*)(void *))vt[11])(obj);

    p2.b = 0x10;
    vt = *(void ***)r6;
    p2.a = 0x40;
    res = (void *)((uint32_t (*)(void *))vt[8])(r6);
    v = func_0203b9cc(p2, (uint32_t)res, 1);
    res = func_0203b878(v, r6);
    *(void **)(self + 0x84) = res;
    func_02056bc0(self + 0x48, res);

    obj = *(void **)(self + 0x84);
    func_02068d58(obj, s.x - 4, s.y - 8);
    vt = *(void ***)obj;
    ((void (*)(void *, uint32_t))vt[8])(obj, 2);
    obj = *(void **)(self + 0x84);
    vt = *(void ***)obj;
    ((void (*)(void *))vt[11])(obj);

    return a0;
}
