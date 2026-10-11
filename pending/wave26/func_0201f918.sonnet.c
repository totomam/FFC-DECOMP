#include "ffc/types.h"
typedef struct Pair { uint32_t lo, hi; } Pair;
typedef struct Elem {
    uint8_t b[3];
    uint8_t pad;
    uint64_t p;
    uint32_t w[8];
} Elem;
typedef struct Ctx { uint8_t pad[0x68]; Elem *arr; } Ctx;
void func_0201f918(Ctx *ctx, int idx, Elem *src)
{
    Elem *dst = ctx->arr + idx;
    
    
    dst->b[0] = src->b[0];
    dst->b[1] = src->b[1];
    dst->b[2] = src->b[2];
    dst->p = src->p;
    dst->w[0] = src->w[0];
    dst->w[1] = src->w[1];
    dst->w[2] = src->w[2];
    dst->w[3] = src->w[3];
    dst->w[4] = src->w[4];
    dst->w[5] = src->w[5];
    dst->w[6] = src->w[6];
    dst->w[7] = src->w[7];
}
