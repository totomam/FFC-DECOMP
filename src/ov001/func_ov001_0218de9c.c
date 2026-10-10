#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} S;

extern uint32_t func_ov001_0218deb0(uint32_t a, S s, uint32_t d);
extern S data_ov001_021949b0;

uint32_t func_ov001_0218de9c(uint32_t a, uint32_t b)
{
    return func_ov001_0218deb0(a, data_ov001_021949b0, b);
}
