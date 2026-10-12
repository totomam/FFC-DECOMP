#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } S;

typedef struct { void *p; uint8_t f; } L;

typedef struct {
    uint8_t pad[0x4c];
    uint32_t a;
    uint32_t b;
    uint8_t ok;
    uint8_t ok2;
} Obj;

typedef struct {
    uint32_t k0, k1, k2, k3;
    uint32_t key;
    uint32_t p14;
    uint32_t p18;
    uint32_t pad;
} Ent;

typedef struct {
    uint32_t x;
    Ent *arr;
    uint32_t count;
    uint32_t key;
} Tbl;

extern void func_0208763c(void);
extern void func_02087678(void *p);
extern uint32_t func_0207e96c(void *obj, uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern uint32_t func_0207e990(void *object, S s);
extern uint32_t func_0207fc20(const void *object);
extern uint32_t func_0207fc24(const void *object);
extern char data_0213dfac[];
extern char data_0213df68[];

uint8_t func_0205210c(Obj *self, S s) {
    L loc;
    L *pl = &loc;
    Tbl *t;
    uint32_t i;
    Ent *e;
    uint32_t found;

    self->a = s.a;
    self->b = s.b;
    loc.p = data_0213dfac;
    pl->f = 1;
    if (pl->f) {
        func_0208763c();
    }
    found = 0;
    t = (Tbl *)data_0213df68;
    if (t->key == s.a) {
        if (t->count != 0) {
            i = 0;
            do {
                e = &t->arr[i];
                if (e->key == s.b) {
                    found = 1;
                    if (e->p14 != 0 || e->p18 != 0) {
                        self->ok = func_0207e96c((uint8_t *)self + 4, s.a, e->p14, e->p18, s.b) != 0;
                    } else {
                        self->ok = func_0207e990((uint8_t *)self + 4, s) != 0;
                        if (self->ok) {
                            e->p14 = func_0207fc20((uint8_t *)self + 4);
                            e->p18 = func_0207fc24((uint8_t *)self + 4);
                        }
                    }
                    break;
                }
                i++;
            } while (i < t->count);
        }
    }
    if (!found) {
        self->ok = func_0207e990((uint8_t *)self + 4, s) != 0;
    }
    if (pl->f) {
        func_02087678(pl->p);
    }
    if (self->ok) {
        self->ok2 = 1;
    }
    return self->ok;
}
