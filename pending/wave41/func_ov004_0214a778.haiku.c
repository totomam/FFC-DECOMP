#include "ffc/types.h"

extern int func_ov004_02151e48(void *);
extern void func_0208763c(void *);
extern void func_02087678(void *);
extern void func_ov004_0214e84c(void *);
extern uint32_t func_ov004_0215311c(void);
extern void func_02021b48(uint32_t, uint32_t);
extern void func_ov004_02151b0c(void *);
extern void func_ov004_021509bc(void *);

void func_ov004_0214a778(void *param_1)
{
    uint8_t *self = (uint8_t *)param_1;
    uint8_t *obj;
    uint8_t flag;
    uint8_t *sub;
    int ok;
    uint32_t w;

    if (func_ov004_02151e48(*(void **)(self + 0x88)) != 0) {
        return;
    }
    obj = *(uint8_t **)(self + 0x9c);
    sub = obj + 0x1c;
    flag = obj[0x12];
    if (flag != 0) {
        func_0208763c(sub);
    }
    ok = (*(uint32_t *)(obj + 0x14) == 0);
    if (flag != 0) {
        func_02087678(sub);
    }
    if (!ok) {
        return;
    }
    func_ov004_0214e84c(*(void **)(self + 0x88));
    func_02021b48(func_ov004_0215311c(), 0x1b);
    func_ov004_02151b0c(*(void **)(self + 0x88));
    func_ov004_021509bc(*(void **)(self + 0x88));
    w = *(uint32_t *)(self + 0xc);
    w = (w & ~0xffu) | 2u;
    *(uint32_t *)(self + 0xc) = w;
}
