#include "ffc/types.h"

extern int func_ov009_021a5cdc(void *ctx, uint32_t *b, uint32_t *a);

void func_ov009_021a56fc(uint32_t **out, uint32_t *a, uint32_t x2, uint32_t *aEnd,
                         uint32_t x5, uint32_t *b, uint32_t x7, uint32_t *bEnd,
                         uint32_t x9, uint32_t *dst, void *ctx)
{
    uint32_t *d = dst;

    while (a != aEnd && b != bEnd) {
        if (func_ov009_021a5cdc(ctx, b, a)) {
            *d++ = *b++;
        } else {
            *d++ = *a++;
        }
    }

    if (a == aEnd) {
        while (b != bEnd) {
            *d++ = *b++;
        }
    } else {
        while (a != aEnd) {
            *d++ = *a++;
        }
    }

    *out = d;
}
