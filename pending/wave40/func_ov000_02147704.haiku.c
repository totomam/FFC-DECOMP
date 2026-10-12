#include "ffc/types.h"

extern uint8_t data_02141510[];
extern uint8_t data_ov000_0216bc60[];

uint16_t func_ov000_02147704(void) {
    uint8_t *node = *(uint8_t **)(data_02141510 + 8);
    uint16_t c;
    uint32_t found;

    for (;;) {
        found = 0;
        c = *(uint16_t *)(data_ov000_0216bc60 + 6);
        c++;
        *(uint16_t *)(data_ov000_0216bc60 + 6) = c;
        c = *(uint16_t *)(data_ov000_0216bc60 + 6);
        if (!(c >= 1024 && c < 5000)) {
            *(uint16_t *)(data_ov000_0216bc60 + 6) = 1024;
        }
        if (node != 0) {
            uint8_t *cur = node;
            do {
                uint8_t *obj = *(uint8_t **)(cur + 0xa4);
                if (obj != 0 && *(uint8_t **)obj != 0 &&
                    *(uint16_t *)(obj + 0xa) == *(uint16_t *)(data_ov000_0216bc60 + 6)) {
                    found = 1;
                    break;
                }
                cur = *(uint8_t **)(cur + 0x68);
            } while (cur != 0);
        }
        if (found == 0) {
            break;
        }
    }
    return *(uint16_t *)(data_ov000_0216bc60 + 6);
}
