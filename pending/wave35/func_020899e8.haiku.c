#include "ffc/types.h"

extern void func_020899a8(void *a, uint32_t v);
extern void func_02089914(void *a, uint32_t v);
extern uint32_t func_0209a514(int64_t a, int64_t b);
extern uint32_t func_0209a524(int64_t a, int64_t b);

void func_020899e8(void *a, void *b, int64_t v)
{
    if (v < 0) {
        v = 0;
    } else if (v > 0xbc19137fLL) {
        v = 0xbc19137fLL;
    }
    uint32_t d = func_0209a514(v, 0x15180LL);
    func_020899a8(b, d);
    uint32_t r = func_0209a524(v, 0x15180LL);
    func_02089914(a, r);
}
