#include "ffc/types.h"

typedef struct { uint32_t a, b; } S;
extern void *func_0203b6fc(void);
extern void *func_0203b72c(void);
extern uint32_t func_ov012_021d223c(void *a, S s, void *b);
extern void func_02056bc0(void *object, void *node);
extern S data_ov012_021d4678;

void func_ov012_021d2200(void *param_a, void *param_b)
{
    void *r4 = func_0203b6fc();
    uint32_t r1 = func_ov012_021d223c(param_a, data_ov012_021d4678, param_b);
    func_02056bc0(r4, (void *)r1);
    void *r0 = func_0203b72c();
    uint8_t *r5 = (uint8_t *)param_a + 0x14;
    func_02056bc0(r5, r0);
    func_02056bc0(r5, r4);
}
