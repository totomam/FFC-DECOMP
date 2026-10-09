#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_ov002_021a43dc(void *a, void *b);

void func_ov002_021a3fa0(void *p)
{
    void *r = func_0205681c(0x84);
    if (r != 0) {
        func_ov002_021a43dc(r, p);
    }
}
