#include "ffc/types.h"

extern void *func_02069210(void *object);
extern void *func_0203b918(void *a, void *b, int c, int d);
extern void func_02056bc0(void *object, void *node);
extern char data_ov011_021cb360[];

typedef struct {
    uint32_t a;
    uint32_t b;
} S;

void *func_ov011_021c3e34(uint8_t *self, void *p1, void *p2, S s)
{
    func_02069210(self);
    *(void **)self = data_ov011_021cb360;
    *(void **)(self + 0x94) = p1;
    *(void **)(self + 0x98) = func_0203b918(p2, *(void **)((uint8_t *)p1 + 0xbc), 2, 1);
    ((void (*)(void *, uint32_t, uint32_t))(*(void ***)*(void **)(self + 0x98))[0x38 / 4])(*(void **)(self + 0x98), 1, 0);
    ((void (*)(void *, S))(*(void ***)*(void **)(self + 0x98))[0x0c / 4])(*(void **)(self + 0x98), s);
    ((void (*)(void *))(*(void ***)*(void **)(self + 0x98))[0x28 / 4])(*(void **)(self + 0x98));
    ((void (*)(void *, uint32_t))(*(void ***)*(void **)(self + 0x98))[0x20 / 4])(*(void **)(self + 0x98), 2);
    func_02056bc0(self + 0x48, *(void **)(self + 0x98));
    return self;
}
