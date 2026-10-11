#include "ffc/types.h"

extern void func_ov011_021c8880(void *p);
extern void func_ov005_02197514(int32_t v);
extern void func_ov011_021c9728(void *p, int32_t v);
extern void func_ov009_0219a358(int32_t v);

void func_ov011_021c8640(void *a)
{
    uint8_t *p = (uint8_t *)a;

    if (*(int32_t *)(p + 0x3AC) == 1) {
        return;
    }
    *(int32_t *)(p + 0x3AC) = 1;
    func_ov011_021c8880(a);
    if (*(int32_t *)(p + 0x3A8) < 3) {
        func_ov005_02197514(*(int32_t *)(p + 0x3D8));
    }
    func_ov011_021c9728(a, *(int32_t *)(p + 0x3A8));
    func_ov009_0219a358(*(int32_t *)(p + *(int32_t *)(p + 0x3A8) * 4 + 0xFC));
}
