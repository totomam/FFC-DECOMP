#include "ffc/types.h"

extern uint32_t func_02064aa8(const void *object);
extern void func_0205f2f0(void *object, uint32_t value);

void func_ov002_021bc804(uint8_t *p, uint32_t r1)
{
    void *obj = *(void **)(p + 0x80);
    if (obj) {
        uint32_t v = 1;
        if (r1 == 0) {
            v = 0;
        }
        func_0205f2f0((void *)func_02064aa8(obj), v);
    }
}
