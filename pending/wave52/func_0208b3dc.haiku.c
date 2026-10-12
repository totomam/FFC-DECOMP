#include "ffc/types.h"

extern int func_0208b38c(void *a, uint32_t b, uint32_t c, void *fn, uint32_t *out);
extern void func_020889f4(uint32_t x);
extern void func_0208b220(void);

void func_0208b3dc(void *a0, uint32_t a1)
{
    volatile uint32_t v;
    for (;;) {
        v = 0xffff0000;
        if (func_0208b38c(a0, a1, 0, func_0208b220, (uint32_t *)&v) != 0) {
            do {
                func_020889f4(0x51d23);
            } while (func_0208b38c(a0, a1, 0, func_0208b220, (uint32_t *)&v) != 0);
        }
        if (v == 0xffff0000) {
            do {
                func_020889f4(0x51d23);
            } while (v == 0xffff0000);
        }
        if (v == 0) {
            return;
        }
        func_020889f4(0x51d23);
    }
}
