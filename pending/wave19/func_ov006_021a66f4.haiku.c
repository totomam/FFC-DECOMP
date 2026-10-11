#include "ffc/types.h"

extern int func_ov006_021b2d28(void);
extern void func_ov006_021b5774(uint32_t a, void *b);
extern uint8_t *data_ov006_021bc730;

void func_ov006_021a66f4(void *p)
{
    if (func_ov006_021b2d28() != 0) {
        data_ov006_021bc730[0x1e2a1] = 1;
        func_ov006_021b5774(0, p);
    }
}
