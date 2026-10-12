#include "ffc/types.h"

extern void func_020692a4(void *object);
extern int func_0201bd84(void *a, int b);
extern void *data_020b93b8;

void func_ov011_021c3060(void *param_1)
{
    uint8_t *self = (uint8_t *)param_1;
    uint8_t i;

    for (i = 0; i < 10; i++) {
        func_020692a4(((void **)(self + 0xec))[i]);
    }
    for (i = 0; i < 5; i++) {
        func_020692a4(((void **)(self + 0x13c))[i]);
    }
    for (i = 0; i < 2; i++) {
        func_020692a4(((void **)(self + 0x150))[i]);
    }
    if (func_0201bd84(data_020b93b8, 0x27) != 0) {
        func_020692a4(((void **)(self + 0x158))[0]);
        func_020692a4(((void **)(self + 0x158))[1]);
    }
    func_020692a4(((void **)(self + 0x160))[0]);
    if (self[0x27e] != 0) {
        func_020692a4(((void **)(self + 0x294))[0]);
        func_020692a4(((void **)(self + 0x298))[0]);
    }
}
