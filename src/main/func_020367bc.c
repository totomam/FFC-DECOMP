#include "ffc/types.h"

extern void func_02035f58(void *buf);
extern uint8_t func_02036820(const void *object, uint32_t index);
extern void func_0201f36c(const void *object, uint32_t index, void *output);
extern void func_0201f460(const void *object, uint32_t index, void *output);
extern uint8_t func_02036360(const void *object);
extern void *data_020b93b8;

uint8_t func_020367bc(const void *object, uint32_t index)
{
    uint8_t buf[0x60];
    uint8_t *e = (uint8_t *)object + (index << 2);

    if (e[0x34] != 0) {
        func_02035f58(buf);
        if (e[0x35] == 0) {
            func_0201f36c(data_020b93b8, func_02036820(object, index), buf);
        } else {
            func_0201f460(data_020b93b8, func_02036820(object, index), buf);
        }
        return func_02036360(buf);
    }
    return 0;
}
