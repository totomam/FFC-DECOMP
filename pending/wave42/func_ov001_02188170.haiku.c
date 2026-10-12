#include "ffc/types.h"

extern int32_t func_ov000_02165704(void *p);
extern int32_t func_ov000_021654e8(void *p, int32_t a, int32_t b, int32_t c);
extern void func_ov001_02186f1c(void *p);
extern void func_ov001_02185698(void *p, int32_t a, int32_t b, int32_t c);
extern int32_t func_ov001_021879c8(void *p);
extern int32_t func_ov001_02188078(void *p);

int32_t func_ov001_02188170(char *p) {
    int32_t off = 0x6b4;
    int32_t r4;
    int32_t r0;
    int32_t res;

    if (func_ov000_02165704(*(void **)(p + off)) == 0) {
        return 0;
    }
    r4 = *(int32_t *)(p + 0x80);
    res = 0;
    r0 = func_ov000_021654e8(*(void **)(p + off),
                             *(int32_t *)(p + 0x7c) + r4,
                             (1 << 12) - r4, res);
    if ((uint32_t)(r0 + 1) <= 1) {
        func_ov001_02186f1c(p);
        return 3;
    }
    *(int32_t *)(p + 0x80) = *(int32_t *)(p + 0x80) + r0;
    if (*(int32_t *)p == 2 || *(int32_t *)(p + 0x7cc) > 0) {
        func_ov001_02185698(p + 0x6c0,
                            *(int32_t *)(p + 0x7c) + r4,
                            *(int32_t *)(p + 0x80) - r4, 0);
    }
    if (*(int32_t *)p == 3) {
        res = func_ov001_021879c8(p);
    }
    if (res != 0) {
        return res;
    }
    if (*(int32_t *)p == 2 && *(int32_t *)(p + 0x80) > 0) {
        return func_ov001_02188078(p);
    }
    return 0;
}
