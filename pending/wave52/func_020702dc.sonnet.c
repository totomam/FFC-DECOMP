#include "ffc/types.h"

extern void *func_02070374(void *a, void *b, void **out_v, uint8_t *out_5, uint8_t *out_4);
extern void *func_02070850(void *a, void *r, uint8_t y, uint8_t x, void *s);

typedef struct {
    uint32_t k0;
    uint32_t k1;
} Key;

typedef struct {
    uint32_t pad[3];
    Key key;
} Node;

typedef struct {
    uint32_t f[7];
} Rest;

typedef struct {
    uint32_t k0;
    uint32_t k1;
    Rest rest;
} Big;

void *func_020702dc(void *a, Key *b) {
    uint8_t p5;
    uint8_t p4;
    Node *v;
    void *r;
    int f;
    Key *k;

    r = func_02070374(a, b, (void **)&v, &p5, &p4);
    f = (v == 0);
    if (!f) {
        k = &v->key;
        if (k->k0 < b->k0) f = 1;
        else if (k->k0 > b->k0) f = 0;
        else if (k->k1 < b->k1) f = 1;
        else f = 0;
    }
    if (f) {
        Big s;
        Rest z = {{0, 0, 0, 0, 0, 0, 0}};
        s.k0 = b->k0;
        s.k1 = b->k1;
        s.rest = z;
        r = func_02070850(a, r, p5, p4, &s);
        return (uint8_t *)r + 0xc;
    }
    return (uint8_t *)v + 0xc;
}
