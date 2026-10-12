#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } S8;

extern uint64_t func_0209a978(uint32_t a, uint32_t b);
extern void func_ov010_021bf10c(uint8_t *p);
extern void func_ov005_02196144(uint32_t x, uint8_t y);
extern void func_ov010_021bf160(uint8_t *p);
extern void func_02069828(uint8_t *p, S8 v);

typedef struct Obj { void **vt; } Obj;

int func_ov010_021bf0ac(uint8_t *p)
{
    S8 s;
    Obj *o;
    uint32_t old = *(uint32_t *)(p + 0xfc);
    uint64_t ret = func_0209a978(*(uint32_t *)(p + 0xf8) + old, old + 1);
    *(uint32_t *)(p + 0xf8) = (uint32_t)(ret >> 32);
    func_ov010_021bf10c(p);
    func_ov005_02196144(*(uint32_t *)(p + 0x114), (uint8_t)(*(uint32_t *)(p + 0xf8) + 1));
    func_ov010_021bf160(p);
    o = *(Obj **)(p + 0xf4);
    ((void (*)(S8 *, Obj *))((void **)o->vt)[4])(&s, o);
    func_02069828(p, s);
    return 1;
}
