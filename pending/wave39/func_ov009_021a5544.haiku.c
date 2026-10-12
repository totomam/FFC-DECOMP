#include "ffc/types.h"

extern int32_t func_ov009_021a5cdc(void *ctx, uint32_t *b, uint32_t *a);

typedef struct {
    uint32_t **out;
    uint32_t *a1;
    uint32_t *a2;
    uint32_t *a3;
    uint32_t *a4;
    uint32_t *a5;
    uint32_t *a6;
    uint32_t *a7;
    void *ctx;
} MergeArgs;

void func_ov009_021a5544(MergeArgs s)
{
    uint32_t *d = s.a7;
    uint32_t *pa;
    uint32_t *pb;

    if (s.a1 == s.a2) {
        while (s.a5 != s.a3) {
            *--d = *--s.a5;
        }
        *s.out = d;
        return;
    }
    if (s.a3 == s.a5) {
        while (s.a2 != s.a1) {
            *--d = *--s.a2;
        }
        *s.out = d;
        return;
    }
    pa = s.a2;
    pb = s.a5;
    for (;;) {
        if (func_ov009_021a5cdc(s.ctx, pb - 1, pa - 1)) {
            *--d = *--pa;
            if (pa == s.a1) {
                while (pb != s.a3) {
                    *--d = *--pb;
                }
                break;
            }
        } else {
            *--d = *--pb;
            if (pb == s.a3) {
                while (pa != s.a1) {
                    *--d = *--pa;
                }
                break;
            }
        }
    }
    *s.out = d;
}
