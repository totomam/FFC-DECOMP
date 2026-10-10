#include "ffc/types.h"

extern int32_t func_ov002_021a18bc(uint32_t a);
extern uint32_t func_ov002_021a18c4(uint32_t a, int32_t i);
extern uint32_t func_ov002_021aa780(void);

uint32_t func_ov002_021a1958(uint32_t a, uint32_t b) {
    int32_t n = func_ov002_021a18bc(a);
    int32_t i;
    for (i = 0; i < n; i++) {
        uint32_t r = func_ov002_021a18c4(a, i);
        if (b == func_ov002_021aa780()) {
            return r;
        }
    }
    return 0;
}
