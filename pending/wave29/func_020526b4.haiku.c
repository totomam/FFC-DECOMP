#include "ffc/types.h"

typedef struct Obj {
    int32_t count;
    void *f4;
    void *f8;
} Obj;

extern void func_0202a9ac(void *cursor);
extern void *func_0202a9ec(void *a, void *b);
extern void *func_020059cc(void *object);
extern void func_02056844(void *object);

void func_020526b4(void **out, Obj *obj, void *p) {
    void *x = p;
    if (x == obj->f8) {
        func_0202a9ac(&p);
        obj->f8 = p;
    }
    *out = func_0202a9ec(x, obj->f4);
    func_020059cc((char *)x + 0xc);
    func_02056844(x);
    obj->count--;
}
