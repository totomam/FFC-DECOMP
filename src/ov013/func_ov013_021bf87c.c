#include "ffc/types.h"

extern void func_02021338(uint32_t arg);

void func_ov013_021bf87c(uint8_t *p) {
    void *obj = *(void **)(p + 0x94);
    void **vt = *(void ***)obj;
    ((void (*)(void *, int, int))vt[14])(obj, 4, 1);
    func_02021338(0xce);
}
