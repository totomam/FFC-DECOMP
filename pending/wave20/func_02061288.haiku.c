#include "ffc/types.h"

extern void func_02057190(void *self);
extern void func_02060ea4(void *obj, int32_t val);

void func_02061288(void *self)
{
    uint8_t *p = (uint8_t *)self;
    int32_t *q;

    if (*(int32_t *)(p + 0x48) == 1) {
        q = *(int32_t **)(p + 0x44);
        if (q[2] > 1) {
            return;
        }
    }
    func_02057190(self);
    func_02060ea4(*(void **)(p + 0x44), *(int32_t *)(p + 0x34));
}
