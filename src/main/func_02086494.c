#include "ffc/types.h"

extern uint16_t data_020b2b14[];
extern uint8_t data_02141458[];
extern uint8_t data_02141460[];
extern uint8_t data_0214145c[];
extern uint8_t data_02fe0000[];
extern void func_02086700(uint32_t mask);

void func_02086494(uint32_t idx)
{
    uint32_t mask = 1u << data_020b2b14[idx];
    uint32_t off = idx * 12;
    void (*cb)(uint32_t) = *(void (**)(uint32_t))(data_02141458 + off);
    *(uint32_t *)(data_02141458 + off) = 0;
    if (cb != 0) {
        cb(*(uint32_t *)(data_02141460 + off));
    }
    *(volatile uint32_t *)((uint32_t)data_02fe0000 + 0x3ff8u) |= mask;
    if (*(uint32_t *)(data_0214145c + off) == 0) {
        func_02086700(mask);
    }
}
