#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
    uint32_t c;
    uint32_t d;
} Args;

extern void func_ov006_021b49fc(void *p);
extern void func_ov006_021b3f0c(uint32_t ctx, uint32_t v);
extern uint8_t *data_ov006_021bc80c;

void func_ov006_021b392c(Args s)
{
    func_ov006_021b49fc(&s);
    func_ov006_021b3f0c(*(uint32_t *)(data_ov006_021bc80c + 0x84), s.a);
}
