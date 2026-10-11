#include "ffc/types.h"

extern int func_ov006_021a3744(void);
extern void func_ov006_021b5774(int arg);
extern void func_ov006_021a37a8(void);
extern void func_ov006_021a64c8(void *fn);
extern void func_ov006_021a8fb8(void);
extern uint32_t data_ov006_021bc76c[];

void func_ov006_021a8dfc(void)
{
    if (func_ov006_021a3744() != 0) {
        return;
    }
    if (data_ov006_021bc76c[1] == 0) {
        return;
    }
    func_ov006_021b5774(1);
    data_ov006_021bc76c[1] = 0;
    func_ov006_021a37a8();
    func_ov006_021a64c8((void *)func_ov006_021a8fb8);
}
