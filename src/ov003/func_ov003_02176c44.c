#include "ffc/types.h"

extern uint32_t data_ov003_0217baa0;
extern void func_02060bf4(void *obj);
extern void func_02060e88(void *obj, int flags);
extern void func_02060ea4(void *obj, int flags);
extern void func_02056db0(void *obj);

void *func_ov003_02176c44(void *p)
{
    uint8_t *self = (uint8_t *)p;

    *(uint32_t **)self = &data_ov003_0217baa0;

    if (*(int32_t *)(self + 0x94) == 4) {
        func_02060bf4(*(void **)(*(uint8_t **)(self + 0x9c) + 0x1c));
    } else if (*(int32_t *)(self + 0x94) == 5) {
        func_02060bf4(*(void **)(*(uint8_t **)(self + 0x9c) + 0x1c));
        func_02060e88(*(void **)(*(uint8_t **)(self + 0x9c) + 0x24), 2);
        func_02060ea4(*(void **)(*(uint8_t **)(self + 0x9c) + 0x24), 0x10);
    }

    func_02056db0(self);
    return self;
}
