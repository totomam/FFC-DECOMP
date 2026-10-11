#include "ffc/types.h"

extern void func_ov006_021b5064(uint32_t);
extern void func_ov006_021b3ef8(uint32_t);
extern void func_ov006_021b49fc(uint8_t **);
extern uint8_t *data_ov006_021bc810;

void func_ov006_021b3a58(void)
{
    int i;
    uint32_t off;
    for (i = 0; i < 2; i++) {
        off = i * 0x228;
        func_ov006_021b5064(*(uint32_t *)(data_ov006_021bc810 + off + 0x220));
        func_ov006_021b3ef8(*(uint32_t *)(data_ov006_021bc810 + off + 0x224));
    }
    func_ov006_021b49fc(&data_ov006_021bc810);
}
