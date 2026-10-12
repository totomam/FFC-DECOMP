#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Pair;

typedef struct Obj {
    void *vt;
    uint8_t f04[0x44];
    uint8_t f48[0x38];
    uint32_t f80;
    void *f84;
    void *f88;
    uint32_t f8c;
    uint32_t f90;
} Obj;

extern void *data_ov004_02158804;
extern void *data_ov004_0215872c[];
extern Pair data_ov004_02158734;
extern Pair data_ov004_0215885c;
extern void func_02056c9c(void *obj, int x);
extern void *func_0203b95c(void *a, void *b, int c, int d);
extern void func_02056bc0(void *object, void *node);

Obj *func_ov004_0214980c(Obj *s, uint32_t b, void *c) {
    void **tbl = data_ov004_0215872c;
    Pair *pr = &data_ov004_02158734;
    func_02056c9c(s, 0);
    s->vt = &data_ov004_02158804;
    s->f80 = b;
    s->f84 = func_0203b95c(tbl[1], c, 0, 1);
    ((void (*)(void *, uint32_t))(*(void ***)s->f84)[8])(s->f84, 2);
    ((void (*)(void *, uint32_t))(*(void ***)s->f84)[15])(s->f84, 2);
    ((void (*)(void *, uint32_t, uint32_t))(*(void ***)s->f84)[3])(s->f84, pr->a, pr->b);
    func_02056bc0(s->f48, s->f84);

    s->f88 = func_0203b95c(tbl[0], c, 0, 1);
    ((void (*)(void *, uint32_t))(*(void ***)s->f88)[8])(s->f88, 2);
    ((void (*)(void *, uint32_t))(*(void ***)s->f88)[15])(s->f88, 3);
    ((void (*)(void *, uint32_t, uint32_t))(*(void ***)s->f88)[3])(s->f88, pr->a, pr->b);
    func_02056bc0(s->f48, s->f88);

    s->f8c = data_ov004_0215885c.a;
    s->f90 = data_ov004_0215885c.b;
    return s;
}
