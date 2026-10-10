#include "ffc/types.h"

typedef struct {
    uint32_t low : 9;
    uint32_t rest : 23;
} Bits9;

uint32_t func_020363b4(const void *object) {
    return ((const Bits9 *)((const uint8_t *)object + 0x5c))->low;
}
