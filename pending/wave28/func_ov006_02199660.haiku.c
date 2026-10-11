#include "ffc/types.h"

extern uint32_t func_02088978(void);
extern int func_ov006_0219a38c(int x);
extern void func_02084ca4(void *dst, const void *src, uint32_t n);
extern void func_0208898c(uint32_t x);
extern uint8_t *data_ov006_021ba160;

uint8_t *func_ov006_02199660(int a0)
{
    uint32_t r4 = func_02088978();
    if (data_ov006_021ba160 != 0) {
        if (func_ov006_0219a38c(a0) != 0) {
            func_02084ca4(data_ov006_021ba160 + (0x4d << 6) + (a0 - 1) * 0x16,
                          data_ov006_021ba160 + 0x1772, 0x16);
            func_0208898c(r4);
            return data_ov006_021ba160 + 0x1772;
        }
    }
    func_0208898c(r4);
    return 0;
}
