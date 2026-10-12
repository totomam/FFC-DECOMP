#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} S;

typedef void (*VFn2)(void *, uint32_t, uint32_t);
typedef void (*VFnS)(void *, S);
typedef void (*VFn1)(void *, uint32_t);
typedef void (*VFn0)(void *);

extern void *data_ov009_021b0b20;
extern void func_02069210(void *object);
extern void *func_0203b918(void *a, void *b, uint32_t c, uint32_t d);
extern void func_02056bc0(void *object, void *node);
extern uint32_t func_02064aa8(const void *object);
extern void func_0205f2f0(void *object, uint32_t value);

void *func_ov009_021a3e94(void *obj, void *p1, void *p2, S s)
{
    func_02069210(obj);
    *(void **)obj = (void *)&data_ov009_021b0b20;
    *(void **)((uint8_t *)obj + 0x94) = p1;
    *(void **)((uint8_t *)obj + 0x98) = func_0203b918(p2, *(void **)((uint8_t *)p1 + 0xb8), 2, 1);
    ((VFn2)(*(void ***)(*(void **)((uint8_t *)obj + 0x98)))[14])(*(void **)((uint8_t *)obj + 0x98), 1, 0);
    ((VFnS)(*(void ***)(*(void **)((uint8_t *)obj + 0x98)))[3])(*(void **)((uint8_t *)obj + 0x98), s);
    ((VFn1)(*(void ***)(*(void **)((uint8_t *)obj + 0x98)))[8])(*(void **)((uint8_t *)obj + 0x98), 2);
    ((VFn0)(*(void ***)(*(void **)((uint8_t *)obj + 0x98)))[10])(*(void **)((uint8_t *)obj + 0x98));
    func_02056bc0((uint8_t *)obj + 0x48, *(void **)((uint8_t *)obj + 0x98));
    func_0205f2f0(func_02064aa8(*(void **)((uint8_t *)obj + 0x98)), 1);
    return obj;
}
