#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Pair;

extern void func_ov011_021c9f14(void *obj);
extern void *func_0205681c(uint32_t size);
extern void *func_ov011_021c6d6c(void *obj, void *field);
extern void func_02056bc0(void *object, void *node);
extern Pair data_ov011_021cbdfc;

void func_ov011_021c9fc0(void *p)
{
    uint8_t *b = (uint8_t *)p;
    Pair *s;
    uint32_t v0, v1;
    void *node;

    if (*(uint32_t *)(b + 0x94) == 1) {
        *(uint32_t *)(b + 0x94) = 0;
        func_ov011_021c9f14(p);
        return;
    }

    node = func_0205681c(0x8c);
    if (node) {
        node = func_ov011_021c6d6c(node, b + 0x94);
    }
    func_02056bc0(b + 0x14, node);
    s = &data_ov011_021cbdfc;
    v0 = s->a;
    v1 = s->b;
    *(uint32_t *)(b + 0x80) = v0;
    *(uint32_t *)(b + 0x84) = v1;
}
