#include "ffc/types.h"

extern int32_t func_ov000_02168768(void *p);
extern void *func_ov000_0216876c(void *p, int32_t i);
extern int32_t func_ov001_0217870c(void *a, void *b, uint16_t c, void *d, int32_t *e, int32_t f);
extern void func_ov000_02168848(void *p, int32_t i);

int32_t func_ov001_0217bc88(void *a, uint8_t *b)
{
    int32_t out;
    int32_t ret;
    void *r4;

    if (b == 0) {
        return 3;
    }
    if (*(int32_t *)(b + 0x34) != 0) {
        return 0;
    }
    while (func_ov000_02168768(*(void **)(b + 0x3c))) {
        r4 = func_ov000_0216876c(*(void **)(b + 0x3c), 0);
        ret = func_ov001_0217870c(a, *(void **)(b + 8), *(uint16_t *)(b + 0xc), r4, &out, 0);
        if (out != 0 || ret != 0) {
            *(int32_t *)b = 0x6a;
            return 0;
        }
        if (((int32_t *)r4)[3] != ((int32_t *)r4)[2]) {
            break;
        }
        func_ov000_02168848(*(void **)(b + 0x3c), 0);
    }
    return 0;
}
