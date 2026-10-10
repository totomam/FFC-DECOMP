#include "ffc/types.h"

extern uint32_t func_0205681c(uint32_t v);
extern void func_02091a24(void *p);
extern uint32_t func_0208f42c(void);
extern uint32_t data_020a7e14;

void func_ov007_021ad5a8(uint32_t *out, uint32_t v)
{
    uint32_t r = func_0205681c(v);
    if (r == 0) {
        func_02091a24(&data_020a7e14);
        func_0208f42c();
    }
    out[0] = r;
    out[2] = v;
}
