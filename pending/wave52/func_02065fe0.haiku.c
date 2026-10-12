#include "ffc/types.h"

extern uint32_t func_02062884(void *object);
extern int32_t func_02062898(void *object);

typedef struct {
    int32_t off;
    int32_t limit;
} Range;

typedef void (*VtGet)(int32_t *out, void *obj, uint32_t key);
typedef void (*VtCb)(void *self, void *obj, int32_t off, int32_t limit, uint32_t key);

void func_02065fe0(void *self, void *obj, Range r, int32_t stride, uint8_t *tbl)
{
    uint8_t *cur;
    int32_t w;
    uint16_t key;

    if (tbl[0] & 1) {
        cur = *(uint8_t **)(tbl + 8);
    } else {
        cur = tbl + 2;
    }

    for (; cur != ((tbl[0] & 1) ? *(uint8_t **)(tbl + 8) + ((*(uint32_t *)(tbl + 4)) << 1)
                                : tbl + 2 + (((tbl[0] >> 1) & 0x7f) << 1));
         cur += 2) {
        key = *(uint16_t *)cur;
        ((VtGet)(*(void ***)obj)[3])(&w, obj, key);
        if (r.off + w > (int32_t)func_02062884(self)) {
            return;
        }
        if (r.limit < func_02062898(self)) {
            ((VtCb)(*(void ***)self)[14])(self, obj, r.off, r.limit, key);
        }
        r.off = r.off + w + stride;
    }
}
