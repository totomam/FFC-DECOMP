#include "ffc/types.h"

extern char data_020a7dc0[];
extern int func_0205db04(const void *object);
extern void func_0205847c(void *a, void *b);
extern void func_0205fd04(void *a, void *b);
extern void func_0205d620(void *a);
extern void func_02056844(void *a);

typedef struct Inner {
    uint32_t p0;
    uint32_t p4;
    void *f8;
    void *fc;
    void *f10;
} Inner;

typedef struct Mid {
    uint32_t pad[6];
    Inner *f18;
} Mid;

typedef struct Obj {
    void *vt;
    Mid * volatile f4;
    void *f8;
    void *fc;
    void *f10;
} Obj;

void *func_02005208(void *param) {
    Obj *p = (Obj *)param;
    void *v;
    void *q;

    p->vt = data_020a7dc0;
    if (p->f10 && p->f8) {
        v = 0;
        if (func_0205db04(p->f8)) {
            v = p->f4->f18->f10;
        }
        if (v == 0) {
            v = p->f4->f18->fc;
        }
        func_0205847c(v, p->f10);
    }
    if (p->fc) {
        func_0205fd04(p->f4->f18->f8, p->fc);
    }
    q = p->f8;
    if (q) {
        func_0205d620(q);
        func_02056844(q);
        p->f8 = 0;
    }
    func_02056844(p);
    return p;
}
