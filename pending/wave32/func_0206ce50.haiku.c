#include "ffc/types.h"

extern uint32_t func_0208d570(void);
extern uint32_t func_0208d5a0(void);
extern void func_0206cb44(void *p);
extern void func_0206cea0(void *p);

void func_0206ce50(void *p, uint32_t v)
{
    uint8_t *b = (uint8_t *)p;
    *(uint8_t *)(b + 0x30b4) = 0;
    *(uint32_t *)(b + 0xf80) = v;
    *(uint16_t *)(b + 0xf86) = (uint16_t)func_0208d570();
    if (!func_0208d5a0() || *(uint16_t *)(b + 0xf86) == 0x8000) {
        func_0206cb44(p);
        return;
    }
    *(uint16_t *)(b + 0xf84) = 1;
    *(uint16_t *)(b + 0xf88) = 0xffff;
    func_0206cea0(p);
}
