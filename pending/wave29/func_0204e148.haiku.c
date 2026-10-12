#include "ffc/types.h"

extern void func_0204de50(void);
extern uint32_t func_0204de80(void);
extern uint32_t func_0204dc74(uint32_t a, uint32_t b);
extern uint32_t func_0204dc48(uint32_t a);

int func_0204e148(uint32_t a, uint32_t *out1, uint32_t *out2)
{
    uint32_t s;
    uint32_t *p;

    func_0204de50();
    s = func_0204de80();
    if (func_0204dc74(s, a)) {
        p = (uint32_t *)func_0204dc48(s);
        if (p) {
            *out1 = p[10];
            *out2 = p[7];
            return (int)p[1];
        } else {
            return -1;
        }
    } else {
        return -1;
    }
}
