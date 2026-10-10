#include "ffc/types.h"

extern uint32_t func_020424e0(uint32_t);
extern void func_ov003_02149918(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);

void func_ov003_02166a38(uint32_t *p) {
    uint32_t r;
    r = func_020424e0(p[5]);
    func_ov003_02149918(r, p[6], p[7], p[8], p[9]);
}
