#include "ffc/types.h"

typedef struct { uint32_t a, b; } Pair;
typedef struct { uint32_t a, b, c; } Loc;

extern uint32_t func_02015a38(void *obj, uint32_t a, uint32_t b, uint32_t c);
extern uintptr_t func_020159f8(void *obj);
extern void *func_0203b9cc(Pair p, uintptr_t c, uint32_t d);
extern uint32_t func_02066878(const void *object);
extern void func_0205fdc8(void *object, uint32_t value);
extern void *func_0203b878(void *object, uint32_t b);
extern void *func_020367b8(void *object);
extern void func_0200a630(Loc *dst, void *src);
extern void func_02068e18(void *object, Loc *node);
extern void func_0200a678(Loc *object);
extern void func_02056bc0(void *object, void *node);
extern void *data_020b8e44;
extern Pair data_ov009_021b0e78;

void func_ov009_021aefe8(uint8_t *r5)
{
    Pair args;
    Loc loc;
    void *r6;
    void *obj;
    uint32_t r4;
    void **vt;

    r4 = func_02015a38(data_020b8e44, 0, 10, 11);
    args.a = 0x80;
    args.b = 0x20;
    r6 = func_0203b9cc(args, func_020159f8(data_020b8e44), 1);
    func_0205fdc8(func_02066878(r6), 1);
    obj = func_0203b878(r6, r4);
    const Pair *pp = &data_ov009_021b0e78;
    *(void **)(r5 + 0xdc) = obj;
    ((void (*)(void *, Pair))(*(void ***)obj)[3])(obj, *pp);
    vt = *(void ***)(*(void **)(r5 + 0xdc));
    ((void (*)(void *, uint32_t))vt[8])(*(void **)(r5 + 0xdc), 2);
    vt = *(void ***)(*(void **)(r5 + 0xdc));
    ((void (*)(void *))vt[10])(*(void **)(r5 + 0xdc));
    func_0200a630(&loc, func_020367b8(*(void **)(r5 + 0xec)));
    func_02068e18(*(void **)(r5 + 0xdc), &loc);
    func_0200a678(&loc);
    func_02056bc0(r5 + 0x48, *(void **)(r5 + 0xdc));
}
