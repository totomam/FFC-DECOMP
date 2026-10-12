#include "ffc/types.h"

typedef struct {
    uint32_t *first;
    uint32_t *middle;
    uint32_t *last;
} Range;

void func_ov009_021a542c(uint32_t **out, Range rg)
{
    uint32_t *i, *nm;
    uint32_t t;

    if (rg.first == rg.middle) { *out = rg.last; return; }
    if (rg.middle == rg.last) { *out = rg.first; return; }
    i = rg.middle;
    for (;;) {
        t = *i; *i = *rg.first; *rg.first = t;
        rg.first++; i++;
        if (i == rg.last) break;
        if (rg.first == rg.middle) rg.middle = i;
    }
    nm = rg.first;
    if (rg.first != rg.middle) {
        i = rg.middle;
        for (;;) {
            t = *i; *i = *rg.first; *rg.first = t;
            rg.first++; i++;
            if (i == rg.last) {
                if (rg.first == rg.middle) break;
                i = rg.middle;
            } else if (rg.first == rg.middle) rg.middle = i;
        }
    }
    *out = nm;
}
