#include "ffc/types.h"

uint8_t *func_02069784(uint8_t *a, uint32_t r1) {
    uint8_t *n = *(uint8_t **)(*(uint8_t **)(a + 0x90) + 0x14);
    while (n != 0) {
        if (*(n + 0x84) != 0) {
            if (*(uint32_t *)(n + 0x8c) & r1) {
                return n;
            }
        }
        n = *(uint8_t **)(n + 4);
    }
    return 0;
}
