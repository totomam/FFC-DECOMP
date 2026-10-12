#include "ffc/types.h"

typedef struct {
    uint32_t *first;
    uint32_t *middle;
    uint32_t *last;
} Range;

void func_ov009_021a542c(uint32_t **out, Range rg)
{
    uint32_t *first = rg.first;
    uint32_t *middle = rg.middle;
    uint32_t *last = rg.last;
    uint32_t *first2;
    uint32_t *new_middle;
    uint32_t t;

    if (first == middle) {
        *out = last;
        return;
    }
    if (middle == last) {
        *out = first;
        return;
    }
    first2 = middle;
    do {
        t = *first;
        *first = *first2;
        *first2 = t;
        first++;
        first2++;
        if (first == middle) {
            middle = first2;
        }
    } while (first2 != last);

    new_middle = first;
    first2 = middle;
    while (first2 != last) {
        t = *first;
        *first = *first2;
        *first2 = t;
        first++;
        first2++;
        if (first == middle) {
            middle = first2;
        } else if (first2 == last) {
            first2 = middle;
        }
    }
    *out = new_middle;
}
