#include "ffc/types.h"

typedef struct {
    uint8_t b[4];
} Bytes4;

extern void func_ov006_021af520(uint32_t a, uint8_t b, uint8_t c);
extern Bytes4 data_ov006_021b8824;
extern uint8_t data_ov006_021bc7b4[];

void func_ov006_021ae5dc(void)
{
    Bytes4 local;
    uint8_t v;
    local = data_ov006_021b8824;
    v = local.b[(int8_t)data_ov006_021bc7b4[1]];
    func_ov006_021af520(*(uint32_t *)(data_ov006_021bc7b4 + 4), v, v);
}
