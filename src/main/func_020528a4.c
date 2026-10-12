#include "ffc/types.h"

extern void *func_020059cc(void *object);
extern void func_02056844(void *object);
extern void func_020528a4(void *a, void *b);

void func_020528a4(void *a, void *b)
{
    uint32_t *p = (uint32_t *)b;
    if (p[0] != 0) {
        func_020528a4(a, (void *)p[0]);
    }
    if (p[1] != 0) {
        func_020528a4(a, (void *)p[1]);
    }
    func_020059cc((uint8_t *)b + 0xc);
    func_02056844(b);
}
