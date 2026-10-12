#include "ffc/types.h"

extern int func_ov009_021a5cdc(void *ctx, uint32_t *b, uint32_t *a);

typedef struct {
    uint32_t *cur;
    uint32_t x2;
    uint32_t *end;
    uint32_t x4;
} Span;

static inline uint32_t *cp(Span s, uint32_t *d)
{
    while (s.cur != s.end) {
        *d++ = *s.cur++;
    }
    return d;
}

void func_ov009_021a5650(uint32_t **out, Span a, uint32_t *b, uint32_t *b_end, uint32_t *dst, void *ctx)
{
    uint32_t **pb = &b;
    uint32_t **pd = &dst;
    Span *pa = &a;
    while (pa->cur != pa->end && *pb != b_end) {
        if (func_ov009_021a5cdc(ctx, *pb, pa->cur)) {
            *(*pd)++ = *(*pb)++;
        } else {
            *(*pd)++ = *pa->cur++;
        }
    }
    if (a.cur == a.end) {
        Span s2 = { b, 0, b_end, 0 };
        *out = cp(s2, dst);
    } else {
        *out = cp(a, dst);
    }
}
