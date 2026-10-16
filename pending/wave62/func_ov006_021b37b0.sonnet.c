#include "ffc/types.h"
extern void func_0207eb44(void*);
extern void func_0207fbb0(void*);
extern void func_0207fa7c(void*);
extern void func_0207e558(void*);
extern void func_02086aa4(int32_t);
extern void func_ov006_021b49fc(void*);
extern uint8_t data_ov006_021ba044[];
extern uint8_t *data_ov006_021bc80c;
void func_ov006_021b37b0(void) {
    func_0207eb44(data_ov006_021ba044);
    func_0207fbb0(data_ov006_021bc80c + 0x88);
    func_0207fa7c(data_ov006_021bc80c + 0x88);
    func_0207e558(data_ov006_021bc80c + 0x88);
    func_02086aa4(*(uint16_t*)(data_ov006_021bc80c + 0xe4));
    *(uint16_t*)(data_ov006_021bc80c + 0xe4) = 0;
    func_ov006_021b49fc(data_ov006_021bc80c);
    *(uint32_t*)data_ov006_021bc80c = 0;
    func_ov006_021b49fc(&data_ov006_021bc80c);
}
