#include "ffc/types.h"

extern void func_ov003_021464f4(uint32_t a, uint16_t b);
extern uint32_t *func_ov003_02155b40(void);

uint32_t func_ov003_0214e0d4(uint32_t *out, uint8_t *p);

uint32_t func_ov003_0214e0d4(uint32_t *out, uint8_t *p) {
    uint32_t *q;
    func_ov003_021464f4(*(uint32_t *)(p + 0x14), *(uint16_t *)(p + 0x18));
    q = func_ov003_02155b40();
    out[0] = q[2] + *(uint32_t *)(p + 0x28);
    out[1] = q[3] + *(uint32_t *)(p + 0x2c);
    return 0;
}
