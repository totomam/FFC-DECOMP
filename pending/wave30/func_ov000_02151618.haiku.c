#include "ffc/types.h"

extern uint8_t *data_ov000_0216e268;
extern uint32_t func_ov000_02151610(void);
extern void func_02084b2c(uint8_t *p, uint32_t a, uint32_t b);
extern void func_02084050(uint8_t *p, uint32_t v);
extern uint32_t func_0208d87c(uint8_t *p, uint32_t a, uint32_t b);

int func_ov000_02151618(uint8_t *p0, uint32_t p1, uint32_t p2) {
    uint32_t z = 0;
    uint32_t r;
    if (p1 == 0) {
        return -1;
    }
    data_ov000_0216e268 = p0;
    r = func_ov000_02151610();
    func_02084b2c(data_ov000_0216e268, 0, r);
    *(uint32_t *)(data_ov000_0216e268 + 0x1a90) = z;
    *(uint16_t *)(data_ov000_0216e268 + 0x1a94) = z;
    func_02084050(data_ov000_0216e268 + 0x1a96, 0xa001);
    r = func_0208d87c(data_ov000_0216e268, p1, p2);
    if (r != 2) {
        return r;
    }
    return z;
}
