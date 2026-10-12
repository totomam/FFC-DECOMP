#include "ffc/types.h"

extern void func_ov001_0217ef6c(void *ctx, const char *msg);
extern int32_t func_ov001_02178e90(void *ctx, const char *s0, const char *s1, const char *s2, const char *s3, const char *s4, const char *s5, void *n0, void *d, void *n1, void *e, void *cb, void *f);
extern char data_ov001_021900ec[];
extern char data_ov001_021900fc[];

int32_t func_ov001_02175944(void *p, const char *a, const char *b, void *d, void *e, int32_t (*cb)(void *, void *, void *), void *f)
{
    void **r6;

    if (p == 0 || (r6 = *(void ***)p) == 0) {
        return 2;
    }
    if (a == 0 || *a == 0) {
        return 2;
    }
    if (b == 0 || *b == 0) {
        return 2;
    }
    if (cb == 0) {
        func_ov001_0217ef6c(p, data_ov001_021900ec);
        return 2;
    }
    if (r6[0x42] != 0) {
        uint32_t buf[8] = {0};
        cb(p, buf, f);
        return 0;
    }
    return func_ov001_02178e90(p, data_ov001_021900fc, data_ov001_021900fc, data_ov001_021900fc, data_ov001_021900fc, a, b, 0, d, 0, e, (void *)cb, f);
}
