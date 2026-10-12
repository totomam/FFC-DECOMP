#include "ffc/types.h"

typedef struct {
    uint32_t w[6];
} Rec;

typedef struct {
    Rec *cur;
    uint32_t u1;
    Rec *end;
    uint32_t u2;
} Range;

extern uint32_t func_02036cd8(const void *object);
extern uint32_t func_02036cfc(const void *object);
extern uint32_t func_02036ce0(const void *object);

static inline Rec *copy_rest(Range r, Rec *dst)
{
    while (r.cur != r.end) {
        *dst = *r.cur;
        r.cur++;
        dst++;
    }
    return dst;
}

Rec *func_0201de74(Range ra, Range rb, Rec *dst)
{
    int pickB;
    while (ra.cur != ra.end && rb.cur != rb.end) {
        if (func_02036cd8(rb.cur) && !func_02036cd8(ra.cur)) {
            pickB = 1;
        } else if (func_02036cd8(ra.cur) && !func_02036cd8(rb.cur)) {
            pickB = 0;
        } else {
            uint32_t kb = func_02036cfc(rb.cur);
            uint32_t ka = func_02036cfc(ra.cur);
            if (kb < ka) {
                pickB = 1;
            } else {
                kb = func_02036cfc(rb.cur);
                ka = func_02036cfc(ra.cur);
                if (kb > ka) {
                    pickB = 0;
                } else if (func_02036cfc(rb.cur) == 0) {
                    pickB = 0;
                } else {
                    kb = func_02036ce0(rb.cur);
                    ka = func_02036ce0(ra.cur);
                    pickB = (kb < ka);
                }
            }
        }
        if (pickB) {
            *dst = *rb.cur;
            rb.cur++;
        } else {
            *dst = *ra.cur;
            ra.cur++;
        }
        dst++;
    }
    if (ra.cur == ra.end) {
        dst = copy_rest(rb, dst);
    } else {
        dst = copy_rest(ra, dst);
    }
    return dst;
}
