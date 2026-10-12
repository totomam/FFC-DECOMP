#include "ffc/types.h"

extern void *func_02056aec(void);
extern void *func_020215a4(uint32_t a, uint32_t b);
extern void *func_0203b708(uint32_t a);
extern void func_02056bc0(void *object, void *node);

void func_0203aa38(uint8_t *p)
{
    void *n4 = func_02056aec();
    void *n6 = func_020215a4(0xFFFFFFFFu, 0x19);
    void *n0 = func_0203b708(0x1e);
    uint8_t *o = p + 0x14;
    func_02056bc0(o, n0);
    func_02056bc0(o, n6);
    func_02056bc0(o, n4);
}
