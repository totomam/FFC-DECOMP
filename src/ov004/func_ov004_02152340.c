#include "ffc/types.h"

typedef struct {
    void *data;
    int32_t size;
} Vec;

typedef struct {
    uint32_t a;
    uint32_t b;
} Elem;

typedef struct {
    uint8_t b;
} Flag;

typedef struct {
    uint8_t pad;
    Flag f;
} Holder;

extern void func_ov004_021486f8(Vec *v, int32_t n, Flag f);

void func_ov004_02152340(Vec *v, Elem *begin, Elem *end) {
    int32_t n;

    n = end - begin;
    if (n != 0) {
        Holder h;
        Flag *pf;
        Elem *dst;
        pf = &h.f;
        pf->b = 0;
        func_ov004_021486f8(v, n, *pf);
        dst = (Elem *)((uint8_t *)v->data + v->size * 8);
        if (begin != end) {
            do {
                if (dst != 0) {
                    dst->a = begin->a;
                    dst->b = begin->b;
                }
                begin++;
                dst++;
                v->size++;
            } while (begin != end);
        }
    }
}
