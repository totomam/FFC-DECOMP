#include "ffc/types.h"

extern void func_ov001_0218054c(void *p);
extern int32_t func_ov001_0217ff48(void *p, int32_t a, int32_t b, int32_t c);
extern int32_t func_ov001_02180004(void *p, int32_t a);

typedef struct {
    uint32_t pad[3];
    int32_t state;
    int32_t f10;
    int32_t f14;
} S;

int32_t func_ov001_02180870(void *p0, int32_t a, int32_t b) {
    S *s = (S *)p0;
    int32_t ret = 0;
    if (s->state < 5) {
        if (s->f10 != 0) {
            func_ov001_0218054c(p0);
            if (func_ov001_0217ff48(p0, a, 0, 0) != 0) {
                goto fail;
            }
            return ret;
        }
        if (s->state == 4) {
            s->f14 = 1;
        }
        func_ov001_0218054c(p0);
        goto fail;
    }
    if (s->state == 7) {
        goto fail;
    }
    func_ov001_0218054c(p0);
    if (func_ov001_02180004(p0, b) != 0) {
        goto fail;
    }
    return 0;
fail:
    return 1;
}
