#include "ffc/types.h"

extern int32_t func_0208d87c(void *a, void (*b)(void), uint16_t c);
extern void func_0206cb44(uint8_t *p);
extern void func_0206cd28(void);

void func_0206ccf4(uint8_t *p) {
    uint32_t q;
    uint32_t n;
    *(p + 0x30b4) = 0;
    q = (uint32_t)(p + 0x58);
    n = *(uint32_t *)(p + 0x54);
    q = (q + 0x1f) & ~0x1fu;
    if (func_0208d87c((void *)q, func_0206cd28, (uint16_t)n) != 2) {
        func_0206cb44(p);
    }
}
