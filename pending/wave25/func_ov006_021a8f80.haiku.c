#include "ffc/types.h"

extern void func_ov006_021a8dd4(void);
extern void func_ov006_021a8df8(void);
extern void func_ov006_021a8dfc(void);
extern void func_ov006_021b0644(void);
extern void func_ov006_021a64c8(void (*fn)(void));
extern uint16_t data_ov006_021bc76c[];
extern void func_ov006_021a8e2c(void);

void func_ov006_021a8f80(void)
{
    func_ov006_021a8dd4();
    func_ov006_021a8df8();
    func_ov006_021a8dfc();
    data_ov006_021bc76c[1]++;
    if (data_ov006_021bc76c[1] >= 0x438) {
        func_ov006_021b0644();
        func_ov006_021a64c8(func_ov006_021a8e2c);
    }
}
