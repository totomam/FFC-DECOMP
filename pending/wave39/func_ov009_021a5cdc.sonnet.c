#include "ffc/types.h"

extern void *func_02015ba4(void *unused, uint32_t index);
extern void *data_020b8e44;

int func_ov009_021a5cdc(void *unused, uint32_t *a, uint32_t *b)
{
    uint8_t *p[2];
    uint32_t out[2];
    int i;

    p[0] = func_02015ba4(data_020b8e44, *a);
    p[1] = func_02015ba4(data_020b8e44, *b);

    for (i = 0; i < 2; i++) {
        switch (p[i][1]) {
        case 1: out[i] = 0; break;
        case 2: out[i] = 2; break;
        case 3: out[i] = 1; break;
        case 4: out[i] = 3; break;
        case 5: out[i] = 4; break;
        default: out[i] = 5; break;
    }
    }

    if (out[0] < out[1]) {
        return 1;
    }
    return 0;
}
