#include "ffc/types.h"

extern void *func_02057a70(void *object);
extern void func_02054844(void *object);

void *func_02054324(void *object)
{
    func_02057a70((uint8_t *)object + 0xc);
    func_02054844(object);
    return object;
}
