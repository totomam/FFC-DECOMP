#include "ffc/types.h"

extern uint8_t data_021414b8[];
extern uint8_t data_021414c0[];
extern uint8_t data_021414bc[];
extern void func_020866dc(uint32_t x);

void func_0208668c(uint32_t a, uint32_t b, uint32_t c) {
    uint32_t off = a * 12;
    *(uint32_t *)(data_021414b8 + off) = b;
    *(uint32_t *)(data_021414c0 + off) = c;
    func_020866dc(1u << (a + 3));
    *(uint32_t *)(data_021414bc + off) = 1;
}
