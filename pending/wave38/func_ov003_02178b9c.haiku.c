#include "ffc/types.h"

extern void func_02056bf4(void *a, void *b);
extern void func_0204e7ac(void *a);
extern uint8_t *data_0213df18;

void func_ov003_02178b9c(uint8_t *self, uint32_t idx)
{
    void **slots = (void **)(self + 0x8c);
    volatile uint8_t saved;
    uint8_t f;
    uint16_t old;
    void **vt;

    if (slots[idx] == 0) {
        return;
    }
    f = 0;
    old = *(volatile uint16_t *)0x4000208;
    *(volatile uint16_t *)0x4000208 = f;
    if (old != 0) {
        f = 1;
    }
    saved = f;
    func_02056bf4(self + 0x48, slots[idx]);
    vt = *(void ***)slots[idx];
    ((void (*)(void *))vt[11])(slots[idx]);
    if (slots[idx] != 0) {
        vt = *(void ***)slots[idx];
        ((void (*)(void *))vt[1])(slots[idx]);
    }
    slots[idx] = 0;
    func_0204e7ac(*(void **)(data_0213df18 + 0x24));
    *(volatile uint16_t *)0x4000208 = saved;
}
