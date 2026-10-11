#include "ffc/types.h"

extern uint32_t func_02088978(void);
extern void func_02088f30(uint32_t v);
extern void func_ov006_0219c654(void);
extern void func_0208898c(uint32_t v);
extern uint8_t data_ov006_021ba150[];

void func_ov006_0219c6b8(void)
{
    uint32_t r4 = func_02088978();
    uint8_t *p = *(uint8_t **)(data_ov006_021ba150 + 0x10);
    uint32_t v = *(uint32_t *)(p + 0x1320);
    if (v != 0) {
        func_02088f30(v);
    }
    func_ov006_0219c654();
    func_0208898c(r4);
}
