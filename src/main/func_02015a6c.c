#include "ffc/types.h"

extern uint32_t func_02015a58(void *a);
extern void *func_02015ba4(void *unused, uint32_t index);

void *func_02015a6c(void *a, uint16_t b) {
    uint32_t i = 1;
    if (func_02015a58(a) > 1) {
        do {
            if (b == *(uint16_t *)((uint8_t *)func_02015ba4(a, i) + 0x3a)) {
                return func_02015ba4(a, i);
            }
            i++;
        } while (i < func_02015a58(a));
    }
    return 0;
}
