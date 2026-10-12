#include "ffc/types.h"

extern char data_020b1a30[];
extern void func_02061344(void *obj);
extern void *func_0200a678(void *object);
extern void func_0206903c(void *obj);
extern void func_02062868(void *obj);
extern void func_02056844(void *obj);

void *func_02068d0c(void *obj) {
    uint8_t *p = (uint8_t *)obj;
    void *x;

    *(void **)p = data_020b1a30;
    x = *(void **)(p + 0x1c);
    if (x != 0) {
        void **vt = *(void ***)x;
        ((void (*)(void *))vt[1])(x);
    }
    func_02061344(*(void **)(p + 0x20));
    func_0200a678(p + 0x40);
    func_0206903c(p + 0x34);
    func_0206903c(p + 0x28);
    func_02062868(p);
    func_02056844(p);
    return p;
}
