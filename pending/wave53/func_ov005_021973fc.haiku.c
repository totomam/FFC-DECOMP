#include "ffc/types.h"

extern void func_02056c9c(void *object, uint32_t value);
extern void *func_0203b81c(uint32_t value);
extern void *func_0203b6f0(void);
extern void func_02056bc0(void *object, void *node);
extern void *func_0203b95c(void *a, void *b, uint32_t c, uint32_t d);
extern uint32_t func_02064aa8(const void *object);
extern void func_0205f2f0(void *object, uint32_t value);
extern char data_ov005_021990c8[];
extern char data_ov005_02199040[];

typedef struct Pair {
    uint32_t a;
    uint32_t b;
} Pair;

typedef struct Obj {
    void *vtbl;
    uint8_t pad04[0x7c];
    void *f80;
    void *comp[3];
    void *f90;
    Pair ent[3];
} Obj;

void *func_ov005_021973fc(void *object, void *param)
{
    Obj *obj = (Obj *)object;
    Pair *p = (Pair *)param;
    int i;
    int j;
    void *t;
    void *c;
    void **vt;

    func_02056c9c(obj, 0);
    obj->vtbl = data_ov005_021990c8;
    for (i = 0; i < 3; i++) {
        obj->ent[i].a = p[i].a;
        obj->ent[i].b = p[i].b;
    }
    obj->f80 = func_0203b81c(10);
    obj->f90 = func_0203b6f0();
    func_02056bc0((uint8_t *)obj + 0x48, obj->f90);
    for (j = 0; j < 3; j++) {
        obj->comp[j] = func_0203b95c(*(void **)(data_ov005_02199040 + 0x18), obj->f80, 0, 1);
        c = obj->comp[j];
        vt = *(void ***)c;
        ((void (*)(void *, uint32_t, uint32_t))vt[3])(c, obj->ent[j].a, obj->ent[j].b);
        c = obj->comp[j];
        vt = *(void ***)c;
        ((void (*)(void *, uint32_t))vt[8])(c, 1);
        c = obj->comp[j];
        vt = *(void ***)c;
        ((void (*)(void *))vt[10])(c);
        func_0205f2f0((void *)func_02064aa8(obj->comp[j]), 1);
        func_02056bc0(obj->f90, obj->comp[j]);
        c = obj->comp[j];
        vt = *(void ***)c;
        ((void (*)(void *, uint32_t, uint32_t))vt[14])(c, 1, 0);
    }
    func_02056bc0((uint8_t *)obj + 0x48, obj->f80);
    return object;
}
