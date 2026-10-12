#include "ffc/types.h"

extern void func_0203758c(void *obj);
extern void func_020213f0(uint32_t a);
extern void *func_0205681c(uint32_t a);
extern void *func_0203a604(void *a, uint32_t b);
extern void func_02056bc0(void *object, void *node);
extern uint32_t data_020b01dc[2];

void func_0204a710(uint8_t *p)
{
    void *node;
    uint32_t lo;
    uint32_t hi;

    func_0203758c(p);
    func_020213f0(0x32);
    node = func_0205681c(0x32 + 0xea);
    if (node != 0) {
        node = func_0203a604(node, 1);
    }
    func_02056bc0(p + 0x14, node);
    lo = data_020b01dc[0];
    hi = data_020b01dc[1];
    *(uint32_t *)(p + 0x80) = lo;
    *(uint32_t *)(p + 0x84) = hi;
}
