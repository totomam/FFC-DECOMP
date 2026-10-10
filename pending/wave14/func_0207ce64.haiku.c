#include "ffc/types.h"

extern uint32_t func_020878dc(void);
extern uint32_t func_020878e8(void);

uint32_t func_0207ce64(uint32_t a, uint32_t b, uint32_t c) {
    if (b >= c) {
        return func_020878dc();
    }
    return func_020878e8();
}
