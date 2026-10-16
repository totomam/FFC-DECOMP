#include "ffc/types.h"
extern uint8_t *data_ov006_021bc810;
extern void func_ov006_021b5064(void *);
extern void func_ov006_021b3ef8(void *);
extern void func_ov006_021b49fc(void *);
void func_ov006_021b3a58(void)
{
    int i;
    for (i = 0; i < 2; i++) {
        func_ov006_021b5064(*(void **)(data_ov006_021bc810 + i * 552 + 0x220));
        func_ov006_021b3ef8(*(void **)(data_ov006_021bc810 + i * 552 + 0x224));
    }
    func_ov006_021b49fc(&data_ov006_021bc810);
}
