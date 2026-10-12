#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
    uint32_t c;
    uint32_t d;
} Elem;

typedef struct {
    Elem *begin;
    uint32_t count;
} Vec;

extern void func_020538f8(void *ctx, Elem e);

void func_02053b64(void *ctx, Vec *v)
{
    Elem *p = v->begin;
    Elem *end = (Elem *)((uint8_t *)v->begin + (v->count << 4));
    if (p != end) {
        do {
            func_020538f8(ctx, *p);
            p = (Elem *)((uint8_t *)p + 0x10);
        } while (p != (Elem *)((uint8_t *)v->begin + (v->count << 4)));
    }
}
