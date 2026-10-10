#include "ffc/types.h"

extern uint8_t data_ov004_02158c14[];
extern void func_02056db0(void *p);
extern void func_02056844(void *p);

void *func_ov004_0214aa98(void *p) {
    uint8_t *self = (uint8_t *)p;
    void *obj;

    *(void **)self = (void *)data_ov004_02158c14;
    obj = *(void **)(self + 0xa0);
    if (obj != 0) {
        if (obj != 0) {
            void (*fn)(void *) = (void (*)(void *))((void **)*(void **)obj)[1];
            fn(obj);
        }
        *(void **)(self + 0xa0) = 0;
    }
    func_02056db0(self);
    func_02056844(self);
    return self;
}
