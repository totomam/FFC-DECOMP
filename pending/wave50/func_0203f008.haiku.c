#include "ffc/types.h"

extern void *func_02056aec(void *obj);
extern void *func_0203efc8(void *x, uint32_t b, uint32_t c);
extern void *func_020424e0(uint32_t a);
extern uint32_t func_0203d8f8(void *obj, uint32_t x);
extern void *func_ov003_0214c1f0(void *a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
extern void func_02056bc0(void *object, void *node);
extern uint32_t data_020aef68[2];

void func_0203f008(void *a0)
{
    uint8_t *p = (uint8_t *)a0;
    uint32_t *d = data_020aef68;
    void *r4 = func_02056aec(a0);
    uint32_t lo = *d++;
    void *r6 = func_0203efc8(*(void **)(p + 0xbc), lo, *d);
    void *r7 = func_020424e0(*(uint32_t *)(p + 0x88));
    uint32_t r3 = func_0203d8f8(a0, 0x11);
    void *r0 = func_ov003_0214c1f0(r7, *(uint32_t *)(p + 0xb8), (uint16_t)*(uint32_t *)(p + 0xec), r3, 0);
    a0 = p + 0x14;
    func_02056bc0(a0, r0);
    func_02056bc0(a0, r6);
    func_02056bc0(a0, r4);
}
