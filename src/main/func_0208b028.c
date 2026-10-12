#include "ffc/types.h"

extern uint32_t data_02143520;

typedef void (*cb_t)(uint32_t, uint32_t);

void func_0208b028(int p0, uint32_t a, int flag)
{
    uint32_t *d = (uint32_t *)&data_02143520;
    uint32_t cls;
    uint32_t code;
    cb_t f;

    if (flag) {
        if (d[1]) {
            d[1] = 0;
        }
        f = (cb_t)d[2];
        if (f) {
            d[2] = 0;
            f(6, d[3]);
        }
    }

    code = ((a & 0x7f00) << 8) >> 16;

    switch ((uint16_t)((a << 24) >> 24)) {
    case 0: cls = 0; break;
    case 1: cls = 4; break;
    case 2: cls = 2; break;
    case 3: cls = 5; break;
    case 4: cls = 1; break;
    default: cls = 6; break;
    }

    if (code == 0x51) {
        f = (cb_t)d[5];
        if (f) {
            f(cls, d[6]);
        }
        return;
    }

    if (code == 0x40) {
        uint16_t *q = (uint16_t *)d[7];
        if (q) {
            *q = *(uint16_t *)0x02ffff94;
        }
    }

    if (d[1]) {
        d[1] = 0;
    }
    f = (cb_t)d[2];
    if (f) {
        d[2] = 0;
        f(cls, d[3]);
    }
}
