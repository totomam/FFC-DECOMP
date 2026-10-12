#include "ffc/types.h"

extern int32_t func_0204be98(void *obj);
extern void func_02087498(void *dst, void *src, int32_t n);
extern void func_0204be88(void *obj);
extern void func_02086dcc(void *obj, void *fn, int32_t a2, int32_t a3, int32_t a4, int32_t a5);
extern void func_020870a0(void *object);
extern void func_0204a948(void);

int32_t func_0204a8a4(uint8_t *a, int32_t c, int32_t b)
{
    int32_t k = 2 << 12;
    if (func_0204be98(a) == 0) {
        func_02087498(a, a + 0x20, 3);
        func_0204be88(a);
    }
    func_02086dcc(a + 0x2c, (void *)func_0204a948, 0, b + k, k, c);
    func_020870a0(a + 0x2c);
    return 1;
}
