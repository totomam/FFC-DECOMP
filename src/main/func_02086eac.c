#include "ffc/types.h"

extern uint32_t data_021414f4[];
extern void func_02086ee8(uint32_t x);
extern void func_020872d8(void *object, uintptr_t buffer, uint32_t size);
extern void func_02087390(void *object);

void func_02086ee8(uint32_t x);

void func_02086eac(uint32_t *obj, uint32_t arg)
{
    if (data_021414f4[5] != 0) {
        func_020872d8(obj, (uintptr_t)func_02086ee8, data_021414f4[5]);
        obj[0] |= 0x80;
        obj[25] = 1;
        obj[1] = arg;
        func_02087390(obj);
        return;
    }
    func_02086ee8(arg);
}
