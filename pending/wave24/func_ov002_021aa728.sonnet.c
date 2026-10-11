#include "ffc/types.h"

extern int32_t func_ov002_021d3328(void *p);
extern void func_ov002_021d334c(void *p, int32_t v);
extern int32_t data_ov002_021d5284[];
extern int32_t data_ov002_021d5288;
extern int32_t data_ov002_021d528c;

void func_ov002_021aa728(void *a0, int32_t a1)
{
    int32_t x;
    int32_t *p;

    x = func_ov002_021d3328((char *)a0 + 0x13c) + a1;
    p = &x;
    if (x >= data_ov002_021d5284[1]) {
        p = &data_ov002_021d5288;
    }
    if (data_ov002_021d5284[2] >= *p) {
        p = &data_ov002_021d528c;
    }
    func_ov002_021d334c((char *)a0 + 0x13c, *p);
}
