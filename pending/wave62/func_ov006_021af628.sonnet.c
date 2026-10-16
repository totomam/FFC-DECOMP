#include "ffc/types.h"
typedef struct { uint32_t a; uint32_t b; uint32_t c; uint32_t d; } S;
extern S *data_ov006_021bc7dc;
extern void func_ov006_021b578c(int, uint32_t);
extern void func_ov006_021b3b9c(uint32_t);
extern void func_ov006_021b49fc(void *);
void func_ov006_021af628(void) {
    func_ov006_021b578c(0, data_ov006_021bc7dc->d);
    func_ov006_021b3b9c(data_ov006_021bc7dc->a);
    func_ov006_021b49fc(&data_ov006_021bc7dc);
}
