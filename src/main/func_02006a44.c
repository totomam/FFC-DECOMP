#include "ffc/types.h"

extern uint32_t data_020b3af8;
extern int32_t func_02006424(void *p, uint32_t a, uint32_t b, uint32_t c, uint32_t d);

int32_t func_02006a44(uint32_t a, uint32_t b, uint32_t c, uint32_t d) {
    return func_02006424(&data_020b3af8, a, b, c, d);
}
