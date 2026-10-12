#include "ffc/types.h"
extern uint32_t data_ov006_021b57d8[];
extern int32_t func_ov006_0219ace4(uint32_t idx);

int32_t func_ov006_0219ad60(uint32_t idx, uint32_t a, uint32_t b) {
    uint32_t s = data_ov006_021b57d8[idx];
    uint32_t end;
    if (s == 0) {
        goto call;
    }
    if (s != 1) {
        if (s != 2) {
            return 0;
        }
        goto call;
    }
    if (a < 0x02000000) {
        goto out;
    }
    if (a >= 0x023fe800) {
        goto out;
    }
    end = a + b;
    if (a >= 0x02300000) {
        goto m;
    }
    if (end <= 0x02300000) {
        goto m;
    }
    return 0;
m:
    if (end > 0x02300000) {
        if (end >= 0x023fe800) {
            return 0;
        }
        if (b > 0x40000) {
            return 0;
        }
        return 1;
    }
    return 1;
out:
    if (a < 0x03040000) {
        return 0;
    }
    if (a >= 0x03057000) {
        return 0;
    }
    end = a + b;
    if (end > 0x03057000) {
        return 0;
    }
    return 1;
call:
    return func_ov006_0219ace4(idx);
}
