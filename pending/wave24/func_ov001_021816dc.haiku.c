#include "ffc/types.h"

extern uint32_t func_ov000_02168768(void *p);
extern uint32_t *func_ov000_0216876c(void *p, uint32_t idx);
extern int func_ov001_021803b0(void *self, uint32_t a, uint32_t b);

int func_ov001_021816dc(void *self)
{
    uint8_t *s = (uint8_t *)self;
    uint32_t cnt = func_ov000_02168768(*(void **)(s + 0x60));
    uint32_t *e = func_ov000_0216876c(*(void **)(s + 0x60), cnt - 1);
    uint32_t base = *(uint32_t *)(s + 0x50);

    if (func_ov001_021803b0(self, base + e[0], e[1]) == 0) {
        return 0;
    }
    *(uint32_t *)(s + 0x90) = 0;
    return 1;
}
