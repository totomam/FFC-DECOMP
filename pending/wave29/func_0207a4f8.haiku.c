#include "ffc/types.h"

extern uint32_t data_0213ec3c[];
extern void func_02089c5c(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern uint32_t func_0208a17c(void);
extern void func_0208a030(uint32_t v);
extern void func_0208a138(uint32_t v);

void func_0207a4f8(void)
{
    uint32_t *p = data_0213ec3c;
    uint32_t mask;
    int32_t idx;
    uint32_t r;

    if (p[0] == 0) {
        return;
    }
    idx = (int32_t)p[11];
    if (idx >= 0) {
        mask = 1u << idx;
    } else {
        mask = 0;
    }
    func_02089c5c(p[9], p[10], mask, 0);
    r = func_0208a17c();
    func_0208a030(1);
    func_0208a138(r);
}
