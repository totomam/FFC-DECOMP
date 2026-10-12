#include "ffc/types.h"

typedef struct S {
    uint32_t a;
    uint32_t b;
} S;

extern void *func_02069210(void *object);
extern void *func_0203b918(void *a, void *b, uint32_t c, uint32_t d);
extern void func_02056bc0(void *object, void *node);
extern char data_ov007_021c3628[];

uint8_t *func_ov007_021a031c(uint8_t *self, uint8_t *a, uint8_t *b, S s)
{
    void *obj;
    void **vt;

    func_02069210(self);
    *(void **)self = data_ov007_021c3628;
    *(uint8_t **)(self + 0x94) = a;
    obj = func_0203b918(b, *(void **)(a + 0xc4), 2, 1);
    *(void **)(self + 0x98) = obj;

    vt = *(void ***)obj;
    ((void (*)(void *, uint32_t, uint32_t))vt[0x38 / 4])(obj, 1, 0);

    obj = *(void **)(self + 0x98);
    vt = *(void ***)obj;
    ((void (*)(void *, S))vt[0xc / 4])(obj, s);

    obj = *(void **)(self + 0x98);
    vt = *(void ***)obj;
    ((void (*)(void *))vt[0x2c / 4])(obj);

    func_02056bc0(self + 0x48, *(void **)(self + 0x98));
    return self;
}
