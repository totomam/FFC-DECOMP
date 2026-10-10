#include "ffc/types.h"

extern uint8_t data_ov007_021c2b34[];
extern void func_020641a4(void *p);
extern void func_02056844(void *p);

void *func_ov007_0219bb40(void *p) {
    uint8_t *self = (uint8_t *)p;
    void *obj;

    *(void **)self = (void *)data_ov007_021c2b34;
    obj = *(void **)(self + 0x80);
    if (obj != 0) {
        if (obj != 0) {
            void (*fn)(void *) = (void (*)(void *))((void **)*(void **)obj)[1];
            fn(obj);
        }
        *(void **)(self + 0x80) = 0;
    }
    func_020641a4(self);
    func_02056844(self);
    return self;
}
