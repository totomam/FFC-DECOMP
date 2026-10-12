#include "ffc/types.h"

extern uint32_t func_02088978(void);
extern void func_0208898c(uint32_t);
extern void func_02087024(void *);

int func_0207cd8c(void *a, int b, uint32_t c, uint32_t d)
{
    uint32_t t = func_02088978();
    uint32_t *flags = (uint32_t *)((uint8_t *)a + 4);
    if (*flags & 4) {
        do {
            func_02087024((uint8_t *)a + 0x4f4);
        } while (*flags & 4);
    }
    if (b) {
        *flags = *flags | 4;
        *(uint32_t *)((uint8_t *)a + 0x4ec) = c;
        *(uint32_t *)((uint8_t *)a + 0x4f0) = d;
    }
    func_0208898c(t);
    if (**(uint32_t **)a == 0) {
        return 1;
    }
    return 0;
}
