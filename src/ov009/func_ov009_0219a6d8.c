#include "ffc/types.h"

typedef struct {
    uint32_t *base;
    uint32_t count;
} FfcStack;

extern void func_02063530(uint32_t *p);

void func_ov009_0219a6d8(FfcStack *s, uint32_t n)
{
    uint32_t *end = s->base + s->count;
    s->count = s->count - n;
    while (n != 0) {
        end--;
        func_02063530(end);
        n--;
    }
}
