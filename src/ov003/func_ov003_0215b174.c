#include "ffc/types.h"

extern void func_ov003_0215b0f8(void *self, uint32_t *a, uint32_t b, uint32_t c);
extern void func_ov003_0215b0dc(void *self, uint32_t a);

void func_ov003_0215b174(void *self, uint32_t a, uint32_t b, uint32_t c)
{
    uint8_t *inner = *(uint8_t **)((uint8_t *)self + 0xa8);
    if (inner[0xc] == 0 && a != 0 && b != 0) {
        if (c == 0) {
            func_ov003_0215b0f8(self, &a, 0, 0);
        }
        func_ov003_0215b0dc(self, a);
    }
}
