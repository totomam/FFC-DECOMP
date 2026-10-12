#include "ffc/types.h"

extern int func_0208cf0c(void *p);
extern void func_02087890(void *p, uint32_t n);
extern void func_0208cdd8(uint32_t id, void *p);
extern int func_0208ce30(uint32_t a, uint32_t b, uint32_t c, void *d, uint32_t e);

int func_0208e970(void *p, uint32_t a, uint32_t b, void *c)
{
    int r = func_0208cf0c(p);
    if (r != 0) {
        return r;
    }
    if (a > 3) {
        return 6;
    }
    if (a != 0) {
        if (c == 0) {
            return 6;
        }
        func_02087890(c, 0x50);
    }
    func_0208cdd8(0x27, p);
    r = func_0208ce30(0x27, 3, a, c, b);
    if (r != 0) {
        return r;
    }
    return 2;
}
