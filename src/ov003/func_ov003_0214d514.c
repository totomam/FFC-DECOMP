#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} S;

extern uint32_t func_ov003_0214d528(uint32_t a, S s, uint32_t d);
extern S data_ov003_02179994;

uint32_t func_ov003_0214d514(uint32_t a, uint32_t b)
{
    return func_ov003_0214d528(a, data_ov003_02179994, b);
}
