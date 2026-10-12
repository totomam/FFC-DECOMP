#include "ffc/types.h"

extern void func_02056858(void *p);
extern void func_02056844(void *p);
extern uint8_t data_020b23a8[];

void *func_02074534(void *self0) {
    uint8_t *self = (uint8_t *)self0;
    int i;

    *(uint8_t **)self = data_020b23a8;
    if (*(void **)(self + 0x40) != 0) {
        func_02056858(*(void **)(self + 0x40));
        *(void **)(self + 0x40) = 0;
    }
    for (i = 0; i < *(int *)(self + 0x38); i++) {
        func_02056858(((void **)*(void **)(self + 0x34))[i]);
        ((void **)*(void **)(self + 0x34))[i] = 0;
    }
    func_02056858(*(void **)(self + 0x34));
    *(void **)(self + 0x34) = 0;
    if (*(void **)(self + 0x2c) != 0) {
        func_02056858(*(void **)(self + 0x2c));
        *(void **)(self + 0x2c) = 0;
    }
    func_02056858(*(void **)(self + 0x28));
    *(void **)(self + 0x28) = 0;
    func_02056844(self);
    return self;
}
