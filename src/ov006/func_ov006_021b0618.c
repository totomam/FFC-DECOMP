#include "ffc/types.h"

extern uint8_t *data_ov006_021bc7e8;
extern void func_02079a7c(void *a, void *b);

void func_ov006_021b0618(void *p)
{
    func_02079a7c(data_ov006_021bc7e8 + 0xa0, p);
}
