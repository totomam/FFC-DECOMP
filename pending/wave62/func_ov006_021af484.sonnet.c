#include "ffc/types.h"
extern void func_ov006_021b578c(int a, int b);
extern void func_ov006_021b49fc(void *p);
extern int *data_ov006_021bc7d0;
void func_ov006_021af484(void) {
    func_ov006_021b578c(1, *data_ov006_021bc7d0);
    func_ov006_021b49fc(&data_ov006_021bc7d0);
}
