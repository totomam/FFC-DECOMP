#include "ffc/types.h"

extern int32_t func_0209a76c(int32_t a, int32_t b);

void func_ov009_02199700(uint8_t *p, int32_t n)
{
    int32_t i;
    int32_t div = 100000;
    int32_t seen = 0;

    if (n >= 100000) {
        n = 99999;
    }
    if (n < 0) {
        n = 0;
    }

    for (i = 0; i < 5; i++) {
        div = func_0209a76c(div, 10);
        if (seen != 0 || func_0209a76c(func_0209a76c(n, div), 10) > 0) {
            ((void (*)(void *, int32_t, int32_t))(*(void ***)*(void **)(p + 0x80 + i * 4))[14])(*(void **)(p + 0x80 + i * 4), func_0209a76c(func_0209a76c(n, div), 10) + 1, 0);
            ((void (*)(void *))(*(void ***)*(void **)(p + 0x80 + i * 4))[10])(*(void **)(p + 0x80 + i * 4));
            seen = 1;
        } else {
            ((void (*)(void *))(*(void ***)*(void **)(p + 0x80 + i * 4))[11])(*(void **)(p + 0x80 + i * 4));
        }
    }

    if (seen == 0) {
        ((void (*)(void *, int32_t, int32_t))(*(void ***)*(void **)(p + 0x90))[14])(*(void **)(p + 0x90), 1, 0);
        ((void (*)(void *))(*(void ***)*(void **)(p + 0x90))[10])(*(void **)(p + 0x90));
    }
}
