#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Pair;

extern void *data_020b8e44;
extern Pair data_ov009_021b0ca0;
extern uint32_t func_02015a38();
extern uint32_t func_020159f8();
extern void *func_0203b9cc();
extern uint32_t func_02066878();
extern void func_0205fdc8();
extern void *func_0203b878();
extern void *func_020367b8();
extern void func_0200a630();
extern void func_02068e18();
extern void *func_0200a678();
extern void func_02056bc0();

void func_ov009_021ae7a0(uint8_t *self) {
    Pair s;
    uint32_t t[3];
    uint32_t r4;
    uint32_t x;
    void *r6;

    r4 = func_02015a38(data_020b8e44, 0, 10, 11);
    s.a = 0x80;
    s.b = 0x20;
    x = func_020159f8(data_020b8e44);
    r6 = func_0203b9cc(s, x, 1);
    func_0205fdc8(func_02066878(r6), 1);
    *(void **)(self + 0xd4) = func_0203b878(r6, r4);
    ((void (*)(void *, Pair))(*(void ***)*(void **)(self + 0xd4))[3])(*(void **)(self + 0xd4), data_ov009_021b0ca0);
    ((void (*)(void *, uint32_t))(*(void ***)*(void **)(self + 0xd4))[8])(*(void **)(self + 0xd4), 2);
    ((void (*)(void *))(*(void ***)*(void **)(self + 0xd4))[10])(*(void **)(self + 0xd4));
    func_0200a630(t, func_020367b8(self + 0xe8));
    func_02068e18(*(void **)(self + 0xd4), t);
    func_0200a678(t);
    func_02056bc0(self + 0x48, *(void **)(self + 0xd4));
}
