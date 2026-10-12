#include "ffc/types.h"

extern void func_ov005_021971e4(void *obj);
extern char data_ov009_021af938[];
extern char data_ov009_021afac0[];
extern void *func_0203b77c(void *a, uint32_t b, uint32_t c, uint32_t d);
typedef struct { uint32_t a; uint32_t b; } S2;
extern void *func_0203b9cc(S2 s, void *p, int n);
extern void *func_0203b878(void *a, void *b);
extern void func_02056bc0(void *obj, void *node);
extern void func_02068d58(void *o, uint32_t a, uint32_t b);

typedef void *(*VF0)(void *);
typedef void (*VF1)(void *, int);
typedef void (*VF2)(void *);

uint8_t *func_ov009_021999a8(uint8_t *self, S2 v)
{
    void *obj;
    void *ptr;
    void *y;
    void **vt;
    S2 s;

    func_ov005_021971e4(self);
    *(void **)self = data_ov009_021af938;
    obj = func_0203b77c(data_ov009_021afac0, 0, 0, 0);
    s.a = 0x30;
    s.b = 0x10;
    vt = *(void ***)obj;
    ptr = ((VF0)vt[8])(obj);
    y = func_0203b9cc(s, ptr, 1);
    y = func_0203b878(y, obj);
    *(void **)(self + 0x80) = y;
    func_02056bc0(self + 0x48, y);
    func_02068d58(*(void **)(self + 0x80), v.a, v.b);
    ((VF1)((void **)(*(void **)(*(void **)(self + 0x80))))[8])(*(void **)(self + 0x80), 2);
    ((VF2)((void **)(*(void **)(*(void **)(self + 0x80))))[10])(*(void **)(self + 0x80));
    return self;
}
