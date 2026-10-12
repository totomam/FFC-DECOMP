#include "ffc/types.h"

extern void func_0208716c(void *a, void *b);
extern void func_020870a0(void *object);
extern void func_0207cdf0(void *object);
extern uint8_t data_021407c0[];

int func_0207cd00(void (*a)(void *), uint32_t b)
{
    uint8_t *d = data_021407c0;

    if (b) {
        func_0208716c(d + 0x28, *(void **)(d + 8));
        *(void (**)(void *))(d + 0x4e8) = a;
        *(uint32_t *)(d + 4) |= 8;
        func_020870a0(d + 0x28);
    } else {
        a(d);
        func_0207cdf0(d);
    }

    if (b) {
        return 1;
    }
    if (**(uint32_t **)d == 0) {
        return 1;
    }
    return 0;
}
