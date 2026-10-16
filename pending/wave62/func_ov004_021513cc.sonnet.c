#include "ffc/types.h"
typedef struct { uint8_t c; } B;
typedef struct { uint32_t a,b,c,d; uint16_t e; uint32_t f; } E;
typedef struct { uint8_t *data; uint32_t size; uint32_t cap; } V;
extern void func_ov004_02152224(V *v, E *e, B b);
void func_ov004_021513cc(V *v, E *e)
{
    if (v->size < v->cap) {
        E *p = (E*)(v->data + v->size * 24);
        if (p) {
            p->a = e->a; p->b = e->b; p->c = e->c; p->d = e->d;
            p->e = e->e; p->f = e->f;
        }
        v->size++;
        return;
    }
    B b; b.c = 0;
    func_ov004_02152224(v, e, b);
}
