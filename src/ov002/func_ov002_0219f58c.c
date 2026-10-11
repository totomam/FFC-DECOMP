#include "ffc/types.h"

extern void *func_ov002_021c8488(void *p);
extern void func_ov002_021c82b0(void *p, uint8_t v);

void func_ov002_0219f58c(uint8_t *a, uint8_t b)
{
    void *p = *(void **)(a + 0x12c);
    if (p != 0) {
        p = func_ov002_021c8488(p);
        func_ov002_021c82b0(p, b);
    }
    a[0x144] = b;
}
