#include "ffc/types.h"

extern void *func_0208cde8(uint32_t a, uint32_t b);
extern void func_02084ca4(uint32_t a, void *b, uint32_t c);
extern void func_02087890(void *a, uint32_t b);
extern int32_t func_02089218(uint32_t a, void *b, uint32_t c);
extern void func_020874ac(void *d, void *b, uint32_t c);
extern uint8_t data_02143598[];

int32_t func_0208cea4(uint32_t a, uint32_t b)
{
    void *p;
    int32_t r;

    p = func_0208cde8(a, b);
    if (p == 0) {
        return 8;
    }
    func_02084ca4(a, p, b);
    func_02087890(p, b);
    r = func_02089218(10, p, 0);
    func_020874ac(data_02143598, p, 1);
    return r < 0 ? 8 : 2;
}
