#include "ffc/types.h"

extern void *func_02056aec(void);
extern void *func_0205681c(uint32_t size);
extern void *func_ov012_021d18ec(void *a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f);
extern void func_02056bc0(void *object, void *node);

void func_ov012_021d276c(uint8_t *p)
{
    void *r4 = func_02056aec();
    void *r1 = func_0205681c(0x134);
    if (r1 != 0) {
        r1 = func_ov012_021d18ec(r1, *(uint32_t *)(p + 0x80), 0, 0, 1, 0);
    }
    {
        void *obj = p + 0x14;
        func_02056bc0(obj, r1);
        func_02056bc0(obj, r4);
    }
}
