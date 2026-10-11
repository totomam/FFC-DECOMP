#include "ffc/types.h"

extern uint32_t func_02088978(void);
extern void func_02088f30(void);
extern void func_ov006_0219c654(void);
extern void func_0208898c(uint32_t);
extern uint32_t data_ov006_021ba150;

void func_ov006_0219c6e4(void) {
    uint32_t r4 = func_02088978();
    uint8_t *base = (uint8_t *)&data_ov006_021ba150;
    uint8_t *obj = *(uint8_t **)(base + 0x10);
    if (*(uint32_t *)(obj + 0x1320) == 0) {
        func_02088f30();
    }
    func_ov006_0219c654();
    func_0208898c(r4);
}
