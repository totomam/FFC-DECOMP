#include "ffc/types.h"

extern uint32_t func_02088978(void);
extern void func_0208898c(uint32_t h);
extern void func_02084ca4(void *src, void *dst, int n);
extern void *data_ov006_021bc7fc;

int func_ov006_021b1fb0(int idx)
{
    uint16_t buf[7];
    uint32_t h = func_02088978();
    uint32_t mask = (uint16_t)(1u << idx);
    uint8_t *s = (uint8_t *)data_ov006_021bc7fc;

    if (!(*(uint16_t *)(s + 2) & mask)) {
        func_0208898c(h);
        return 0;
    }
    func_02084ca4(s, buf, 14);
    func_0208898c(h);

    if (buf[2] & mask) return 2;
    if (buf[3] & mask) return 3;
    if (buf[4] & mask) return 4;
    if (buf[5] & mask) return 5;
    if (buf[6] & mask) return 6;
    return 1;
}
