#include "ffc/types.h"

extern uint32_t func_ov000_02159138(void *p);
extern void func_ov000_021550fc(void *p, uint32_t v);

void func_ov000_0215525c(void *p) {
    uint32_t v = func_ov000_02159138(p);
    func_ov000_021550fc(p, v);
}
