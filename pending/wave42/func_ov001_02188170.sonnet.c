#include "ffc/types.h"

extern int32_t func_ov000_02165704(void *p);
extern int32_t func_ov000_021654e8(void *p, int32_t a, int32_t b, int32_t c);
extern void func_ov001_02186f1c(void *p);
extern void func_ov001_02185698(void *p, int32_t a, int32_t b);
extern int32_t func_ov001_021879c8(void *p);
extern int32_t func_ov001_02188078(void *p);

typedef struct S {
    int32_t mode;
    char pad0[0x78];
    int32_t base;
    int32_t len;
    char pad1[0x6b4 - 0x84];
    void *h;
    char pad2[0x7cc - 0x6b8];
    int32_t cnt;
} S;

int32_t func_ov001_02188170(S *p) {
    int32_t r4;
    int32_t r0;
    int32_t res;

    if (func_ov000_02165704(p->h) == 0) {
        return 0;
    }
    r4 = p->len;
    r0 = func_ov000_021654e8(p->h, p->base + r4, 0x1000 - r4, 0);
    res = 0;
    if ((uint32_t)(r0 + 1) <= 1) {
        func_ov001_02186f1c(p);
        return 3;
    }
    p->len = p->len + r0;
    if (p->mode == 2 || p->cnt > 0) {
        func_ov001_02185698((char *)p + 0x6c0, p->base + r4, p->len - r4);
    }
    if (p->mode == 3) {
        res = func_ov001_021879c8(p);
    }
    if (res != 0) {
        return res;
    }
    if (p->mode == 2 && p->len > 0) {
        return func_ov001_02188078(p);
    }
    return 0;
}
