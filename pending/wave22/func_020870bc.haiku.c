#include "ffc/types.h"
extern uint8_t data_021414f4[];
void *func_020870bc(void) {
    uint8_t *p = *(uint8_t **)(data_021414f4 + 0x24);
    while (p && *(int32_t *)(p + 0x64) != 1) {
        p = *(uint8_t **)(p + 0x68);
    }
    return p;
}
