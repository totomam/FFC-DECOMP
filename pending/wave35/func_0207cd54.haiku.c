#include "ffc/types.h"

extern uint8_t data_021407c0[];
extern uint32_t func_02088978(void);
extern void func_02087024(uint32_t x);
extern void func_0208898c(uint32_t x);
extern void func_0207cd00(uint32_t x, uint32_t y);

void func_0207cd54(void)
{
    uint32_t r7;
    uint32_t off = 0x4e8;
    uint8_t *base = data_021407c0;
    uint32_t mask = 8;
    for (;;) {
        r7 = func_02088978();
        for (;;) {
            if (*(uint32_t *)(base + 4) & mask) {
                break;
            }
            func_02087024(0);
        }
        func_0208898c(r7);
        func_0207cd00(*(uint32_t *)(base + off), 0);
    }
}
