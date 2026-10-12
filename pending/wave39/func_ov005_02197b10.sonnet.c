#include "ffc/types.h"

typedef struct { uint32_t a : 10; uint32_t b : 7; uint32_t c : 1; } S;
typedef struct O { struct { uint32_t p[20]; } *vt; } O;
extern void func_02091b10(void *object, uint32_t first, ...);
extern O *func_0203b95c(void *a, void *b, uint32_t c, uint32_t d);
extern uint8_t data_ov005_02199344[];
extern uint8_t data_ov005_02199378[];

O *func_ov005_02197b10(void *p0, S *p1)
{
    char buf[0x44];
    O *obj;
    int flag;

    switch (p1->c) { case 1: flag = 1; break; default: flag = 0; break; }
    if (flag == 0) func_02091b10(buf, (uint32_t)data_ov005_02199344, p1->a);
    else func_02091b10(buf, (uint32_t)data_ov005_02199378, p1->a);
    obj = func_0203b95c(buf, p0, 2, 1);
    ((void (*)(O *, uint32_t, uint32_t))obj->vt->p[0x38 / 4])(obj, p1->b + 1, 0);
    ((void (*)(O *))obj->vt->p[0x28 / 4])(obj);
    return obj;
}
