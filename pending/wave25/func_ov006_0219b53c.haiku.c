#include "ffc/types.h"

extern void func_ov006_0219b5a8(void);
extern uint32_t func_0208d320(void *p);
extern void func_ov006_0219c99c(uint32_t a, uint32_t b);
extern uint32_t func_0208ea60(void *p, uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern uint16_t data_ov006_021b8af0[];

void func_ov006_0219b53c(void)
{
    uint32_t r;
    r = func_0208d320((void *)func_ov006_0219b5a8);
    func_ov006_0219c99c(0x80, r);
    r = func_0208ea60((void *)func_ov006_0219b5a8,
                      data_ov006_021b8af0[2],
                      data_ov006_021b8af0[1],
                      data_ov006_021b8af0[3],
                      data_ov006_021b8af0[0]);
    func_ov006_0219c99c(0x1d, r);
}
