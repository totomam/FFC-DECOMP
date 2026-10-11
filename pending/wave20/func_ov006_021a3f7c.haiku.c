#include "ffc/types.h"

extern void *data_ov006_021bc6f8;
extern void func_ov006_021b578c(int a, void *b);
extern void func_ov006_021b51a8(void *p);
extern void func_ov006_021b49fc(void *p);

void func_ov006_021a3f7c(void)
{
    if (data_ov006_021bc6f8 != 0) {
        func_ov006_021b578c(0, ((void **)data_ov006_021bc6f8)[1]);
        func_ov006_021b51a8(((void **)data_ov006_021bc6f8)[0]);
        func_ov006_021b49fc(&data_ov006_021bc6f8);
    }
}
