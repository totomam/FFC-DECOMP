#include "ffc/types.h"

typedef struct Pair {
    uint32_t a;
    uint32_t b;
} Pair;

typedef struct Obj {
    uint32_t w0;
    uint32_t w4;
    uint32_t w8;
    uint32_t wc;
    Pair arr[3];
    uint32_t w28;
    uint8_t b2c;
} Obj;

extern void func_0209cf5c(void *p, uint32_t n, uint32_t size, void *ctor, void *dtor);
extern void func_ov002_021c9124(Pair *out);
extern void func_ov002_021c9130(Pair *p);

Obj *func_ov002_021c8f40(Obj *p) {
    int i;
    Pair tmp;

    p->w0 = 0;
    p->w4 = 0;
    p->w8 = 0;
    p->wc = 0;
    func_0209cf5c(p->arr, 3, 8, func_ov002_021c9124, func_ov002_021c9130);
    p->w28 = 0;
    p->b2c = 0;
    for (i = 0; i < 3; i++) {
        func_ov002_021c9124(&tmp);
        p->arr[i].a = tmp.a;
        p->arr[i].b = tmp.b;
        func_ov002_021c9130(&tmp);
    }
    return p;
}
