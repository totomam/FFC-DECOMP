#include "ffc/types.h"

extern uint8_t func_02036360(const void *object);
extern uint32_t func_020363a4(const void *object);
extern void func_02036b7c(void *base, uint32_t v);
extern void func_02036b74(void *base);
extern uint8_t func_02036008(const void *object);
extern void func_02036b9c(void *base);

void func_0201f6c4(uint8_t *self, const void *obj, int flag)
{
    uint32_t off = (uint32_t)func_02036360(obj) << 3;
    uint32_t v = func_020363a4(obj);
    uint8_t *base = *(uint8_t **)(self + 0x60) + off;
    func_02036b7c(base, v);
    if (flag != 0) {
        base = *(uint8_t **)(self + 0x60) + off;
        func_02036b74(base);
    }
    if (func_02036008(obj) != 0) {
        base = *(uint8_t **)(self + 0x60) + off;
        func_02036b9c(base);
    }
}
