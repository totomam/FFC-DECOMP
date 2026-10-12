#include "ffc/types.h"

extern void *data_0213df18;
extern char data_ov003_02179e24[];
extern char data_ov003_02179e64[];
extern char data_ov003_02179e84[];
extern uint32_t func_0204f7d4(const void *object);
extern void func_02056c9c(void *a, uint32_t b);
extern void *func_0203b67c(void);
extern void *func_0203b6f0(void);
extern void func_02056bc0(void *object, void *node);

uint8_t *func_ov003_021521dc(uint8_t *p, uint32_t x)
{
    void *a4;
    uint8_t *p6;
    uint8_t *q;
    uint32_t r = func_0204f7d4(data_0213df18);
    func_02056c9c(p, r);
    *(void **)(p + 0x80) = data_ov003_02179e24;
    *(void **)p = data_ov003_02179e64;
    *(void **)(p + 0x80) = data_ov003_02179e84;
    *(uint32_t *)(p + 0x84) = x;
    *(uint32_t *)(p + 0x88) = 0;
    *(uint32_t *)(p + 0xa8) = 0;
    p[0xac] = 0;
    *(void **)(p + 0xa0) = func_0203b67c();
    q = (uint8_t *)func_0203b6f0();
    *(void **)(p + 0xa4) = q;
    p6 = p + 0x48;
    q[0x12] = (uint8_t)((q[0x12] & 0xffffff00u) | 1u);
    a4 = *(void **)(p + 0xa4);
    func_02056bc0(p6, *(void **)(p + 0xa0));
    func_02056bc0(p6, a4);
    return p;
}
