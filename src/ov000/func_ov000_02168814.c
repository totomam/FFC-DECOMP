#include "ffc/types.h"

extern uint32_t func_ov000_0216876c(void *p, int32_t idx);
extern void func_02090398(uint32_t a, uint32_t b, int32_t c);

void func_ov000_02168814(int32_t *p, int32_t idx) {
    int32_t last = p[0] - 1;
    if (idx < last) {
        uint32_t a = func_ov000_0216876c(p, idx);
        uint32_t b = func_ov000_0216876c(p, idx + 1);
        func_02090398(a, b, (last - idx) * p[2]);
    }
    p[0]--;
}
