#include "ffc/types.h"

extern void func_02056858(void *p);
extern void *func_020059cc(void *object);

void *func_02052988(void *obj)
{
    uint8_t *p = (uint8_t *)obj;
    func_02056858(*(void **)(p + 0x14));
    func_02056858(*(void **)(p + 0x18));
    func_02056858(*(void **)(p + 0x1c));
    func_020059cc(p + 0x38);
    return obj;
}
