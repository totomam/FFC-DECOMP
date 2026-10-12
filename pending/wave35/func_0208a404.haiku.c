#include "ffc/types.h"

extern uint8_t data_020a5e80[];

uint16_t func_0208a404(int32_t x)
{
    int32_t cat;
    uint8_t v;

    if (x < -723) {
        x = -723;
    } else if (x > 0) {
        x = 0;
    }
    v = data_020a5e80[x + 723];

    if (x < -240) {
        cat = 3;
    } else if (x < -120) {
        cat = 2;
    } else if (x < -60) {
        cat = 1;
    } else {
        cat = 0;
    }
    return (uint16_t)((cat << 8) | v);
}
