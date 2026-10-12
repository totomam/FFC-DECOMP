#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} S;

extern void *func_02069210(void *object);
extern void *func_0203b918(void *x, void *y, int p, int q);
extern void func_02056bc0(void *object, void *node);
extern char data_ov007_021c7064[];

void *func_ov007_021b763c(void *self, void *a, void *b, S s)
{
    void *obj;
    void **vt;
    uint8_t *p = (uint8_t *)self;

    func_02069210(self);
    *(void **)self = (void *)data_ov007_021c7064;
    obj = func_0203b918(b, a, 2, 1);
    *(void **)(p + 0x94) = obj;
    vt = *(void ***)obj;
    ((void (*)(void *, uint32_t, uint32_t))vt[0x38 / 4])(obj, 2, 0);
    obj = *(void **)(p + 0x94);
    vt = *(void ***)obj;
    ((void (*)(void *, S))vt[0xc / 4])(obj, s);
    obj = *(void **)(p + 0x94);
    vt = *(void ***)obj;
    ((void (*)(void *))vt[0x28 / 4])(obj);
    func_02056bc0(p + 0x48, *(void **)(p + 0x94));
    return self;
}
