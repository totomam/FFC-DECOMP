#include "ffc/types.h"

extern void func_02052d3c(void *a, void *b);
extern void func_02052c04(void *p);
extern void *func_02065ca4(void *object);

typedef struct {
    uint32_t a;
    uint32_t b;
    uint8_t c;
    uint8_t pad[3];
} Elem;

typedef struct {
    Elem *base;
    uint32_t n;
    uint32_t pad[2];
    uint32_t m;
} Obj;

void *func_02065c14(void *object)
{
    Obj *o = (Obj *)object;
    Elem *lo = o->base + o->m;
    Elem *hi = lo + o->n;
    while (hi > lo) {
        hi--;
        if (hi->a != 0) {
            if (hi->c != 0) {
                func_02052d3c((void *)hi->a, (void *)hi->b);
            }
            func_02052c04((void *)hi->a);
        }
    }
    o->n = 0;
    func_02065ca4(object);
    return object;
}
