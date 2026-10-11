#include "ffc/types.h"

extern void func_ov000_021653f4(uint32_t a, uint32_t b);
extern void *func_020903cc(void *object, int c, uint32_t n);

void func_ov001_02171a9c(void *p)
{
    uint32_t *q;

    if (p == 0) {
        return;
    }
    q = (uint32_t *)p;
    if (q[1] == 0) {
        return;
    }
    if (q[7] == 0) {
        func_ov000_021653f4(q[1], q[7]);
    }
    func_020903cc(p, 0, 0x24);
}
