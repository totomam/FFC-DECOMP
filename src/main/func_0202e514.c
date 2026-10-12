#include "ffc/types.h"

extern uint8_t data_020adcd0[];
extern void func_02030e20(void *a, void *b, void *c, void *d);
extern void func_02035c18(void *p);
extern void func_02056db0(void *p);
extern void func_02056844(void *p);

void *func_0202e514(void *self)
{
    uint8_t *p = (uint8_t *)self;
    void *obj;
    void *y;
    uint32_t x;
    uint32_t out;
    uint32_t off = 0x484;
    uint8_t *base;

    *(uint8_t **)p = data_020adcd0;

    obj = *(void **)(p + 0x80);
    if (obj != 0) {
        if (obj != 0) {
            ((void (*)(void *))((void **)(*(void **)obj))[1])(obj);
        }
        *(void **)(p + 0x80) = 0;
    }

    base = p + off;
    y = base + 4;
    x = *(uint32_t *)(base + 8);
    func_02030e20(&out, base, &x, &y);
    func_02035c18(p + 0xd4);
    func_02056db0(p);
    func_02056844(p);
    return p;
}
