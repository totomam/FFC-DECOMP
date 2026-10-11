#include "ffc/types.h"

extern void *func_02056aec(void);
extern void *func_0205681c(uint32_t size);
extern uint32_t func_020424e0(uint32_t x);
extern void *func_ov003_021772a0(void *p, uint32_t a, uint32_t b);
extern void func_02056bc0(void *object, void *node);

void func_ov003_02169570(uint8_t *p)
{
    void *r6 = func_02056aec();
    void *r4 = func_0205681c(0x88);
    if (r4 != 0) {
        uint32_t v = func_020424e0(*(uint32_t *)(p + 0x80));
        r4 = func_ov003_021772a0(r4, v, *(uint32_t *)(p + 0x84));
    }
    p = (uint8_t *)((uint32_t)p + 0x14);
    func_02056bc0(p, r4);
    func_02056bc0(p, r6);
}
