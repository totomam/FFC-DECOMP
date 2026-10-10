#include "ffc/types.h"

extern void func_ov006_021b392c(void *p);
extern void func_ov006_021b3f0c(void *a, void *b);
extern uint8_t *data_ov006_021bc72c;

void func_ov006_021a65f8(uint8_t *p)
{
    func_ov006_021b392c(*(void **)(p + 8));
    func_ov006_021b3f0c(*(void **)(data_ov006_021bc72c + 0x60), p);
}
