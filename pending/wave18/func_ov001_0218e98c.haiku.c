#include "ffc/types.h"

extern void func_02069434(void *p, uint32_t x);
extern uint8_t data_ov001_02194b30[];

void *func_ov001_0218e98c(void *a, uint8_t b) {
    func_02069434(a, 0);
    *(uint8_t **)a = data_ov001_02194b30;
    *(uint8_t *)((uint8_t *)a + 0xb5) = b;
    *(uint32_t *)((uint8_t *)a + 0xb8) = 0;
    return a;
}
