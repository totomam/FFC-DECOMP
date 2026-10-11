#include "ffc/types.h"

typedef void (*fn_t)(void *, void *, uint8_t);

void func_ov004_02156724(char *self)
{
    char *base = *(char **)(self + 0x84);
    uint32_t *p = (uint32_t *)(self + 0x88);
    int32_t flags = (int32_t)p[1];
    int32_t off = flags >> 1;
    fn_t fn;

    if (flags & 1) {
        fn = *(fn_t *)(*(char **)(base + off) + p[0]);
    } else {
        fn = *(fn_t *)p[0];
    }

    fn(base + off, *(void **)(self + 0x90), *(uint8_t *)(self + 0x94));
    *(uint32_t *)(self + 0xc) = (*(uint32_t *)(self + 0xc) & ~0xffu) | 2;
}
