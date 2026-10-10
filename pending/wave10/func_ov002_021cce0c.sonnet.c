#include "ffc/types.h"

typedef struct {
    uint32_t key;
    uint32_t val;
} Entry;

typedef struct {
    Entry *first;
    Entry *last;
} Range;

void func_ov002_021cce0c(Entry **out, Range r, uint32_t *key) {
    Entry *first = r.first;
    int32_t len = r.last - first;
    while (len > 0) {
        int32_t half = len / 2;
        Entry *mid = first + half;
        if (mid->key > *key) {
            first = mid + 1;
            len = len - (half + 1);
        } else {
            len = half;
        }
    }
    *out = first;
}
