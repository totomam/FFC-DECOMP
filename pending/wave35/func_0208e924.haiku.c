#include "ffc/types.h"

extern uint32_t func_0208cf0c(void);
extern void func_02087890(void *p, uint32_t n);
extern void func_0208cdd8(uint32_t a, void *b);
extern uint32_t func_0208ce30(uint32_t a, uint32_t b, uint32_t c, void *d);

uint32_t func_0208e924(void *a, uint32_t b, void *c)
{
    uint32_t r;

    r = func_0208cf0c();
    if (r != 0) {
        return r;
    }
    if (b > 3) {
        return 6;
    }
    if (b != 0) {
        if (c == 0) {
            return 6;
        }
        func_02087890(c, 0x50);
    }
    func_0208cdd8(0x14, a);
    r = func_0208ce30(0x14, 2, b, c);
    if (r != 0) {
        return r;
    }
    return 2;
}
