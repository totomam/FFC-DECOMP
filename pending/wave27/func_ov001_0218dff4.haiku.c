#include "ffc/types.h"

extern void func_ov001_0218dd2c(void *p);
extern void *func_0205681c(uint32_t size);
extern uint32_t data_ov001_021949c0[];
extern uint32_t data_ov001_02194a64[];

void *func_ov001_0218dff4(void *p)
{
    uint8_t *self = (uint8_t *)p;
    void *r;

    func_ov001_0218dd2c(p);
    *(void **)self = data_ov001_021949c0;
    *(uint8_t *)(self + 0x9c) = 0;
    *(uint8_t *)(self + 0x9d) = 0;
    *(uint8_t *)(self + 0x9e) = 0;
    *(uint8_t *)(self + 0x9f) = 0;
    *(uint8_t *)(self + 0xa0) = 0;
    *(uint32_t *)(self + 0xac) = 0;
    r = func_0205681c(0x204);
    if (r != 0) {
        *(void **)r = data_ov001_02194a64;
    }
    *(void **)(self + 0x98) = r;
    return p;
}
