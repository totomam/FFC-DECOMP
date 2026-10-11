#include "ffc/types.h"
typedef struct { uint32_t f : 1; uint32_t n : 31; } W;
typedef struct { uint8_t f : 1; uint8_t n : 7; } B;
uint32_t func_02068680(uint8_t *p) {
    uint32_t v;
    if (((W *)(p + 0x4c))->f == 0) {
        v = ((B *)(p + 0x4c))->n;
    } else {
        v = *(uint32_t *)(p + 0x50);
    }
    return v == 0;
}
