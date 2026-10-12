#include "ffc/types.h"

extern uint32_t func_02062884(void *object);
extern int32_t func_02062898(void *object);

typedef struct { int32_t off; int32_t limit; } Range;
typedef struct {
    uint32_t flag : 1;
    uint32_t n : 31;
    uint32_t size;
    uint16_t *ptr;
} Str;
typedef void (*VtGet)(int32_t *out, void *obj, uint32_t key);
typedef void (*VtCb)(void *self, void *obj, Range rr, uint32_t key);

void func_02065fe0(void *self, void *obj, Range r, int32_t stride, Str *s)
{
    uint16_t *cur;
    int32_t w, w2;
    uint16_t key;

    cur = s->flag ? s->ptr : (uint16_t *)((uint8_t *)s + 2);
    for (; cur != (s->flag ? s->ptr + s->size : (uint16_t *)((uint8_t *)s + (((*(uint8_t *)s >> 1) & 0x7f) << 1) + 2)); cur++) {
        key = *cur;
        ((VtGet)(*(void ***)obj)[3])(&w, obj, key);
        w2 = w;
        if (r.off + w2 > (int32_t)func_02062884(self)) return;
        if (r.limit < func_02062898(self))
            ((VtCb)(*(void ***)self)[14])(self, obj, r, key);
        r.off = r.off + w2 + stride;
    }
}
