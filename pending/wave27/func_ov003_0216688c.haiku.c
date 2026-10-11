#include "ffc/types.h"

extern uint16_t func_ov003_021481c0(uint16_t x);
extern int32_t func_020424e0(void *p);
extern int32_t func_ov003_021464f4(int32_t a, uint16_t b);
extern void func_ov003_0215b064(int32_t a, uint16_t b, uint16_t c, void *d);

void func_ov003_0216688c(uint8_t *p)
{
    *(uint16_t *)(p + 0x18) = func_ov003_021481c0(*(uint16_t *)(p + 0x18));
    if (*(void **)(p + 0x14) != 0) {
        if (func_020424e0(*(void **)(p + 0x14)) != 0) {
            int32_t r = func_020424e0(*(void **)(p + 0x14));
            r = func_ov003_021464f4(r, *(uint16_t *)(p + 0x18));
            if (r != 0) {
                func_ov003_0215b064(r, *(uint16_t *)(p + 0x1a), *(uint16_t *)(p + 0x1c), p + 0x1e);
            }
        }
    }
}
