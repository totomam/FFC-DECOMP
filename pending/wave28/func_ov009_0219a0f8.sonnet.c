#include "ffc/types.h"

extern uint32_t data_ov009_021af7e8[];
extern uint32_t data_ov009_021af7ec[];
extern uint32_t data_ov009_021af7c0[];

uint32_t func_ov009_0219a0f8(uint32_t a)
{
    uint32_t i;
    for (i = 0; i < 5; i++) {
        uint32_t prev = (uint32_t)-1;
        uint32_t key = data_ov009_021af7e8[i * 2];
        if (a == key || key == prev) {
            return data_ov009_021af7ec[i * 2];
        }
    }
    return data_ov009_021af7c0[11];
}
