#include "ffc/types.h"

extern uint32_t func_02091b10(void *object, uint32_t first, ...);
extern uint32_t func_02092864(const uint8_t *text);
extern void func_02068b70(void *obj, int8_t c);
extern uint8_t data_020ae3f8[];

void func_0203511c(void *unused, void *obj)
{
    int8_t buf[0x20];
    int32_t i;

    func_02091b10(buf, (uint32_t)data_020ae3f8);
    i = (int32_t)func_02092864((const uint8_t *)buf) - 1;
    while (i >= 0) {
        func_02068b70(obj, buf[i]);
        i--;
    }
}
