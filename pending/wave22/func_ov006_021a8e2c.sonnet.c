#include "ffc/types.h"

extern void func_ov006_021a37a8(void);
extern void func_ov006_021b578c(int32_t);
extern void func_ov006_021b4100(int32_t);
extern void func_ov006_021a64c8(void *);
extern void func_ov006_021a8e58(void);
extern uint32_t data_ov006_021bc76c[];

void func_ov006_021a8e2c(void) {
    func_ov006_021a37a8();
    if (data_ov006_021bc76c[1] != 0) {
        func_ov006_021b578c(1);
    }
    func_ov006_021b4100(8);
    func_ov006_021a64c8(func_ov006_021a8e58);
}
