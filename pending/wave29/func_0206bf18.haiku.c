#include "ffc/types.h"

extern uint32_t data_0213e170[];

uint32_t func_0206bf18(void) {
    uint32_t *p = (uint32_t *)data_0213e170[0] + 5;
    uint32_t y = 0;
    int i;
    uint32_t c;

    for (i = 0; i < 624; i++) {
        uint32_t t = *p;
        y = t ^ ((y << 1) | (y >> 31));
        p++;
    }

    c = data_0213e170[1];
    data_0213e170[1] = c + 1;
    return y + c;
}
