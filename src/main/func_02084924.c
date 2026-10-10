#include "ffc/types.h"

extern void func_0208481c(void *p, uint32_t flags);
extern void func_020848b8(void *p, void *q, uint32_t n, uint32_t z);
extern void func_02084774(void *p);
extern void func_01ff8f28(void *p, void *q, uint32_t c, uint32_t d, uint32_t z);

void func_02084924(void *a, void *b, uint32_t c, uint32_t d)
{
    func_0208481c(a, 0x10000000);
    func_020848b8(a, b, d, 0);
    if (d != 0) {
        func_02084774(a);
        func_01ff8f28(a, b, c, 0x96600000 | (d >> 2), 0);
    }
}
