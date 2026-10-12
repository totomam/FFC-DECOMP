#include "ffc/types.h"

typedef struct Sub {
    uint8_t pad[0x20];
    uint16_t h;
} Sub;

typedef struct Out {
    uint8_t p0[0xc];
    Sub *sub;
    uint8_t p1[0xc];
    uint32_t w1c;
} Out;

extern void *func_ov001_0217c128(void *a, uint32_t b);
extern int func_ov001_0217c8f0(void *a, uint32_t b, void **out);
extern int func_ov001_02177b9c(void *a, uint32_t b, int32_t c, uint32_t d);
extern void *func_ov001_0217c188(void *a, uint32_t b, uint32_t c);
extern int func_ov001_0217c1e8(void *a, void *b);
extern int func_ov001_0217c220(void *a, void *b);
extern void func_ov001_0217c5dc(void *a);
extern int func_ov001_0217c2b8(void *a, void *b, int32_t c, uint32_t d);

int func_ov001_02177c4c(void *a, uint32_t b, int32_t c, uint32_t d, int32_t e, int32_t f)
{
    Out *out;
    void *n;
    void *r;
    int ret;

    n = func_ov001_0217c128(a, b);
    if (n != 0) {
        goto L8e;
    }
    if (func_ov001_0217c8f0(a, b, (void **)&out) != 0 && out->sub != 0 && out->sub->h != 0) {
        goto L50;
    }
    if (e == 0xb00) {
        return 3;
    }
    return func_ov001_02177b9c(a, b, c, d);

L50:
    r = func_ov001_0217c188(a, b, 1);
    if (r == 0) {
        return 1;
    }
    n = r;
    if (out->w1c == 0) {
        ret = func_ov001_0217c1e8(a, n);
        if (ret != 0) {
            return ret;
        }
    } else {
        ret = func_ov001_0217c220(a, n);
        if (ret != 0) {
            return ret;
        }
    }
    goto tail;

L8e:
    if (*(uint32_t *)n != 0x6a) {
        goto tail;
    }
    if (func_ov001_0217c8f0(a, b, (void **)&out) == 0) {
        goto tail;
    }
    if (out->sub != 0) {
        out->sub->h = 0;
    }
    if (e == 0xb00) {
        return 3;
    }
    if (c >= 100) {
        goto tail;
    }
    return func_ov001_02177b9c(a, b, c, d);

tail:
    if (f != 0) {
        func_ov001_0217c5dc(n);
    }
    ret = func_ov001_0217c2b8(a, n, c, d);
    if (ret != 0) {
        return ret;
    }
    return 0;
}
