#include "ffc/types.h"

typedef struct W5 { uint32_t v[5]; } W5;
typedef struct H9 { uint16_t v[9]; } H9;
typedef struct H21 { uint16_t v[21]; } H21;

typedef struct Elem {
    uint32_t a;
    H9 b;
    uint8_t pad1[2];
    uint32_t c;
    uint32_t d;
    H21 e;
    uint8_t pad2[2];
    W5 f;
    uint32_t g0;
    uint32_t g1;
    W5 h;
    W5 i;
    W5 j;
    uint32_t k0;
    uint32_t k1;
    uint32_t l;
} Elem;

#define COPY_ELEM(d, s) \
    (d)->a = (s)->a; \
    (d)->b = (s)->b; \
    (d)->c = (s)->c; \
    (d)->d = (s)->d; \
    (d)->e = (s)->e; \
    (d)->f = (s)->f; \
    (d)->g0 = (s)->g0; \
    (d)->g1 = (s)->g1; \
    (d)->h = (s)->h; \
    (d)->i = (s)->i; \
    (d)->j = (s)->j; \
    (d)->k0 = (s)->k0; \
    (d)->k1 = (s)->k1; \
    (d)->l = (s)->l;

void func_0201fd50(uint8_t *ctx, Elem *p)
{
    int i;
    Elem *arr;

    for (i = 0; i < 5; i++) {
        arr = *(Elem **)(ctx + 0x1d8);
        {
            Elem *d;
            Elem *s;
            s = arr + (4 - i);
            d = arr + (5 - i);
            COPY_ELEM(d, s)
        }
    }
    arr = *(Elem **)(ctx + 0x1d8);
    {
        Elem *d = arr;
        const Elem *s = p;
        COPY_ELEM(d, s)
    }
}
