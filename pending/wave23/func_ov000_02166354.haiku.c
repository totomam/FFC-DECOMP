#include "ffc/types.h"

extern uint32_t func_ov000_021662cc(void *a);
extern void *func_ov000_021653d4(uint32_t size);
extern void func_ov000_02166384(void *a, void *b, void *c, uint32_t n);

void *func_ov000_02166354(void *a, void *b) {
    uint32_t n;
    void *p;
    if (a == 0) {
        return 0;
    }
    n = func_ov000_021662cc(a);
    p = func_ov000_021653d4((n + 1) << 1);
    func_ov000_02166384(a, b, p, n);
    return p;
}
