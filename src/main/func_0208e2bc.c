#include "ffc/types.h"

extern uint32_t func_0208d350(uint32_t a, uint32_t b, uint32_t c, uint32_t d);

uint32_t func_0208e2bc(uint8_t *p, uint32_t x, uint32_t y, uint32_t z) {
    if (p == 0) {
        return 6;
    }
    if (*(uint16_t *)(p + 0x80e) == 0) {
        return 3;
    }
    func_0208d350(*(uint16_t *)(p + 0x816), 0, 0, z);
    *(uint16_t *)(p + 0x80e) = 0;
    *(uint16_t *)(p + 0x81c) = 0;
    return 0;
}
