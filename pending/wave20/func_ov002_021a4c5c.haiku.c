#include "ffc/types.h"

extern int func_ov002_021a4b28(uint32_t arg);
extern void *func_02056aec(void *object);
extern void func_02056bc0(void *object, void *node);

void func_ov002_021a4c5c(void *param_1)
{
    uint8_t *p = (uint8_t *)param_1;
    uint32_t v = *(uint32_t *)(p + 0x80);
    if (func_ov002_021a4b28(v) == 0) {
        void *node = func_02056aec(param_1);
        func_02056bc0(p + 0x14, node);
    }
}
