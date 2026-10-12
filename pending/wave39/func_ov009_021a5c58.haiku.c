#include "ffc/types.h"

extern int func_ov009_021a5cdc(void *ctx, uint32_t *x, uint32_t *y);

typedef struct {
    uint32_t *first;
    uint32_t *last;
} Range;

void func_ov009_021a5c58(Range r, void *c)
{
    uint32_t *a = r.first;
    uint32_t *b = r.last;
    uint32_t *p, *hole, *cur;
    uint32_t tmp;
    int found;

    if (a == b) {
        return;
    }
    for (p = a + 1; p != b; p++) {

        cur = p - 1;
        if (func_ov009_021a5cdc(c, p, cur) != 0) {
            tmp = *p;
            *p = *cur;
            hole = cur;
            for (;;) {
                found = 0;
                if (cur != a) {
                    cur--;
                    if (func_ov009_021a5cdc(c, &tmp, cur) != 0) {
                        found = 1;
                    }
                }
                if (found == 0) {
                    break;
                }
                *hole = *cur;
                hole--;
            }
            *hole = tmp;
        }
    }
}
