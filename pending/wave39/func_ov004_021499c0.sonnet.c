#include "ffc/types.h"

typedef struct { int32_t x, y; } V;
extern int32_t func_ov004_02153114(void *p);
extern int32_t func_ov004_02153514(void *p);
extern V func_ov004_0214e830(int32_t a, int32_t b);
extern int32_t func_0209a76c(int32_t a, int32_t b);
extern int32_t data_ov004_0215872c[];

void func_ov004_021499c0(uint8_t *p)
{
    V b;
    V a;
    int32_t y, r2;

    y = func_ov004_02153114(*(void **)(p + 0x80));
    r2 = func_ov004_02153514(*(void **)(p + 0x80));
    a = func_ov004_0214e830(y, r2);

    y = a.y << 5;
    b.x = func_0209a76c(a.x << 5, 0x300) + data_ov004_0215872c[2];
    b.y = func_0209a76c(y, 0x300) + data_ov004_0215872c[3];

    {
        void *obj = *(void **)(p + 0x84);
        void **vt = *(void ***)obj;
        ((void (*)(void *, V))vt[3])(obj, b);
    }
}
