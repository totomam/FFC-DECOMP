#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } S8;

extern char data_ov005_02199098[];
extern uint32_t data_020b8e44[];

extern void func_02056c9c(void *o, uint32_t v);
extern uint32_t func_02015a38(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern uint32_t func_020159f8(uint32_t a);
extern uint32_t func_0203b9cc(S8 s, uint32_t c, uint32_t d);
extern uint32_t func_02066878(const void *object);
extern void func_0205fdc8(void *object, uint32_t value);
extern uint32_t func_0203b878(uint32_t a, uint32_t b);
extern void func_02056bc0(void *object, uint32_t node);

void *func_ov005_021964ec(uint8_t *p, uint32_t x, uint32_t y, ...)
{
    uint32_t sv[2];
    uint32_t r4;
    uint32_t v;
    uint32_t **obj;
    uint32_t *ap = &x;

    func_02056c9c(p, 0);
    *(char **)p = data_ov005_02199098;
    v = func_02015a38(data_020b8e44[0], 0, 1, 0);
    *(uint32_t *)(p + 0x80) = v;
    sv[0] = 0xa0;
    sv[1] = 0x10;
    r4 = func_0203b9cc(*(S8 *)sv, func_020159f8(data_020b8e44[0]), 1);
    func_0205fdc8((void *)func_02066878((void *)r4), 1);
    v = func_0203b878(r4, *(uint32_t *)(p + 0x80));
    *(uint32_t *)(p + 0x84) = v;
    func_02056bc0(p + 0x48, v);
    obj = *(uint32_t ***)(p + 0x84);
    ((void (*)(void *, S8))obj[0][3])(obj, *(S8 *)ap);
    obj = *(uint32_t ***)(p + 0x84);
    ((void (*)(void *, uint32_t))obj[0][8])(obj, 2);
    obj = *(uint32_t ***)(p + 0x84);
    ((void (*)(void *))obj[0][10])(obj);
    return p;
}
