#include "ffc/types.h"

extern void func_ov006_021a3b28(void);
extern void func_ov006_021b51a8(uint32_t);
extern void func_ov006_021b4488(uint32_t);
extern void func_ov006_021a3b88(void *, void *);
extern void func_ov006_021b4734(uint32_t, uint32_t);
extern void func_ov006_021a6508(int32_t *, uint32_t);
extern void func_ov006_021a64d4(uint32_t, uint32_t);
extern void func_ov006_021a64fc(uint32_t, uint32_t);
extern void func_ov006_021a64c8(void *);
extern void func_ov006_021b49fc(void *);
extern void func_0208243c(void);
extern void func_ov006_021ab254(void);
extern uint32_t *data_ov006_021bc784;
extern uint8_t data_ov006_021b95bc[];

void func_ov006_021aab10(void)
{
    int32_t x;

    func_ov006_021a3b28();
    func_ov006_021b51a8(data_ov006_021bc784[1]);
    func_ov006_021b4488(0);
    func_ov006_021a3b88(data_ov006_021b95bc, func_0208243c);
    func_ov006_021b4734(1, 1);
    func_ov006_021b4734(0, 0x15);
    func_ov006_021a6508(&x, 0);
    if (x >= 3) {
        x = x + 1;
    }
    func_ov006_021a64d4(2, 1);
    func_ov006_021a64fc(0, x + 3);
    func_ov006_021a64c8(func_ov006_021ab254);
    func_ov006_021b49fc((void *)&data_ov006_021bc784);
}
