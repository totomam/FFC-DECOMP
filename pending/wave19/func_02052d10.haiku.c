#include "ffc/types.h"

void func_02052d10(uint8_t *p, int idx) {
    volatile uint16_t *ime = (volatile uint16_t *)0x4000208;
    uint16_t old = *ime;
    uint16_t v = 0;
    uint32_t *arr;
    uint32_t tmp;
    *ime = 0;
    arr = *(uint32_t **)(p + 0x1c);
    arr[idx] += 1;
    (void)*ime;
    if (old != 0) {
        v = 1;
    }
    *(volatile uint16_t *)0x4000208 = v;
}
