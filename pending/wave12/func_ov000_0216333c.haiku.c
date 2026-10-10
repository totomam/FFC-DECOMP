#include "ffc/types.h"

typedef struct {
    uint32_t f0;
    uint32_t f4;
    uint32_t f8;
    uint32_t fc;
    uint32_t f10;
    uint32_t f14;
    uint64_t f18;
} DataOv000;

extern uint64_t func_020882cc(void);
extern DataOv000 data_ov000_0217020c;

void func_ov000_0216333c(uint32_t a)
{
    data_ov000_0217020c.f4 = a;
    data_ov000_0217020c.f18 = func_020882cc();
}
