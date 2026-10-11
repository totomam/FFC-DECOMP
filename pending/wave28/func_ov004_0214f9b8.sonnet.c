/* cflags: -lang c++ */
#include "ffc/types.h"
extern "C" {
extern void func_02021338(uint32_t x);
extern void func_01ffe554(void *obj, uint32_t x);
extern void func_01ffd834(void *obj, uint32_t a, uint32_t b);
extern uint32_t data_ov004_021596b4[];
void func_ov004_0214f9b8(uint8_t *p);
}
struct Pair { uint32_t v[2]; };
struct Z { int v; Z(int x) : v(x) {} ~Z() {} };
inline int get(const Z &a) { return a.v; }
extern "C" void func_ov004_0214f9b8(uint8_t *p)
{
    void *o;
    func_02021338(0x89);
    o = *(void **)(p + 0x90);
    func_01ffe554(o, 1 << 12);
    o = *(void **)(p + 0x90);
    func_01ffd834(o, 0, 0);
    o = *(void **)(p + 0x90);
    ((void (*)(void *, int))((void **)(*(void **)o))[8])(o, 2);
    *(uint32_t *)(p + 0xf0) = get(Z(0x14));
    *(Pair *)(p + 0x80) = *(Pair *)data_ov004_021596b4;
}
