#include "ffc/types.h"

extern uint8_t data_ov006_021bc7c0;
extern void func_ov006_021a6508(int a, uint32_t *b);
extern int func_ov006_021a6530(void);
extern void func_ov006_021a64c8(void (*f)(void));
extern void func_ov006_021a6a00(void);
extern void func_ov006_021ae9a0(void);

void func_ov006_021aea4c(void)
{
    data_ov006_021bc7c0 = data_ov006_021bc7c0 + 1;
    if (data_ov006_021bc7c0 >= 0xb4) {
        uint32_t v;
        func_ov006_021a6508(0, &v);
        int r = func_ov006_021a6530();
        if (r != 0) {
            if (r == 1 && v != 0) {
                func_ov006_021a64c8(func_ov006_021a6a00);
                return;
            }
        }
        func_ov006_021a64c8(func_ov006_021ae9a0);
    }
}
