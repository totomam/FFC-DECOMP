#include "ffc/types.h"

extern void func_02084ca4(void *a, uint8_t *b, uint32_t c);

typedef struct {
    uint32_t type;
    void *obj;
    uint32_t off;
    uint32_t a;
    uint32_t b;
} Elem;

typedef struct {
    uint8_t pad[0xc];
    Elem *arr;
    uint32_t n;
} Outer;

void func_02050b50(Outer *p, uint8_t *base)
{
    uint32_t i;
    for (i = 0; i < p->n; i++) {
        Elem e = p->arr[i];
        switch (e.type) {
        case 0:
            func_02084ca4(e.obj, base + e.off, e.a * e.b);
            break;
        case 1: {
            void (*fn)(void *, uint8_t *);
            fn = *(void (**)(void *, uint8_t *))((uint8_t *)*(void **)e.obj + 0xc);
            fn(e.obj, base + e.off);
            break;
        }
        }
    }
}
