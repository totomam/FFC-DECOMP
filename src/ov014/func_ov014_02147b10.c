#include "ffc/types.h"

typedef struct {
    void *vt;
    void *p4;
    int32_t f8;
    uint32_t fc;
    int32_t f10;
    uint32_t f14;
    void *f18;
} Obj;

extern int data_ov014_02155a80;
extern int data_ov014_02155a88;
extern void *func_0203b7c0(void *a, int b);
extern int func_0205db5c(void);
extern int func_0205db6c(void *p);
extern uint32_t func_0205db1c(const void *object);
extern int func_0205dbe8(void *p);
extern int func_0205dbf0(void *p);
extern void *func_02056830(int x);
extern void *func_020903cc(void *o, int a, int b);
extern void func_020878ac(void *a, int b);
extern Obj *func_ov014_02147bf8(Obj *o);

Obj *func_ov014_02147b10(Obj *obj)
{
    int v;
    obj->vt = &data_ov014_02155a80;
    obj->p4 = func_0203b7c0(&data_ov014_02155a88, 0);
    v = func_0205db5c();
    obj->f8 = (v * func_0205db6c(obj->p4)) / 2;
    obj->fc = func_0205db1c(obj->p4) << 5;
    v = func_0205dbe8(obj->p4);
    obj->f10 = (func_0205dbf0(obj->p4) * v) << 1;
    obj->f18 = func_02056830(obj->f8);
    func_020903cc(obj->f18, 0, obj->f8);
    func_020878ac(obj->f18, obj->f8);
    func_ov014_02147bf8(obj);
    return obj;
}
