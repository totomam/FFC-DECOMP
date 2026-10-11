#include "ffc/types.h"

extern uint32_t *func_020249a4(uint8_t *p);

int func_02024a80(uint8_t *p, uint32_t unused, uint32_t *out) {
    uint32_t *r;

    if (*(uint32_t *)(*(uint32_t *)(p + 0xe8) + 0xc) != 0 &&
        *(uint32_t *)(*(uint32_t *)(p + 0xe4) + 0x14) != 0) {
        r = func_020249a4(p);
        if (r != 0) {
            out[0] = r[9];
            out[1] = r[10];
            out[2] = r[11];
            return 1;
        }
        return 0;
    }
    return 0;
}
