#include "ffc/types.h"

typedef struct {
    uint32_t key;
    uint32_t val;
} Elem;

typedef struct {
    Elem *cur;
} Obj;

typedef struct {
    Elem *first;
    Elem *last;
} Range;

void func_ov002_021cce50(Obj *self, Range r, uint32_t *key) {
    Elem *first = r.first;
    int32_t count = r.last - first;
    if (count > 0) {
        uint32_t k = *key;
        do {
            int32_t half = count / 2;
            Elem *mid = first + half;
            if (k <= mid->key) {
                first = mid + 1;
                r.first = first;
                count = count - (half + 1);
            } else {
                count = half;
            }
        } while (count > 0);
    }
    self->cur = first;
}
