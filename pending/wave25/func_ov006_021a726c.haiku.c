#include "ffc/types.h"

extern int func_ov006_021b1420(void);
extern void func_ov006_021b0600(int x);
extern void func_ov006_021b13f8(void);
extern void func_ov006_021a64c8(void *fn);
extern uint8_t data_ov006_021bc744;
extern void func_ov006_021a72a4(void);

void func_ov006_021a726c(void)
{
    int r = func_ov006_021b1420();
    if (r != 0) {
        if (r != 1) {
            return;
        }
        func_ov006_021b0600(14);
        data_ov006_021bc744 = 1;
    } else {
        func_ov006_021b0600(7);
    }
    func_ov006_021b13f8();
    func_ov006_021a64c8(func_ov006_021a72a4);
}
