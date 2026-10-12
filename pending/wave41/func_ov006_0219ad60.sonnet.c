#include "ffc/types.h"
extern uint32_t data_ov006_021b57d8[];
extern int32_t func_ov006_0219ace4(uint32_t idx);

int32_t func_ov006_0219ad60(uint32_t idx, uint32_t a, uint32_t b) {
    uint32_t end;
    uint32_t s = data_ov006_021b57d8[idx];
    if (s == 0) goto call;
    if (s == 1) goto one;
    if (s != 2) goto zero;
call:
    return func_ov006_0219ace4(idx);
one:
    if (a >= 0x02000000 && a < 0x023fe800) {
        end = a + b;
        if (a < 0x02300000 && end > 0x02300000) {
            return 0;
        }
        if (end <= 0x02300000) {
            return 1;
        }
        if (end < 0x023fe800 && b <= 0x40000) {
            return 1;
        }
        return 0;
    }
    if (a >= 0x03040000 && a < 0x03057000) {
        end = a + b;
        if (end <= 0x03057000) {
            return 1;
        }
        return 0;
    }
    goto fin;
zero:
    return 0;
fin:
    return 0;
}
