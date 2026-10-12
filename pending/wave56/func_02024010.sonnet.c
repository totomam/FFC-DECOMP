#include "ffc/types.h"

typedef struct { uint32_t a[16]; } Mat;

extern void func_02080a40(void *p);
extern void func_02080aa0(void *a, void *b, int32_t c, int32_t d, int32_t e);
extern void func_02080c9c(void *s, int32_t a, int32_t b);
extern void func_02080d08(void *s, void *a, void *b);
extern void func_02080cc0(void *s, int32_t a, int32_t b);
extern void func_02080ce4(void *s, int32_t a, int32_t b);
extern void func_02080b78(void *a, void *b, int32_t c, int32_t d, int32_t e);
extern int16_t data_020a1bd0[];

void func_02024010(void *self, void *dst, int32_t flag)
{
    uint8_t *s = (uint8_t *)self;
    uint8_t *d = (uint8_t *)dst;
    void *s2;
    int32_t a5;
    int32_t idx;
    uint32_t v[16];

    if (flag != 0) {
        s2 = *(void **)(s + 0x2e0);
        if (s2 != 0) {
            (*(void (**)(void *))(*(void **)s2))(s2);
        }
    }

    if (*(uint8_t *)(s + 0x34) == 0) {
        func_02080a40(d);
        a5 = *(int32_t *)(s + 0x44);
        func_02080aa0(d, d, *(int32_t *)(s + 0x3c), *(int32_t *)(s + 0x40), a5);

        idx = *(int32_t *)(s + 0x48) >> 4;
        func_02080c9c(v, data_020a1bd0[idx * 2], data_020a1bd0[idx * 2 + 1]);
        func_02080d08(v, d, d);

        idx = *(int32_t *)(s + 0x4c) >> 4;
        func_02080cc0(v, data_020a1bd0[idx * 2], data_020a1bd0[idx * 2 + 1]);
        func_02080d08(v, d, d);

        idx = *(int32_t *)(s + 0x50) >> 4;
        func_02080ce4(v, data_020a1bd0[idx * 2], data_020a1bd0[idx * 2 + 1]);
        func_02080d08(v, d, d);

        a5 = *(int32_t *)(s + 0x5c);
        func_02080b78(d, d, *(int32_t *)(s + 0x54), *(int32_t *)(s + 0x58), a5);
        func_02080b78(d, d, *(int32_t *)(s + 0x38), *(int32_t *)(s + 0x38), *(int32_t *)(s + 0x38));
    } else {
        *(Mat *)d = *(Mat *)(s + 0x60);
    }
}
