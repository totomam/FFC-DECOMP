#include "ffc/types.h"

extern void func_0206345c(void);
extern void func_02063480(uint32_t v);

uint32_t *func_02063540(uint32_t *p, uint32_t *q) {
    uint32_t old = *p;
    *p = *q;
    func_0206345c();
    func_02063480(old);
    return p;
}
