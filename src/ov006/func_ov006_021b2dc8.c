#include "ffc/types.h"

extern uint8_t *data_ov006_021bc808;
extern void func_ov006_021b268c(uint32_t a);
extern uint16_t func_0208d770(void);
extern void func_02084ca4(uint32_t a, void *b, uint32_t c);

void func_ov006_021b2dc8(void) {
    func_ov006_021b268c(*(uint32_t *)(data_ov006_021bc808 + 0xac8));
    data_ov006_021bc808[0xa90] = 1;
    *(uint16_t *)(data_ov006_021bc808 + 0x648) = func_0208d770();
    func_02084ca4(*(uint32_t *)(data_ov006_021bc808 + 0xaa4), data_ov006_021bc808 + 0xa50, 0x40);
    data_ov006_021bc808[0xa93] = 0;
    *(uint32_t *)(data_ov006_021bc808 + 0x204) = 0;
    *(uint16_t *)(data_ov006_021bc808 + 0x648) = *(uint16_t *)(data_ov006_021bc808 + 0x648) + 1;
}
