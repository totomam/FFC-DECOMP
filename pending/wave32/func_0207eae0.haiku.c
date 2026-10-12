#include "ffc/types.h"

extern uint32_t func_0207faac(void *p, uint32_t *out);
extern uint32_t func_0207fa84(void *p, uint32_t *out);
extern void func_0207e0f4(void *p, uint32_t a, uint32_t b);

uint32_t func_0207eae0(uint8_t *p, uint32_t arg1, uint32_t n)
{
    uint32_t b;
    uint32_t a;
    uint32_t len = n;
    uint32_t *q;

    if (func_0207faac(p, &a)) {
        if (func_0207fa84(p, &b)) {
            if (a + n > b) {
                len = b - a;
            }
        }
    }
    q = (uint32_t *)(p + 0x30);
    *(uint32_t **)(p + 0x10) = q;
    q[1] = len;
    *(uint32_t *)(p + 0x30) = arg1;
    func_0207e0f4(p, 0, 0);
    return len;
}
