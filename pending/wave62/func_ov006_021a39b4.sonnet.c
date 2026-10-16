#include "ffc/types.h"
typedef struct S { void *a[2]; void *f8; void *fc; void *f10; } S;
extern S *data_ov006_021bc6a8;
extern void func_ov006_021b5774(int, void *);
extern void func_ov006_021b3b9c(void *);
extern void func_ov006_021b49fc(void *);
void func_ov006_021a39b4(void *p) {
    int i = 0;
    func_ov006_021b5774(0, p);
    if (data_ov006_021bc6a8->f10 != 0) func_ov006_021b5774(i, data_ov006_021bc6a8->f10);
    for (i = 0; i < 2; i++) {
        if (data_ov006_021bc6a8->a[i] != 0) func_ov006_021b3b9c(data_ov006_021bc6a8->a[i]);
    }
    func_ov006_021b3b9c(data_ov006_021bc6a8->f8);
    func_ov006_021b49fc(&data_ov006_021bc6a8);
}
