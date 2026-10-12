#include "ffc/types.h"

extern void func_0200b65c(void *dst, void *src);
extern void *func_020059cc(void *object);

typedef struct {
    uint32_t a;
    uint32_t b[3];
} Elem;

typedef struct {
    Elem *data;
    int size;
} Vec;

Elem *func_ov013_021c1e3c(Vec *v, Elem *pos)
{
    Elem *first = pos;
    Elem *end = v->data + v->size;
    if (((end - first) - 1) != 0) {
        Elem *p = first;
        Elem *q = first + 1;
        if (q < end) {
            do {
                p->a = q->a;
                func_0200b65c(&p->b, &q->b);
                p++;
                q++;
            } while (q < end);
        }
    }
    v->size = v->size - 1;
    func_020059cc(&v->data[v->size].b);
    return first;
}
