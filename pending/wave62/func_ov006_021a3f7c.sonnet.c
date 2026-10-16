#include "ffc/types.h"
typedef struct S { uint32_t a; uint32_t b; } S;
extern S *data_ov006_021bc6f8;
extern void func_ov006_021b578c(int, uint32_t);
extern void func_ov006_021b51a8(uint32_t);
extern void func_ov006_021b49fc(S **);
void func_ov006_021a3f7c(void) {
    if (data_ov006_021bc6f8 != 0) {
        func_ov006_021b578c(0, data_ov006_021bc6f8->b);
        func_ov006_021b51a8(data_ov006_021bc6f8->a);
        func_ov006_021b49fc(&data_ov006_021bc6f8);
    }
}
