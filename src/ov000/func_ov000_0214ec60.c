#include "ffc/types.h"

extern void *func_02088978(void *a, void *b);
extern void func_0208898c(void *x);
extern uint32_t *func_ov000_0214ec88(void *a, void *b);

void *func_ov000_0214ec60(void *a, void *b)
{
    void *h = func_02088978(a, b);
    uint32_t *p = func_ov000_0214ec88(a, b);
    if (p != 0) {
        uint8_t *bp = (uint8_t *)b;
        *p = *(uint32_t *)(bp + 0xb8);
    }
    func_0208898c(h);
}
