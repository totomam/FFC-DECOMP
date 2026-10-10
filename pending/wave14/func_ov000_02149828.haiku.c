#include "ffc/types.h"

extern uint32_t data_02141510[];
extern void func_0208716c(uint32_t);

void func_ov000_02149828(uint32_t x) {
    uint32_t *p = data_02141510;
    if (x < 0x20) {
        func_0208716c(p[1]);
    }
}
