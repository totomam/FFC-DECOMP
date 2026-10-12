/* cflags: -lang c++ */
#include "ffc/types.h"

extern "C" {
void func_ov004_02148668(void *arr, void *val, uint32_t flag);
}

struct Num {
    uint32_t v;
    Num(uint32_t x) : v(x) {}
    ~Num() {}
};

inline uint32_t diff(const Num &a, uint32_t b) { return a.v - b; }

typedef struct Elem {
    uint8_t pad0[8];
    uint32_t v0;
    uint32_t v1;
    uint8_t pad1[8];
    void *obj;
    uint32_t count;
    uint8_t pad2[0x11];
    uint8_t f35;
    uint8_t f36;
} Elem;

typedef struct Self {
    uint8_t pad0[0x10c];
    uint8_t *elems;
    uint8_t pad1[0x118 - 0x110];
    uint8_t *arrA;
    uint32_t countA;
    uint32_t capA;
    uint8_t *arrB;
    uint32_t countB;
    uint32_t capB;
    uint8_t flag130;
} Self;

static void push_pair(uint8_t *arr, uint32_t *count, uint32_t cap, Elem *e);

extern "C" void func_ov004_021501c0(uint8_t *selfp, uint32_t idx)
{
    Self *self = (Self *)selfp;
    uint32_t i;
    uint8_t z;
    Elem *e;
    void **vt;
    void *obj;

    self->flag130 = 1;

    e = (Elem *)(self->elems + idx * 0x38);

    {
        uint32_t a = self->countA;
        uint32_t b = self->countA;
        self->countA = diff(Num(b), a);
    }
    {
        uint32_t a = self->countB;
        uint32_t b = self->countB;
        *(uint32_t *)(selfp + 0x1fc) = diff(Num(a), b);
    }

    if (e->count != 0) {
        for (i = 0; i < e->count; i++) {
            if (self->countA < self->capA) {
                uint8_t *p = self->arrA + self->countA * 8;
                if (p != 0) {
                    *(uint32_t *)p = e->v0;
                    *(uint32_t *)(p + 4) = e->v1;
                }
                self->countA = self->countA + 1;
            } else {
                z = 0;
                func_ov004_02148668(&self->arrA, (uint8_t *)e + 8, z);
            }

            if (self->countB < self->capB) {
                uint8_t *p = self->arrB + self->countB * 8;
                if (p != 0) {
                    *(uint32_t *)p = e->v0;
                    *(uint32_t *)(p + 4) = e->v1;
                }
                self->countB = self->countB + 1;
            } else {
                z = 0;
                func_ov004_02148668(&self->arrB, (uint8_t *)e + 8, z);
            }
        }
    }

    e->f35 = 0;
    e->f36 = 1;

    obj = e->obj;
    vt = *(void ***)obj;
    ((void (*)(void *))vt[10])(obj);

    obj = e->obj;
    vt = *(void ***)obj;
    ((void (*)(void *, uint32_t, uint32_t))vt[14])(obj, 1, 1);
}
