#include "ffc/types.h"

extern void func_02037550(void *p);
extern void *func_0205681c(uint32_t size);
extern void func_ov001_0218de64(void *p, uint32_t a, uint32_t b, uint32_t c);
extern char data_020ac6b8[];
extern uint32_t data_ov001_02194678[];

void func_ov001_0218af9c(void *a) {
    uint32_t *obj;
    uint32_t val;
    uint32_t cur;
    uint8_t flag;

    func_02037550(a);
    if (*(uint32_t *)((uint8_t *)a + 0x6c4) == 0) {
        (*(void (***)(void *))a)[0x58 / 4](a);
        return;
    }
    obj = (uint32_t *)func_0205681c(0x18);
    if (obj != 0) {
        cur = *(uint32_t *)((uint8_t *)a + 0x6c4);
        flag = 1;
        if (cur == 0) {
            flag = 0;
        }
        val = (*(uint32_t (***)(void *))a)[0x38 / 4](a);
        obj[2] = 0;
        obj[3] = 0x100b2;
        obj[0] = (uint32_t)(uintptr_t)data_020ac6b8;
        obj[4] = val;
        ((uint8_t *)obj)[0x14] = flag;
    }
    (*(void (***)(void *, void *))a)[0x4c / 4](a, obj);
    func_ov001_0218de64(a, 4, 1, 0);
    *(uint32_t *)((uint8_t *)a + 0xf4) = data_ov001_02194678[0];
    *(uint32_t *)((uint8_t *)a + 0xf8) = data_ov001_02194678[1];
}
