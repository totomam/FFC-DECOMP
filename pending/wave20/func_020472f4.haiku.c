#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_ov012_021d0f08(void *p, uint32_t a1, uint32_t a2, uint8_t a3, uint32_t a4, uint32_t a5, uint32_t a6);

void func_020472f4(uint8_t *a)
{
    void *p = func_0205681c(0x98);
    if (p != 0) {
        func_ov012_021d0f08(p, 0, 0, a[0x94], 0, 0, 0);
    }
}
