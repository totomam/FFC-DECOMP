#include "ffc/types.h"

extern void *func_ov002_02196414(void *object);
extern int func_02005dc0(void *x);

int func_ov002_02199488(void *self)
{
    uint8_t *p = (uint8_t *)self;
    void *obj = *(void **)(p + 0xc8);
    if (obj == 0) {
        return 0;
    }
    obj = func_ov002_02196414(obj);
    if (*(uint16_t *)((uint8_t *)obj + 0x318) == 0) {
        return 0;
    }
    if (func_02005dc0(*(void **)(p + 0xe8)) == 0) {
        return 1;
    }
    return 0;
}
