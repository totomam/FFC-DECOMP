#include "ffc/types.h"
extern int func_02086700(int a);
extern void func_02077fd8(int a);
extern void func_020866dc(int a);
extern int data_ov006_021bc824;
void func_ov006_021b49fc(int *p) {
    int r = func_02086700(1);
    if (*p != 0) {
        func_02077fd8(data_ov006_021bc824);
        func_020866dc(r);
        *p = 0;
    }
}
