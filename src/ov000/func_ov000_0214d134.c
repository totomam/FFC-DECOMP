#include "ffc/types.h"

extern void **data_ov000_02169a34;
extern uint8_t data_ov000_0216e050[];
extern void *data_ov000_0216e04c;
extern void func_02087498(void *a, void *b, int32_t n);
extern void func_ov000_0214d1fc(void *p);

typedef void *(*Fn)(uint32_t);

int32_t func_ov000_0214d134(int32_t n)
{
    uint32_t a = ((uint32_t)(n << 2) + 3) & ~3u;
    uint32_t b = (((uint32_t)n * 0x2c) + 3) & ~3u;
    void *r6;
    uint8_t *p;
    int32_t i;

    r6 = ((Fn)data_ov000_02169a34[6])(b + a);
    if (r6 == 0) {
        return -1;
    }
    func_02087498(data_ov000_0216e050, r6, n);
    p = (uint8_t *)r6 + a;
    for (i = n; i > 0; i--) {
        func_ov000_0214d1fc(p);
        p += 0x2c;
    }
    data_ov000_0216e04c = r6;
    return 0;
}
