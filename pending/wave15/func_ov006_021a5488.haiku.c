#include "ffc/types.h"

extern uint8_t *data_ov006_021bc700;
extern void func_ov006_021b3b9c(void *p);
extern void func_ov006_021b5770(void *p, void *f);
extern void func_ov006_021a5e18(void);

void func_ov006_021a5488(void)
{
    func_ov006_021b3b9c(*(void **)(data_ov006_021bc700 + 0x58));
    func_ov006_021b5770(*(void **)(data_ov006_021bc700 + 0x5c), (void *)func_ov006_021a5e18);
}
