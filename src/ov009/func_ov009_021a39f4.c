#include "ffc/types.h"

extern void *func_0203b688(void *owner);
extern void *func_02056b10(void *owner);
extern uint32_t *func_0205681c(uint32_t size);
extern void func_02056bc0(void *object, void *node);
extern char data_ov009_021b0738[];

void *func_ov009_021a39f4(void *a0)
{
    void *r4 = func_0203b688(a0);
    void *r6 = func_02056b10((uint8_t *)a0 + 0x14);
    uint32_t *p = func_0205681c(0x18);
    if (p) {
        p[3] &= ~0xffu;
        p[0] = (uint32_t)data_ov009_021b0738;
        p[5] = (uint32_t)a0;
    }
    func_02056bc0(r4, p);
    func_02056bc0(r4, r6);
    return r4;
}
