#include "ffc/types.h"

extern void func_0207132c(void *p);
extern void func_02071360(void *p);

typedef void (*VFn)(void *);

void *func_02070e1c(void *self) {
    uint8_t *p = (uint8_t *)self;
    void *obj = *(void **)p;
    if (obj != 0) {
        void **vt = *(void ***)obj;
        ((VFn)vt[1])(obj);
    }
    func_0207132c(p + 0x20);
    func_02071360(p + 0x14);
    return self;
}
