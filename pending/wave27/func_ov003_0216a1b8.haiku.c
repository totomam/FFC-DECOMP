#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_020095b8(void *dst, void *src);
extern void *func_0205e29c(void *obj, uint32_t arg1, void *tmp, uint32_t a3, uint32_t a4, uint32_t a5);
extern void *func_020059cc(void *object);

void func_ov003_0216a1b8(uint8_t *a)
{
    uint32_t tmp[3];
    uint32_t zero = 0;
    void *r6;
    int flag = 0;

    r6 = func_0205681c(0x70);
    if (r6 != 0) {
        func_020095b8(&tmp[0], a + 0x40);
        flag = 1;
        r6 = func_0205e29c(r6, *(uint32_t *)(a + 0x3c), &tmp[0], 1, zero, zero);
    }
    **(void ***)(a + 0x38) = r6;
    if (flag) {
        func_020059cc(&tmp[0]);
    }
}
