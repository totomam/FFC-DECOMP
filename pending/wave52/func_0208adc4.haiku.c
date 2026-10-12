#include "ffc/types.h"

extern uint16_t data_021434e4[];
extern int32_t data_02143500[];
extern int64_t func_0209a71c(int64_t first, int64_t second);

void func_0208adc4(uint16_t *out, uint16_t *in) {
    int64_t r;
    int32_t a;

    if (data_021434e4[26] == 0) {
        out[0] = in[0];
        out[1] = in[1];
        out[2] = in[2];
        out[3] = in[3];
        return;
    }
    out[2] = in[2];
    out[3] = in[3];
    if (in[2] == 0) {
        out[0] = 0;
        out[1] = 0;
        return;
    }
    a = (int32_t)in[0] * 4;
    r = func_0209a71c((int64_t)data_02143500[2], (int64_t)a - (int64_t)data_02143500[0]);
    out[0] = (uint16_t)(r >> 22);
    if ((int16_t)out[0] < 0) {
        out[0] = 0;
    } else if ((int16_t)out[0] > 0xff) {
        out[0] = 0xff;
    }

    a = (int32_t)in[1] * 4;
    r = func_0209a71c((int64_t)data_02143500[5], (int64_t)a - (int64_t)data_02143500[3]);
    out[1] = (uint16_t)(r >> 22);
    if ((int16_t)out[1] < 0) {
        out[1] = 0;
        return;
    }
    if ((int16_t)out[1] > 0xbf) {
        out[1] = 0xbf;
    }
}
