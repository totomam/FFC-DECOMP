#include "ffc/types.h"

extern void *func_ov002_02196414(void *object);
extern void func_02005db4(void *object, uint32_t value);
extern void func_02005dac(void *object);
extern void *func_0205681c(uint32_t size);
extern uint32_t func_02005dc8(void *object);
extern void func_02055914(void *a, void *b);
extern uint32_t data_020aca98[];

void func_ov002_02199350(uint8_t *a)
{
    uint32_t *obj;
    uint32_t r;
    uint32_t v;

    if (*(void **)(a + 0xc8) == 0) {
        return;
    }
    if (*(uint16_t *)((uint8_t *)func_ov002_02196414(*(void **)(a + 0xc8)) + 0x318) == 0) {
        return;
    }
    func_02005db4(*(void **)(a + 0xe8), 0);
    func_02005dac(*(void **)(a + 0xe8));
    obj = (uint32_t *)func_0205681c(0x1c);
    if (obj != 0) {
        r = func_02005dc8(*(void **)(a + 0xe8));
        v = *(uint32_t *)(a + 0xd4);
        obj[2] = 0;
        obj[3] = 0x10168;
        obj[0] = (uint32_t)data_020aca98;
        obj[4] = v;
        obj[5] = r;
        *((uint8_t *)obj + 0x18) = 0;
        *((uint8_t *)obj + 0x19) = 0;
    }
    func_02055914(*(void **)(a + 0xc4), obj);
}
