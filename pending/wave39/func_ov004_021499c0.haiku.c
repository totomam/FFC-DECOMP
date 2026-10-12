#include "ffc/types.h"

extern int32_t func_ov004_02153114(void *p);
extern int32_t func_ov004_02153514(void *p);
extern void func_ov004_0214e830(int32_t *out, int32_t a, int32_t b);
extern int32_t func_0209a76c(int32_t a, int32_t b);
extern int32_t data_ov004_0215872c[];

void func_ov004_021499c0(uint8_t *p)
{
    int32_t buf[4];
    int32_t y;
    int32_t r2;
    void *obj;
    void **vt;

    y = func_ov004_02153114(*(void **)(p + 0x80));
    r2 = func_ov004_02153514(*(void **)(p + 0x80));
    func_ov004_0214e830(buf, y, r2);

    y = buf[1] << 5;
    buf[2] = func_0209a76c(buf[0] << 5, 0x300) + data_ov004_0215872c[2];
    buf[3] = func_0209a76c(y, 0x300) + data_ov004_0215872c[3];

    obj = *(void **)(p + 0x84);
    vt = *(void ***)obj;
    ((void (*)(void *, int32_t, int32_t))vt[3])(obj, buf[2], buf[3]);
}
