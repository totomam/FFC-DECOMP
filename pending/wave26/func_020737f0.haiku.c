#include "ffc/types.h"

extern void *func_02072234(void *);
extern void func_ov000_02159450(void *, uint32_t, uint32_t, uint32_t);
extern void func_ov000_02159440(void *, uint32_t);

void func_020737f0(uint8_t *p, uint32_t r1, uint32_t a, uint32_t b, uint32_t c)
{
    if (b != 0) {
        if (c != 0) {
            void *x = *(void **)((uint8_t *)func_02072234(*(void **)(p + 0x18)) + 8);
            func_ov000_02159450(x, b, c, a);
            return;
        }
    }
    {
        void *x = *(void **)((uint8_t *)func_02072234(*(void **)(p + 0x18)) + 8);
        func_ov000_02159440(x, a);
    }
}
