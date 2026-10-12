#include "ffc/types.h"

extern void *func_ov004_021530f4(void *obj);
extern void *func_ov004_021530d8(void *obj);
extern void func_02084bc0(void *dst, int c, uint32_t n);
extern void func_0205770c(void *dst, void *src);
extern void func_020576d4(void *p, void *arr);

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

typedef struct {
    uint32_t a;
    uint32_t b;
    uint32_t c;
} Trio;

typedef struct {
    uint32_t a;
    uint32_t f4;
} Item;

typedef struct Obj Obj;

struct Vt {
    void *pad[8];
    uint32_t (*count)(Obj *self);
    Item *(*get)(Obj *self, uint32_t idx);
};

struct Obj {
    struct Vt *vt;
};

void func_ov004_02152c18(void *p)
{
    Trio L;
    Trio R;
    Pair t1;
    Pair t2;
    Obj *r4;
    uint32_t i;
    uint32_t m;
    Item *v;
    void *x;

    r4 = (Obj *)func_ov004_021530f4(*(void **)((uint8_t *)p + 0x4c));
    if (r4 != 0) {
        func_02084bc0(&L, 0, 12);
        for (i = 0; i < r4->vt->count(r4); i++) {
            v = r4->vt->get(r4, i);
            m = v->f4 & 0x3fff;
            L.a |= m;
            if (m & 0x1000) {
                v = r4->vt->get(r4, i);
                func_0205770c(&t1, v);
                L.b = t1.a;
                L.c = t1.b;
            }
        }
        func_020576d4(p, &L);
    } else {
        x = func_ov004_021530d8(*(void **)((uint8_t *)p + 0x4c));
        R.a = ((Item *)x)->f4 & 0x3fff;
        x = func_ov004_021530d8(*(void **)((uint8_t *)p + 0x4c));
        func_0205770c(&t2, x);
        R.b = t2.a;
        R.c = t2.b;
        func_020576d4(p, &R);
    }
}
