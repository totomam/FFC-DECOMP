#include "ffc/types.h"

extern int32_t func_ov002_0219c5a8(uint32_t a);
extern uint32_t func_ov002_0219c5b8(uint32_t a, int32_t i);
extern uint32_t func_ov002_021ae5fc(void);

uint32_t func_ov002_0219c5d8(uint32_t a, uint32_t b) {
    int32_t n = func_ov002_0219c5a8(a);
    int32_t i;
    for (i = 0; i < n; i++) {
        uint32_t r = func_ov002_0219c5b8(a, i);
        if (b == func_ov002_021ae5fc()) {
            return r;
        }
    }
    return 0;
}
