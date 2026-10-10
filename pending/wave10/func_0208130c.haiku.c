#include "ffc/types.h"

uint32_t func_0208130c(uint32_t numer, uint32_t denom) {
    volatile uint16_t *divcnt = (volatile uint16_t *)0x04000280;
    volatile uint32_t *numer_reg = (volatile uint32_t *)0x04000290;
    volatile uint32_t *denom_reg = (volatile uint32_t *)0x04000298;
    volatile uint32_t *result_reg = (volatile uint32_t *)0x040002A0;

    *divcnt = 0;
    *numer_reg = numer;
    denom_reg[0] = denom;
    denom_reg[1] = 0;
    while (*divcnt & 0x8000) {
    }
    return *result_reg;
}
