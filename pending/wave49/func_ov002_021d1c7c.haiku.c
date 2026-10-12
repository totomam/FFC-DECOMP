#include "ffc/types.h"

typedef struct {
    int32_t f0;
    int32_t f1;
    int32_t f2;
    int32_t f3;
    int32_t f4;
    int32_t arr[6];
    int32_t last;
} Rec;

void func_ov002_021d1c7c(Rec **out, Rec *a, int32_t p2, Rec *endA, int32_t p4, Rec *b, int32_t p6, Rec *endB, int32_t p8, Rec *c)
{
    int32_t sb;
    int32_t sa;
    int i;

    while (a != endA && b != endB) {
        sb = 0;
        for (i = 0; i < 6; i++) {
            sb += b->arr[i];
        }
        sa = 0;
        for (i = 0; i < 6; i++) {
            sa += a->arr[i];
        }
        if (sb > sa) {
            *c = *b;
            b++;
            c++;
        } else {
            *c = *a;
            a++;
            c++;
        }
    }

    if (a == endA) {
        while (b != endB) {
            *c = *b;
            b++;
            c++;
        }
    } else {
        while (a != endA) {
            *c = *a;
            a++;
            c++;
        }
    }
    *out = c;
}
