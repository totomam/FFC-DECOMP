#include "ffc/types.h"

extern void func_02077e0c(void *p, uint32_t size, int32_t n);
extern void func_02077e8c(void *p, uint32_t size, int32_t n);

void func_02077fb8(void *p, uint32_t size, int32_t n)
{
    if (size == 0) {
        size = 1;
    }
    size = (size + 3) & ~3u;
    if (n >= 0) {
        func_02077e0c(p, size, n);
        return;
    }
    func_02077e8c(p, size, -n);
}
