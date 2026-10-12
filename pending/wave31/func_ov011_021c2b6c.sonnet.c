#include "ffc/types.h"
extern void func_ov009_0219a014(uint32_t x);
extern void func_ov009_021a4d98(void *p);
extern void func_ov011_021c1358(void *p);
extern void func_ov011_021c144c(void *p);
extern void func_02069600(void *p);
typedef struct Vt { void *f0; void (*f1)(void *self); } Vt;
typedef struct Obj { const Vt *vt; } Obj;
typedef struct S { uint8_t pad[0x170]; uint32_t h; uint8_t pad2[0x29c-0x174]; Obj *o; } S;
void func_ov011_021c2b6c(S *a)
{
    func_ov009_0219a014(a->h);
    func_ov009_021a4d98(a);
    func_ov011_021c1358(a);
    func_ov011_021c144c(a);
    if (a->o != 0) {
        Obj *o;
        func_02069600(a);
        o = a->o;
        if (o != 0) {
            if (o != 0) o->vt->f1(o);
            a->o = 0;
        }
    }
}
