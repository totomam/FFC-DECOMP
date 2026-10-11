#include "ffc/types.h"

extern int32_t func_02087498(void *a, void *b, int32_t c);
extern int32_t func_ov000_0214d224(void *a, void *b);
extern int32_t func_02087508(void *a, void *b, int32_t c);

typedef struct {
    int32_t f0;
    int32_t f4;
    void *f8;
    int8_t f12;
    int8_t f13;
} Obj;

int32_t func_ov000_0214d268(void *a, Obj *p)
{
    int32_t ret;
    int32_t tmp;
    uint8_t buf[0x20];

    if (p->f13 == 1) {
        func_02087498(buf, &tmp, 1);
        p->f8 = buf;
        func_ov000_0214d224(a, p);
        func_02087508(buf, &ret, 1);
    } else {
        p->f8 = 0;
        ret = func_ov000_0214d224(a, p);
    }
    return ret;
}
