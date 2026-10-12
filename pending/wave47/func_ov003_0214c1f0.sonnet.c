#include "ffc/types.h"

extern void *func_0203b688(void *a);
extern uint32_t func_ov003_0215b394(void *b, int x, int y, int z, uint32_t w, int p, int q);
extern uint32_t func_ov003_0215b1d4(void *b);
extern uint32_t func_0203b75c(int v);
extern uint32_t func_ov003_0215b1f8(void *b, uint32_t c, int x, int y, int p, int q, int r);
extern uint32_t func_02021610(void *p, int v);
extern void func_02056bc0(void *object, void *node);
extern void *data_0209e074;

void *func_ov003_0214c1f0(void *a, void *b, uint32_t c, void *d, uint32_t e)
{
    void *obj = func_0203b688(a);
    uint32_t s10 = func_ov003_0215b394(b, 1, 1, 0x1000, 0, 0, 0);
    uint32_t s14 = func_ov003_0215b1d4(b);
    uint32_t s18 = func_0203b75c(0xf);
    uint32_t r7 = func_ov003_0215b1f8(b, c, 0x14, 0xc, 2, 2, 0);
    uint32_t s1c = func_ov003_0215b394(b, 0x1d, 1, 0x1000, e, 0, 0);
    uint32_t s20 = func_02021610(data_0209e074, 0);
    uint32_t s84 = func_ov003_0215b394(b, 0x1c, 1, 0x1000, e, 0, 0);

    func_02056bc0(obj, (void *)s84);
    func_02056bc0(obj, (void *)s20);
    func_02056bc0(obj, d);
    func_02056bc0(obj, (void *)s1c);
    func_02056bc0(obj, (void *)r7);
    func_02056bc0(obj, (void *)s18);
    func_02056bc0(obj, (void *)s14);
    func_02056bc0(obj, (void *)s10);
    return obj;
}
