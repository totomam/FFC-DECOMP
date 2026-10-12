#include "ffc/types.h"

extern void func_02069288(void *object);
extern void func_020692a4(void *object);
extern uint8_t func_02036360(const void *object);
extern void func_ov011_021c9818(void *object);

typedef struct { uint8_t pad[0x60]; } Item;
typedef struct {
    uint8_t p0[0xbc];
    void *a_bc, *a_c0;
    uint8_t p1[0xd8 - 0xc4];
    void *b[2];
    uint8_t p2[0xfc - 0xe0];
    void *c[5];
    
    void *ptrs[5];
    uint32_t *list;
    uint32_t count;
    uint8_t p5[0x140 - 0x12c];
    Item items[1];
} S;

void func_ov011_021c9728(S *s, int idx) {
    int i;
    uint8_t j;
    uint8_t *q = (uint8_t *)s;
    for (i = 0; i < 5; i++) func_02069288(s->c[i]);
    func_020692a4(s->c[idx]);
    if (idx == q[0x3c5]) q[0x3c5] = 1;
    if (idx == q[0x3c6]) q[0x3c6] = 3;
    for (j = 0; j < s->count; j++) {
        if (func_02036360(&s->items[(uint8_t)s->list[j]]))
            func_020692a4(s->ptrs[j]);
    }
    for (i = 0; i < 2; i++) func_020692a4(s->b[i]);
    func_02069288(s->a_bc);
    {
        void *r = *(void **)((uint8_t *)s->a_bc + 0x98);
        ((void (*)(void *))((void **)*(void **)r)[10])(r);
    }
    func_020692a4(s->a_c0);
    {
        void *r = *(void **)((uint8_t *)s->a_c0 + 0x98);
        ((void (*)(void *))((void **)*(void **)r)[11])(r);
    }
    func_ov011_021c9818(s);
}
