#include "ffc/types.h"

extern void *func_02069210(void *object);
extern void *func_0203b95c(void *a, void *b, int c, int d);
extern void func_02056bc0(void *object, void *node);
extern uint32_t data_ov011_021cb810[];
extern uint32_t data_ov011_021cb648[];

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;
extern Pair data_ov011_021cb694[];

void *func_ov011_021c5eac(void *self, void *p1, void *p2, int p3)
{
    uint8_t *o = (uint8_t *)self;
    void *sel;
    void *obj;

    func_02069210(self);
    *(uint32_t **)self = data_ov011_021cb810;
    *(void **)(o + 0x94) = p2;
    *(int *)(o + 0x98) = p3;
    *(int *)(o + 0x9c) = 0;
    *(void **)(o + 0xa0) = p1;

    if (p3 == 0) {
        sel = (void *)data_ov011_021cb648[1];
    } else {
        sel = (void *)data_ov011_021cb648[0];
    }

    obj = func_0203b95c(sel, *(void **)(o + 0x94), 0, 1);
    *(void **)(o + 0x9c) = obj;
    ((void (*)(void *, int, int))(*(void ***)obj)[0x38 / 4])(obj, 1, 0);

    ((void (*)(void *, int))(*(void ***)(*(void **)(o + 0x9c)))[0x20 / 4])(*(void **)(o + 0x9c), 1);

    ((void (*)(void *, int))(*(void ***)(*(void **)(o + 0x9c)))[0x3c / 4])(*(void **)(o + 0x9c), 1);

    ((void (*)(void *, Pair))(*(void ***)(*(void **)(o + 0x9c)))[0xc / 4])(*(void **)(o + 0x9c), data_ov011_021cb694[*(int *)(o + 0x98)]);

    ((void (*)(void *))(*(void ***)(*(void **)(o + 0x9c)))[0x28 / 4])(*(void **)(o + 0x9c));

    func_02056bc0(o + 0x48, *(void **)(o + 0x9c));

    return self;
}
