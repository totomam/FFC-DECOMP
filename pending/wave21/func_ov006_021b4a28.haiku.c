#include "ffc/types.h"

extern void *func_02086700(int32_t x);
extern void func_02077fd8(void *a, void *b);
extern void func_020866dc(void *p);
extern void *data_ov006_021bc824;

void func_ov006_021b4a28(void *p)
{
    void *r = func_02086700(1);
    if (p != 0) {
        func_02077fd8(data_ov006_021bc824, p);
        func_020866dc(r);
    }
}
