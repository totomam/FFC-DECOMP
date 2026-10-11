#include "ffc/types.h"

extern void func_ov008_021a02ac(void *p);
extern void *func_02056aec(void *p);
extern void *func_0203bf7c(int n);
extern void func_02056bc0(void *object, void *node);

void func_ov008_021a0518(void *param_1)
{
    uint8_t *p = (uint8_t *)param_1;
    if (*(uint32_t *)(p + 0xfc) == 1) {
        func_ov008_021a02ac(param_1);
        *(uint8_t *)(p + 0x103) = 0xff;
        void *a = func_02056aec(param_1);
        void *b = func_0203bf7c(0x1e);
        void *q = p + 0x14;
        func_02056bc0(q, b);
        func_02056bc0(q, a);
    }
}
