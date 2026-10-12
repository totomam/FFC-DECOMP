#include "ffc/types.h"

extern void *func_ov002_02198d08(void *a, uint32_t b);
extern uint32_t func_ov002_0219c5a8(void *a);
extern void *func_ov002_0219c5b8(void *a, uint32_t b);
extern void func_ov002_021ae088(void *a);

void func_ov002_0219f520(uint8_t *p)
{
    uint32_t i;
    void *s;
    uint32_t j;

    for (i = 0; i < 2; i++) {
        s = func_ov002_02198d08(*(void **)(p + 0xbc), i);
        for (j = 0; j < func_ov002_0219c5a8(s); j++) {
            func_ov002_021ae088(func_ov002_0219c5b8(s, j));
        }
    }
}
