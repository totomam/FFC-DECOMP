#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern void func_ov011_021c1868(void *object);
extern uint32_t func_02091b10(void *object, uint32_t first, ...);
extern void *func_0203bb94(void *object, uint32_t a, uint32_t b, uint32_t c);
extern void func_02056bc0(void *object, void *node);
extern uint8_t data_ov011_021cb12c[];

void func_ov011_021c2afc(void *object)
{
    uint8_t *self = (uint8_t *)object;
    uint32_t buf[17];
    Pair p;
    void *obj;

    func_ov011_021c1868(object);
    func_02091b10(buf, (uint32_t)data_ov011_021cb12c, *(uint32_t *)(self + 0x2c4));
    obj = func_0203bb94(buf, 1, 0, 0);
    *(void **)(self + 0x2b4) = obj;
    func_02056bc0(self + 0x48, obj);
    obj = *(void **)(self + 0x2b4);
    ((void (*)(void *))(*(void ***)obj)[10])(obj);
    obj = *(void **)(self + 0x2b4);
    ((void (*)(void *, uint32_t))(*(void ***)obj)[8])(obj, 2);
    p.a = 0;
    p.b = 0xa0;
    obj = *(void **)(self + 0x2b4);
    ((void (*)(void *, Pair))(*(void ***)obj)[3])(obj, p);
}
