#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

typedef struct {
    uint32_t a;
    uint32_t b;
    uint32_t c;
} Triple;

extern void *data_020b8e44;
extern Pair data_ov009_021b0e60;
extern uint32_t data_ov009_021af278[];

extern uint32_t func_02015a38(void *a, uint32_t b, uint32_t c, uint32_t d);
extern uint32_t func_020159f8(void *a);
extern void *func_0203b9cc(Pair s, uint32_t c, uint32_t d);
extern uint32_t func_02066878(const void *object);
extern void func_0205fdc8(void *object, uint32_t value);
extern void *func_0203b878(void *a, uint32_t b);
extern uint32_t func_020159c8(void *a, uint32_t b);
extern void func_02005988(Triple *out, uint32_t v);
extern void func_02068ddc(void *obj, Triple *x);
extern void func_020059cc(Triple *x);
extern void func_02056bc0(void *object, void *node);

void func_ov009_021af094(uint8_t *p)
{
    Triple t;
    Pair s;
    void *obj;
    void **vt;
    uint32_t r4;
    void *r6;

    r4 = func_02015a38(data_020b8e44, 0, 1, 0);
    s.a = 0x80;
    s.b = 0x20;
    r6 = func_0203b9cc(s, func_020159f8(data_020b8e44), 1);
    func_0205fdc8(func_02066878(r6), 1);
    obj = func_0203b878(r6, (void *)r4);
    *(void **)(p + 0xe0) = obj;
    ((void (*)(void *, Pair))(*(void ***)obj)[3])(obj, data_ov009_021b0e60);
    obj = *(void **)(p + 0xe0);
    vt = *(void ***)obj;
    ((void (*)(void *, uint32_t))vt[8])(obj, 2);
    obj = *(void **)(p + 0xe0);
    vt = *(void ***)obj;
    ((void (*)(void *))vt[10])(obj);
    func_02005988(&t, func_020159c8(data_020b8e44, data_ov009_021af278[*(uint32_t *)(p + 0xf4)]));
    func_02068ddc(*(void **)(p + 0xe0), &t);
    func_020059cc(&t);
    func_02056bc0(p + 0x48, *(void **)(p + 0xe0));
}
