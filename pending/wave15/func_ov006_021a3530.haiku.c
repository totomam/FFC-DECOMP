#include "ffc/types.h"

extern void func_ov006_021a34e4(void *p);
extern uint32_t data_ov006_021bb170[];

void func_ov006_021a3530(void)
{
    uint32_t buf[3];
    func_ov006_021a34e4(buf);
    ((void (*)(void *))((uint32_t *)data_ov006_021bb170)[0x7c / 4])(buf);
}
