#include "ffc/types.h"

extern void *func_0208ceec(void);
extern int32_t func_0208cef8(void);
extern void func_02087874(void *a, uint32_t b);
extern void func_02084a58(void *a, void *b, uint32_t c);

uint32_t func_0208d3e4(void *a) {
    uint32_t *p = (uint32_t *)func_0208ceec();
    int32_t r = func_0208cef8();
    if (r != 0) {
        return r;
    }
    if (a == 0) {
        return 6;
    }
    func_02087874((void *)p[1], 0x7d0);
    func_02084a58((void *)p[1], a, 0x7d0);
    return 0;
}
