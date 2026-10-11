#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_ov012_021d0f08(void *obj, int a, int b, int c, int d, int e, int f);

void func_020472f4(uint8_t *p)
{
    void *q = func_0205681c(0x98);
    if (q != 0) {
        func_ov012_021d0f08(q, 0, 0, p[0x94], 0, 0, 0);
    }
}
