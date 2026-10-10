#include "ffc/types.h"

extern uint8_t data_ov006_021bc75c;
extern void func_ov006_021a831c(void);
extern void func_ov006_021a3bfc(uint32_t);
extern void func_ov006_021a64c8(void *);
extern void func_ov006_021a8364(void);

void func_ov006_021a82f8(void)
{
    data_ov006_021bc75c = 0;
    func_ov006_021a831c();
    func_ov006_021a3bfc(0x21);
    func_ov006_021a64c8((void *)func_ov006_021a8364);
}
