#include "ffc/types.h"

extern uint32_t func_0203b6fc(void);
extern uint32_t func_0201af34(uint32_t a);
extern void func_0201af7c(uint32_t a, uint32_t b, uint32_t *c);
extern void func_02021240(int a, int b);
extern uint32_t func_0203c0a8(int a);
extern uint32_t func_0203c094(int a);
extern uint32_t func_0203c058(int a);
extern uint32_t func_0203c044(int a);
extern void func_02056bc0(void *object, uint32_t node);
extern uint32_t func_02056aec(void *o);

extern uint32_t data_020b93b8;

void func_ov007_0219dc04(uint8_t *p)
{
    uint32_t local[11];
    uint32_t r4, r6, r0;
    uint32_t *g;
    int v;

    v = 2;
    *(uint32_t *)(*(uint32_t *)(p + 0x88)) = v;
    r4 = func_0203b6fc();
    g = &data_020b93b8;
    r0 = func_0201af34(*g);
    func_0201af7c(*g, r0, local);
    if ((local[5] << 30) >> 31) {
        func_02021240(v - 3, 30);
        r6 = func_0203c0a8(60);
        r0 = func_0203c094(60);
    } else {
        r6 = func_0203c058(60);
        r0 = func_0203c044(60);
    }
    func_02056bc0(r4, r0);
    func_02056bc0(r4, r6);
    func_02056bc0(p + 0x14, r4);
    r0 = func_02056aec(p);
    func_02056bc0(p + 0x14, r0);
}
