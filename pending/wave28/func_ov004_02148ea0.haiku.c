#include "ffc/types.h"

extern uint8_t data_ov004_02158598[];
extern void func_020887fc(void *p);
extern void func_0209d02c(void *p, int n, int sz, void (*f)(void));
extern void func_02056db0(void *p);
extern void func_02056844(void *p);
extern void func_0205d620(void);

void *func_ov004_02148ea0(void *p)
{
    uint8_t *r7 = (uint8_t *)p;
    uint8_t *r4;
    int i;

    *(uint8_t **)r7 = data_ov004_02158598;
    r4 = r7 + 0x158;
    for (i = 0; i < 3; i++) {
        func_020887fc(r4 + i * 0x28);
    }
    func_0209d02c(r7 + 0xb0, 3, 0x38, func_0205d620);
    func_02056db0(r7);
    func_02056844(r7);
    return r7;
}
