#include "ffc/types.h"

extern void func_0208e728(void *a, uint32_t b, uint32_t c);
extern void func_0208e7b8(void *a, uint32_t b);
extern uint32_t func_02088978(void);
extern void func_0208898c(uint32_t a);

void func_0208e5c4(uint8_t *a0)
{
    uint8_t *r4 = *(uint8_t **)(a0 + 0x1c);
    uint16_t t;
    if (r4 == 0) return;
    if (*(uint16_t *)(a0 + 2) == 0) {
    t = *(uint16_t *)(a0 + 4);
    switch (t) {
    case 0x15:
        func_0208e728(r4, *(uint16_t *)(a0 + 0x12), *(uint32_t *)(a0 + 0xc));
        func_0208e7b8(r4, 0);
        return;
    case 7:
        func_0208e7b8(r4, 0);
        return;
    case 0x19:
        break;
    case 9:
    case 0x1a: {
        uint32_t bit = 1u << *(uint16_t *)(a0 + 0x12);
        uint32_t val = func_02088978();
        uint32_t mask = (~bit) & 0xffff;
        uint16_t st = *(uint16_t *)(r4 + 0x808);
        uint32_t i = st << 9;
        int z = 0;
        *(uint16_t *)(r4 + i) &= mask;
        if (*(uint16_t *)(r4 + 0x818) == 1) {
            uint16_t j = ((st + 1) & 3) << 9;
            *(uint16_t *)(r4 + j) &= mask;
        }
        func_0208898c(val);
        func_0208e7b8(r4, z);
        if (*(uint16_t *)(r4 + 0x818) == 1)
            func_0208e7b8(r4, z);
        return;
    }
    }
    } else {
        *(uint16_t *)(r4 + 0x81c) = 5;
    }
}
