#include "ffc/types.h"

extern void func_ov001_02179b10(void *p, int x);
extern void func_ov001_02176320(void *p);

void func_ov001_021759ec(void *a0) {
    uint8_t *obj;
    uint32_t st;
    if (a0 == 0) return;
    obj = *(uint8_t **)a0;
    if (obj == 0) return;
    if (*(uint32_t *)(obj + 0x108) != 0) return;
    st = *(uint32_t *)(obj + 0x1f4);
    func_ov001_02179b10(a0, 1);
    func_ov001_02176320(a0);
    if (st == 3) {
        *(uint32_t *)(obj + 0x1f4) = 4;
    }
}
