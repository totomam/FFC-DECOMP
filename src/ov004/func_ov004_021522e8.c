#include "ffc/types.h"

extern void func_ov004_02152314(void);
extern void func_02065888(uint32_t *p, uint32_t a, uint32_t *q);

void func_ov004_021522e8(uint32_t *a0, uint32_t a1, uint32_t a2, uint32_t a3)
{
    if (a1) {
        uint32_t x[2];
        func_ov004_02152314();
        x[0] = *a0;
        x[1] = 1;
        func_02065888(x, a1, &a2);
    }
}
