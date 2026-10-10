#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Elem8;

extern Elem8 data_ov000_0217010c[];

Elem8 *func_ov000_0215b76c(uint32_t i)
{
    return &data_ov000_0217010c[i];
}
