#include "ffc/types.h"

extern void *func_02069210(void *object);
extern void *func_ov013_021bf360(void *a);
extern void *func_0203b918(void *a, void *b, int c, int d);
extern void func_02056bc0(void *object, void *node);
extern uint8_t data_ov013_021c4584[];

typedef struct {
    uint32_t a;
    uint32_t b;
} S;

void *func_ov013_021bf768(void *obj, void *p1, void *p2, S s)
{
    void *q;

    func_02069210(obj);
    *(void **)obj = data_ov013_021c4584;
    {
        void *t = func_ov013_021bf360(p1);
        void *r = func_0203b918(p2, t, 2, 1);
        *(void **)((uint8_t *)obj + 0x94) = r;
    }
    q = *(void **)((uint8_t *)obj + 0x94);
    ((void (*)(void *, int, int))(*(void ***)q)[0x38 / 4])(q, 2, 0);

    q = *(void **)((uint8_t *)obj + 0x94);
    ((void (*)(void *, S))(*(void ***)q)[0xc / 4])(q, s);

    q = *(void **)((uint8_t *)obj + 0x94);
    ((void (*)(void *, int))(*(void ***)q)[0x20 / 4])(q, 1);

    q = *(void **)((uint8_t *)obj + 0x94);
    ((void (*)(void *))(*(void ***)q)[0x28 / 4])(q);

    func_02056bc0((uint8_t *)obj + 0x48, *(void **)((uint8_t *)obj + 0x94));
    return obj;
}
