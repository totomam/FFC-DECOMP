#include "ffc/types.h"

extern void *func_020059cc(void *object);

void *func_ov002_021c2904(void *object)
{
    func_020059cc((uint8_t *)object + 0x10);
    func_020059cc(object);
    return object;
}
