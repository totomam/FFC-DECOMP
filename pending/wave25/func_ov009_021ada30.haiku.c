#include "ffc/types.h"

extern uint8_t func_ov009_021ad914(void *p);
extern void func_ov009_021a4700(void *p, uint8_t i);

void func_ov009_021ada30(uint8_t *p)
{
    uint8_t i;

    p[0x27f] = func_ov009_021ad914(p);
    for (i = 0; i < 10; i++) {
        func_ov009_021a4700(p, i);
    }
}
