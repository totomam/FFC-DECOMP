#include "ffc/types.h"

extern void func_02084b2c(void *dst, int c, uint32_t n);
extern uint32_t func_0208d570(void);
extern uint32_t func_0208d65c(void);
extern void func_0206d47c(uint8_t *p);

void func_0206d3d4(uint8_t *p)
{
    uint32_t i;
    uint32_t cnt;
    uint32_t k = 0x321c;

    *(uint32_t *)(p + 0x30b0) = 4;
    func_02084b2c(p + k - 0x5c, 0, 0x44);
    p[k] = 0;
    *(uint32_t *)(p + k - 0x5c) = (*(uint32_t *)(p + k - 0x18) + 31) & ~31u;
    *(uint16_t *)(p + k - 0x58) = 0x400;
    *(uint16_t *)(p + k - 0x56) = (uint16_t)func_0208d570();
    *(uint16_t *)(p + k - 0x54) = (uint16_t)func_0208d65c();
    func_02084b2c(p + k - 0x52, 0xff, 6);
    *(uint16_t *)(p + k - 0x4c) = 1;
    *(uint16_t *)(p + k - 0x4a) = 0;
    cnt = *(uint32_t *)(p + k - 0x60);
    if (cnt > 0) {
        i = 0;
        do {
            ((uint32_t *)(*(uint8_t **)(p + k - 0xc)))[i] = 0;
            ((uint8_t **)(*(uint8_t **)(p + k - 8)))[i] = *(uint8_t **)(p + k - 4);
            i++;
        } while (i < cnt);
    }
    func_0206d47c(p);
}
