#include "ffc/types.h"

extern uint8_t data_020b22dc[];
extern void *func_020903cc(void *object, int c, uint32_t n);

typedef struct {
    uint8_t *vtbl;
    uint32_t pad04;
    uint32_t pad08;
    uint32_t flags;
    uint32_t pad10;
    uint32_t f14;
    uint32_t f18;
    uint32_t pad1c;
    uint8_t b20;
    uint8_t b21;
    uint8_t b22;
    uint8_t b23;
    uint8_t b24;
    uint8_t b25;
    uint8_t pad26[0x82];
    uint32_t fa8;
    uint32_t arr[32];
    uint32_t arr2[32];
} T;

void *func_020730d4(void *obj, uint32_t a, uint32_t b) {
    T *s = (T *)obj;
    int i = 0;
    int j;

    s->flags = s->flags & ~0xffu;
    s->f14 = a;
    s->vtbl = data_020b22dc;
    s->b20 = i;
    s->b21 = i;
    s->b22 = i;
    s->b23 = i;
    s->b24 = i;
    s->b25 = i;
    s->fa8 = i;
    s->f18 = b;
    func_020903cc((uint8_t *)obj + 0x26, 0, 0x80);
    for (; i < 32; i++) {
        s->arr[i] = i;
    }
    for (j = 0; j < 32; j++) {
        s->arr2[j] = 0;
    }
    return obj;
}
