#include "ffc/types.h"

extern uint32_t func_0209a978(uint32_t a, uint32_t b);

typedef struct {
    uint32_t t[9];
} Tbl;

extern Tbl data_0209e548;

int func_0204aef4(uint8_t *buf, uint32_t v) {
    Tbl tbl = data_0209e548;
    int pos = 0;
    uint32_t flag = 0;
    int i;

    for (i = 0; i < 9; i++) {
        uint32_t d = tbl.t[i];
        if (v >= d) {
            uint32_t q = func_0209a978(v, d);
            v -= q * d;
            flag = 1;
            buf[pos] = q + 0x30;
            pos++;
        } else if (flag) {
            buf[pos] = 0x30;
            pos++;
        }
    }
    buf[pos] = v + 0x30;
    return pos + 1;
}
