#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} S2;

extern void *func_0205681c(uint32_t size);
extern void *func_ov005_02195e78(void *a, uint32_t b, S2 s, uint32_t e, uint32_t f);
extern void func_ov005_02196144(void *a, uint32_t b);
extern void func_ov005_021961ac(void *a, uint32_t b);
extern void func_02056bc0(void *object, void *node);
extern uint32_t func_02015a38(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern void func_ov010_021bfab0(void *self, uint32_t a, uint32_t b);
extern uintptr_t func_020159f8(uint32_t a);
extern void *func_0203b9cc(S2 s, uintptr_t c, uint32_t d);
extern void *func_0203b884(void *a, uint32_t b, S2 xy, uint32_t z);
extern void func_020686cc(void *a, uint32_t b);
extern S2 data_ov010_021d18d0;
extern uint32_t data_020b8e44;
extern S2 data_ov010_021d18c8;

void func_ov010_021bf7f8(void *self)
{
    char *p = (char *)self;
    void *r;
    void *o;
    struct {
        uint32_t pad;
        S2 xy;
        S2 s;
    } L;

    r = func_0205681c(0xa0);
    if (r != 0) {
        r = func_ov005_02195e78(r, *(uint32_t *)(p + 0xb8), data_ov010_021d18d0, 1, 0);
    }
    *(void **)(p + 0x11c) = r;
    func_ov005_02196144(r, (uint8_t)(*(uint32_t *)(p + 0xf8) + 1));
    func_ov005_021961ac(*(void **)(p + 0x11c), (uint8_t)(*(uint32_t *)(p + 0xfc) + 1));
    func_02056bc0(p + 0x48, *(void **)(p + 0x11c));

    {
        uint32_t h = func_02015a38(data_020b8e44, 0, 1, 0);
        func_ov010_021bfab0(p, 1, h);
        L.xy.b = 3;
        L.s.b = 0x20;
        L.xy.a = 0;
        L.s.a = 0xd8;
        {
            uintptr_t d = func_020159f8(data_020b8e44);
            void *t = func_0203b9cc(L.s, d, 1);
            *(void **)(p + 0x134) = func_0203b884(t, h, L.xy, 0);
        }
    }
    func_020686cc(*(void **)(p + 0x134), 0);
    o = *(void **)(p + 0x134);
    ((void (*)(void *, S2))(*(void ***)o)[3])(o, data_ov010_021d18c8);
    o = *(void **)(p + 0x134);
    ((void (*)(void *))(*(void ***)o)[10])(o);
    func_02056bc0(p + 0x48, *(void **)(p + 0x134));
}
