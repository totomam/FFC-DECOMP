#include "ffc/types.h"

extern int func_ov009_021a5cdc(void *ctx, uint32_t *b, uint32_t *a);

void func_ov009_021a5650(uint32_t **out, uint32_t *a, uint32_t a2, uint32_t *a_end, uint32_t a4,
                         uint32_t *b, uint32_t *b_end, uint32_t *dst, void *ctx)
{
    while (a != a_end && b != b_end) {
        if (func_ov009_021a5cdc(ctx, b, a)) {
            *dst++ = *b++;
        } else {
            *dst++ = *a++;
        }
    }
    if (a == a_end) {
        while (b != b_end) {
            *dst++ = *b++;
        }
    } else {
        while (a != a_end) {
            *dst++ = *a++;
        }
    }
    *out = dst;
}
