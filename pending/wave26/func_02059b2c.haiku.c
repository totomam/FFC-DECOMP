#include "ffc/types.h"

typedef struct Obj { void **vtbl; } Obj;

extern void func_0208763c(void *p);
extern void func_02087678(void *p);
extern void func_0204f218(void *p, int x);

void func_02059b2c(uint8_t *self, Obj *obj) {
    uint8_t *p = *(uint8_t **)(self + 0x10) + 0x20;
    volatile uint32_t pad[2];
    func_0208763c(p);
    *(uint32_t *)(self + 0x14) = 0;
    func_02087678(p);
    if (obj != 0) {
        Obj *o = obj;
        ((void (*)(Obj *))o->vtbl[1])(o);
    }
    func_0204f218(*(void **)(self + 0xc), 0);
}
