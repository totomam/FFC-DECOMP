#include "ffc/types.h"
typedef struct { uint32_t a; uint32_t b; } S;
extern S *data_ov006_021bc6a4;
extern void func_ov006_021b578c(int a, uint32_t b);
extern void func_ov006_021b51a8(uint32_t a);
extern void func_ov006_021b49fc(void *a);
void func_ov006_021a35d8(void) {
    func_ov006_021b578c(1, data_ov006_021bc6a4->a);
    func_ov006_021b51a8(data_ov006_021bc6a4->b);
    func_ov006_021b49fc(&data_ov006_021bc6a4);
}
