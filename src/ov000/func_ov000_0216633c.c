#include "ffc/types.h"

extern uint32_t func_02092864(const uint8_t *text);
extern uint32_t func_ov000_02166354(const uint8_t *p, uint32_t v);

uint32_t func_ov000_0216633c(const uint8_t *p)
{
    if (p == 0) {
        return 0;
    }
    return func_ov000_02166354(p, func_02092864(p));
}
