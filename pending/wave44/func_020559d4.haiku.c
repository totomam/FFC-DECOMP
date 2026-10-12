#include "ffc/types.h"

extern void func_0208763c(void *p);
extern void func_02055980(void *p);
extern void func_02087678(void *p);

typedef void (*VFn)(void *self, uint32_t v);

typedef struct Obj {
    void **vt;
    uint32_t *begin;
    uint32_t count;
} Obj;

struct Guard {
    void *p;
    uint8_t flag;
};

void func_020559d4(Obj *this) {
    volatile struct Guard g;
    uint32_t *it;
    char *q;

    q = (char *)this + 0x1c;
    g.p = q;
    g.flag = 1;
    if (g.flag) {
        func_0208763c(q);
    }
    for (it = this->begin; it != (uint32_t *)((char *)this->begin + (this->count << 2)); it++) {
        ((VFn)this->vt[0])(this, *it);
    }
    func_02055980(this);
    if (g.flag) {
        func_02087678(g.p);
    }
}
