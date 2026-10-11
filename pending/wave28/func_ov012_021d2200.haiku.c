#include "ffc/types.h"

extern void *func_0203b6fc(void);
extern void *func_0203b72c(void);
extern uint32_t func_ov012_021d223c(void *a, uint32_t x, uint32_t y, void *b);
extern void func_02056bc0(void *object, void *node);
extern uint32_t data_ov012_021d4678[2];

void func_ov012_021d2200(void *param_a, void *param_b)
{
    void *r4 = func_0203b6fc();
    uint32_t r1 = func_ov012_021d223c(param_a, data_ov012_021d4678[0], data_ov012_021d4678[1], param_b);
    func_02056bc0(r4, (void *)r1);
    void *r0 = func_0203b72c();
    uint8_t *r5 = (uint8_t *)param_a + 0x14;
    func_02056bc0(r5, r0);
    func_02056bc0(r5, r4);
}
