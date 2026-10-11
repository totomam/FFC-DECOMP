#include "ffc/types.h"

extern uint32_t func_0207ebe8(void *out, void *a, uint32_t b);
extern uint32_t func_0207eee4(void *object);

uint32_t func_0207eef0(void *a, uint32_t b) {
    uint8_t buf[0x2c];
    if (func_0207ebe8(buf, a, b) != 0) {
        if (func_0207eee4(buf) != 0) {
            return 1;
        }
    }
    return 0;
}
