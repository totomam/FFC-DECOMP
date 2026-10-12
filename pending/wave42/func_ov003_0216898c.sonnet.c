#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Pair;

extern void *func_020424e0(void *p);
extern void *func_ov003_0214649c(void);
extern void *func_02052d90(void *mar, uint32_t index);
extern void *func_0205681c(uint32_t size);
extern void *func_ov003_02165838(void *obj, void *arg, uint32_t kind);
extern void func_ov003_0214f240(void *out, void *src);
extern void *func_0203b75c(uint32_t n);
extern void *func_ov003_0214bf10(void *a, void *b, Pair p, void *d, void *e, void *f, void *g, void *h);
extern void func_02056bc0(void *object, void *node);

void func_ov003_0216898c(uint8_t *self)
{
    struct { uint32_t p0[2]; Pair t1; Pair t2; uint32_t p1; } L;
    Pair comb;
    uint32_t kind;
    uint32_t r5v;
    void *mar;
    void *node;
    void *r7;
    void *sv;
    void *ret;
    uint8_t *x;
    uint8_t *q;

    func_020424e0(*(void **)(self + 0x80));
    x = (uint8_t *)func_ov003_0214649c();
    q = (uint8_t *)func_02052d90(*(void **)(x + 0xe4), *(void **)(x + 0xe8));
    kind = 2;
    if (q[8] != 0) {
        kind = 3;
    }
    mar = func_0205681c(0x38);
    if (mar != 0) {
        mar = func_ov003_02165838(mar, *(void **)(self + 0x80), kind);
    }
    func_ov003_0214f240(&L.t1, *(void **)(self + 0xa4));
    r5v = L.t1.b;
    func_ov003_0214f240(&L.t2, *(void **)(self + 0xa4));
    comb.a = L.t2.a;
    comb.b = r5v;
    sv = *(void **)(*(uint8_t **)(self + 0xa4) + 0x98);
    r7 = func_0203b75c(1);
    ret = func_020424e0(*(void **)(self + 0x80));
    node = func_ov003_0214bf10(ret, *(void **)(self + 0x98), comb, sv, mar,
                               *(void **)(self + 0x90), *(void **)(self + 0x88), (void *)0);
    func_02056bc0(x = self + 0x14, node);
    func_02056bc0(x, r7);
}
