#include "ffc/types.h"

extern void func_ov000_021652a8(uint32_t a, uint32_t b, uint32_t c, void *d);
extern void *func_ov000_0214ee74(void *p);
extern uint32_t *func_ov000_021653d4(uint32_t n);
extern uint32_t data_ov000_0216b49c[];

int func_ov000_02165864(void *p, uint32_t **out)
{
    uint32_t *r;
    uint32_t *A;
    uint32_t *B;
    void *q;

    func_ov000_021652a8(8, 3, 0x10, data_ov000_0216b49c);
    q = func_ov000_0214ee74(p);
    if (q == 0) {
        return -1;
    }
    r = func_ov000_021653d4(8);
    if (r == 0) {
        return -1;
    }
    A = *(uint32_t **)((uint8_t *)q + 0xc);
    B = (uint32_t *)*A;
    r[1] = *B;
    *out = r;
    return 0;
}
