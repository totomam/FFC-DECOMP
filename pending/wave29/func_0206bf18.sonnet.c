#include "ffc/types.h"

extern uint32_t data_0213e170[];

uint32_t func_0206bf18(void) {
    int i; uint32_t y; uint32_t *p; uint32_t c;

    p = (uint32_t *)data_0213e170[0] + 5;
    for (y = 0, i = 0; i < 624; i++, p++) {
        y = *p ^ ((y << 1) | (y >> 31));
    }

    c = data_0213e170[1];
    data_0213e170[1] = c + 1;
    return y + c;
}
