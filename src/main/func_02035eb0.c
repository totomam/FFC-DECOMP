#include "ffc/types.h"

typedef struct {
    uint32_t low10 : 10;
    uint32_t high22 : 22;
} FfcBits;

uint32_t func_02035eb0(const void *object)
{
    return ((const FfcBits *)((const uint8_t *)object + 8))->low10;
}
