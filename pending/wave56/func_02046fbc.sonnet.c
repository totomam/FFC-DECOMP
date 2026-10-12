#include "ffc/types.h"

extern void func_02042b18(void *p, int x);
extern void func_02037544(void);
extern void func_0203755c(void);
extern void func_02037574(void);
extern void func_0203758c(void);

typedef struct O O;
typedef struct VT { void *a[8]; } VT;
struct O { VT *vt; int p[2]; int8_t f; };
typedef struct S { VT *vt; uint8_t pad[0x7c]; void *m80; uint32_t m84; int pad2; O *m8c; } S;

void func_02046fbc(S *self)
{
    O *obj;
    func_02042b18(self->m80, 0);
    switch (self->m84) {
    case 2: func_02037544(); break;
    case 3: func_0203755c(); break;
    case 4: func_02037574(); break;
    case 5: func_0203758c(); break;
    }
    obj = ((O *(*)(S *))self->vt->a[4])(self);
    self->m8c = obj;
    if ((int8_t)*(int32_t *)((uint8_t *)obj + 0xc) == 0)
        ((void (*)(O *))obj->vt->a[2])(obj);
    obj = self->m8c;
    if ((int8_t)*(int32_t *)((uint8_t *)obj + 0xc) == 0)
        ((void (*)(O *))obj->vt->a[2])(obj);
}
