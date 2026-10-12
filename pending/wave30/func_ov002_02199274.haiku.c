#include "ffc/types.h"

extern void func_02021b48(void *p);
extern int func_02022324(void *p);
extern void func_0202231c(void *p, int v);

void func_ov002_02199274(void *self) {
    uint8_t *s = (uint8_t *)self;
    void *obj = *(void **)(s + 0xcc);
    if (obj == 0) {
        return;
    }
    func_02021b48(obj);
    if (func_02022324(*(void **)(s + 0xcc)) != 0) {
        return;
    }
    func_0202231c(*(void **)(s + 0xcc), 1);
    obj = *(void **)(s + 0xcc);
    if ((int8_t)*(uint32_t *)((uint8_t *)obj + 0xc) == 0) {
        void (*fn)(void *) = *(void (**)(void *))((uint8_t *)*(void **)obj + 8);
        fn(obj);
    }
    func_0202231c(*(void **)(s + 0xcc), 0);
}
