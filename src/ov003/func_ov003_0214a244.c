#include "ffc/types.h"

extern uint32_t func_02056aec(void *p);
extern void func_02056bc0(void *object, void *node);
extern void func_ov003_0214a05c(void *p1, void *p2, void *p3, uint8_t v);
extern void func_ov003_0214a180(void *p1, void *p2, void *p3, uint8_t v);

void func_ov003_0214a244(void *p1, void *p2, void *p3, void *p4, uint8_t a, uint8_t b)
{
    if (p3 != 0) {
        uint32_t n = func_02056aec(p3);
        func_02056bc0(p4, (void *)n);
        if (b != 0) {
            func_ov003_0214a05c(p1, p2, p4, a);
        }
        return;
    }
    func_ov003_0214a180(p1, p2, p4, a);
}
