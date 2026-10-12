#include "ffc/types.h"

extern uint32_t func_02005fc8(void *p, int32_t idx);

int8_t func_02007b5c(uint8_t *s, uint32_t *arr, int32_t n) {
    int32_t i = 0;
    if (n > 0) {
        uint8_t *p = s + 0x48;
        do {
            if (arr[i] != func_02005fc8(p, i)) {
                break;
            }
            i++;
        } while (i < n);
    }
    return (int8_t)i;
}
