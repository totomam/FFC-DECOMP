#include "ffc/types.h"

extern void func_0206cb44(uint8_t *a, uint8_t *b);
extern void func_0206cea0(uint8_t *a);

void func_0206cf28(uint8_t *r0, uint8_t *r1)
{
    if (*(uint16_t *)(r1 + 2) == 1) {
        func_0206cb44(r0, r1);
        return;
    }
    {
        uint16_t v = *(uint16_t *)(r1 + 0xa);
        if (v < *(uint16_t *)(r0 + 0xf88)) {
            *(uint16_t *)(r0 + 0xf88) = v;
            **(uint16_t **)(r0 + 0xf80) = *(uint16_t *)(r0 + 0xf84);
        }
    }
    *(uint16_t *)(r0 + 0xf84) = *(uint16_t *)(r0 + 0xf84) + 1;
    func_0206cea0(r0);
}
