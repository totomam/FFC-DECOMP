#include "ffc/types.h"

typedef struct {
    int32_t a;
    int32_t b;
} Pair;

void func_ov002_021cc344(Pair **dst, Pair *a, uint32_t x, Pair *aend,
                         uint32_t y, Pair *b, uint32_t z, Pair *bend,
                         uint32_t w, Pair *out) {
    Pair *o = out;
    Pair **pa = &a;
    Pair **pb = &b;

    while (*pa != aend && *pb != bend) {
        if ((*pb)->b > (*pa)->b) {
            o->a = (*pb)->a;
            o->b = (*pb)->b;
            (*pb)++;
        } else {
            o->a = (*pa)->a;
            o->b = (*pa)->b;
            (*pa)++;
        }
        o++;
    }

    if (*pa != aend) {
        while (*pa != aend) {
            o->a = (*pa)->a;
            o->b = (*pa)->b;
            (*pa)++;
            o++;
        }
    } else {
        while (*pb != bend) {
            o->a = (*pb)->a;
            o->b = (*pb)->b;
            (*pb)++;
            o++;
        }
    }
    *dst = o;
}
