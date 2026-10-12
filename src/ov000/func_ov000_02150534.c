#include "ffc/types.h"

extern uint8_t *func_ov000_0214fa54(int32_t a);
extern uint8_t data_ov000_0216e254;
extern uint8_t data_ov000_0216e255[];

void func_ov000_02150534(int32_t a) {
    uint8_t *s = func_ov000_0214fa54(a);
    uint32_t r;
    uint8_t v;
    int idx;

    if (s[0x12df] == 1) {
        goto comp;
    }
    if (s[0x12df] == 2) {
        goto store;
    }
comp:
    if (a & 2) {
        r = (uint32_t)a << 22;
    } else {
        r = (uint32_t)((a >> 2) + 25) << 24;
    }
    a = (int32_t)(r >> 24);
store:
    v = (uint8_t)a;
    idx = data_ov000_0216e254;
    data_ov000_0216e255[idx % 16] = v;
    if ((uint32_t)idx >= 16u) {
        data_ov000_0216e254 = (uint8_t)((idx + 1) % 16 + 16);
    } else {
        data_ov000_0216e254 = (uint8_t)(idx + 1);
    }
}
