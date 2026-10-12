#include "ffc/types.h"

typedef struct Inner {
    uint8_t pad[0x44];
    int32_t val;
} Inner;

typedef struct Outer {
    uint8_t pad[8];
    Inner *inner;
} Outer;

extern int32_t func_ov001_02181040(void *p, int32_t a, int32_t b);
extern int32_t func_ov001_02181074(void *p, int32_t a, int32_t b);
extern int32_t func_ov001_02181104(void *p, int32_t a, int32_t b);
extern int32_t func_ov001_0218110c(void *p, int32_t a, int32_t b);
extern int32_t func_ov001_02181168(void *p);

int32_t func_ov001_02181190(Outer *p, int32_t type, int32_t a, int32_t b)
{
    int32_t r5 = p->inner->val + 3;
    int32_t r4 = b - r5;

    if (type == 0x64) {
        if (func_ov001_02181040(p, a + r5, r4)) goto fail;
        return 0;
    }
    if (type == 0x65) {
        if (func_ov001_02181074(p, a + r5, r4)) goto fail;
        return 0;
    }
    if (type == 0x66) {
        if (func_ov001_02181104(p, a, b)) goto fail;
        return 0;
    }
    if (type == 0x67) {
        if (func_ov001_0218110c(p, a + r5, r4)) goto fail;
        return 0;
    }
    if (type == 0x68) {
        if (func_ov001_02181168(p)) goto fail;
        return 0;
    }
fail:
    return 1;
}
