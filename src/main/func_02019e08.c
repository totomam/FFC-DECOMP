#include "ffc/types.h"

extern uint32_t func_020197b4(void *p);
extern void func_02019e1c(void *p, uint32_t v);

void func_02019e08(void *p) {
    uint32_t v = func_020197b4(p);
    func_02019e1c(p, v);
}
