#include "ffc/types.h"

extern int32_t func_ov004_021489d8(void *p);
extern void func_ov004_02148fb8(int32_t *out, int32_t v);
extern void func_ov004_02148fb0(int32_t *out, int32_t v);

int32_t func_ov004_0215572c(void *a0)
{
    uint8_t *p = (uint8_t *)a0;
    uint32_t off = 0x228;
    int32_t buf[8];
    int32_t r5;
    int32_t r6;

    r6 = 0;
    r5 = (100 - *(int32_t *)(p + off)) << 12;
    func_ov004_02148fb8(&buf[7], func_ov004_021489d8(*(void **)(p + 0xf8)));
    if (buf[7] <= r5) {
        r5 = *(int32_t *)(p + off) << 12;
        func_ov004_02148fb0(&buf[4], func_ov004_021489d8(*(void **)(p + 0xf8)));
        if (buf[4] >= r5) {
            r6 = 1;
        }
    }
    return r6;
}
