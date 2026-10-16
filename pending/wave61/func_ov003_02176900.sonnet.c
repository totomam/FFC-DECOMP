#include "ffc/types.h"
extern uint32_t data_ov003_0217bab8;
extern void func_0206047c(void*);
extern void func_02060e88(void*, int);
extern void func_02060ea4(void*, int);
extern void func_02059698(void*, uint32_t);
extern void func_ov003_02148fac(void*);
extern void func_02056db0(void*);
void* func_ov003_02176900(uint8_t* self) {
    *(uint32_t**)self = &data_ov003_0217bab8;
    func_0206047c(*(void**)(*(uint8_t**)(self + 0xa0) + 0x20));
    func_02060e88(*(void**)(*(uint8_t**)(self + 0xa0) + 0x24), 2);
    func_02060ea4(*(void**)(*(uint8_t**)(self + 0xa0) + 0x24), 0x10);
    func_02059698(*(void**)(*(uint8_t**)(self + 0xa0) + 0x14), *(uint32_t*)(self + 0x84));
    **(uint32_t**)(*(uint8_t**)(self + 0x80) + 0x214) = 0;
    {
        uint32_t* q = *(uint32_t**)(*(uint8_t**)(self + 0x80) + 0x188);
        q[3] &= ~0xff;
    }
    func_ov003_02148fac(*(void**)(self + 0x80));
    func_02056db0(self);
    return self;
}
