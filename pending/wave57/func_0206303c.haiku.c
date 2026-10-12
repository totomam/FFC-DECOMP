#include "ffc/types.h"

extern void func_02052c94(uint32_t a, uint32_t b);

typedef struct {
    uint32_t a;
    uint32_t b;
    uint8_t f;
} Elem;

typedef struct {
    uint32_t r0;
    uint32_t r4;
    uint32_t r8;
    uint32_t rc;
    Elem *g3;
    uint32_t n3;
    uint32_t x18;
    Elem *g1;
    uint32_t n1;
    uint32_t x24;
    Elem *g2;
    uint32_t n2;
} Obj;

void func_0206303c(Obj *o, uint32_t flags) {
    Elem *e;

    if (flags & 1) {
        e = o->g1;
        if (e != (Elem *)((uint8_t *)o->g1 + o->n1 * 12)) {
            do {
                if (e->a != 0 && e->f == 0) {
                    e->f = 1;
                    func_02052c94(e->a, e->b);
                }
                e = (Elem *)((uint8_t *)e + 12);
            } while (e != (Elem *)((uint8_t *)o->g1 + o->n1 * 12));
        }
    }
    if (flags & 2) {
        e = o->g2;
        if (e != (Elem *)((uint8_t *)o->g2 + o->n2 * 12)) {
            do {
                if (e->a != 0 && e->f == 0) {
                    e->f = 1;
                    func_02052c94(e->a, e->b);
                }
                e = (Elem *)((uint8_t *)e + 12);
            } while (e != (Elem *)((uint8_t *)o->g2 + o->n2 * 12));
        }
    }
    if (flags & 4) {
        e = o->g3;
        if (e != (Elem *)((uint8_t *)o->g3 + o->n3 * 12)) {
            do {
                if (e->a != 0 && e->f == 0) {
                    e->f = 1;
                    func_02052c94(e->a, e->b);
                }
                e = (Elem *)((uint8_t *)e + 12);
            } while (e != (Elem *)((uint8_t *)o->g3 + o->n3 * 12));
        }
    }
}
