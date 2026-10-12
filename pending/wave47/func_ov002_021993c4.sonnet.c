#include "ffc/types.h"

extern void *func_ov002_02196414(void *object);
extern int func_02005dc0(void *object);
extern uint32_t func_02005dc8(void *object);
extern void *func_0205681c(uint32_t size);
extern void func_02055914(void *object);
extern void func_02005dac(void *object);
extern char data_020aca98[];

void func_ov002_021993c4(uint8_t *a)
{
    uint32_t r4;
    int r1;

    if (*(void **)(a + 0xc8) == 0) {
        return;
    }
    if (*(uint16_t *)((uint8_t *)func_ov002_02196414(*(void **)(a + 0xc8)) + 0x318) == 0) {
        return;
    }
    if (func_02005dc0(*(void **)(a + 0xe8)) == 0) {
        return;
    }
    r4 = func_02005dc8(*(void **)(a + 0xe8));
    r1 = 1;
    if (r4 == *(uint32_t *)(a + 0xec)) {
        r1 = 0;
    }
    *(uint32_t *)(a + 0xec) = r4;
    if (r4 != 0) {
        if (r1 == 0) {
            return;
        }
        {
            uint8_t *obj = (uint8_t *)func_0205681c(0x1c);
            if (obj) {
                *(uint32_t *)(obj + 8) = 0;
                *(uint32_t *)(obj + 0xc) = 0x10168;
                *(uint32_t *)(obj + 0) = (uint32_t)data_020aca98;
                *(uint32_t *)(obj + 0x10) = *(uint32_t *)(a + 0xd4);
                *(uint32_t *)(obj + 0x14) = r4;
                obj[0x18] = 1;
                obj[0x19] = 0;
            }
        }
        func_02055914(*(void **)(a + 0xc4));
    } else {
        func_02005dac(*(void **)(a + 0xe8));
        {
            uint8_t *obj = (uint8_t *)func_0205681c(0x1c);
            if (obj) {
                *(uint32_t *)(obj + 8) = 0;
                *(uint32_t *)(obj + 0xc) = 0x10168;
                *(uint32_t *)(obj + 0) = (uint32_t)data_020aca98;
                *(uint32_t *)(obj + 0x10) = *(uint32_t *)(a + 0xd4);
                *(uint32_t *)(obj + 0x14) = 0;
                obj[0x18] = 0;
                obj[0x19] = 1;
            }
        }
        func_02055914(*(void **)(a + 0xc4));
    }
}
