#include "ffc/types.h"

extern void func_ov000_0215b37c(void);

void func_02072e18(int32_t a0, int32_t a1, int32_t a2, int32_t a3, void *a4, uint8_t *a5)
{
    if (a0 == 0) {
        void (*f)(int32_t, int32_t, int32_t, int32_t, void *, void *) =
            *(void (**)(int32_t, int32_t, int32_t, int32_t, void *, void *))(a5 + 0x88);
        if (f != 0) {
            f(a0, a1 != 0, a2 != 0, a3 != 0, a4, *(void **)(a5 + 0x8c));
        }
        if (a1 != 0) {
            func_ov000_0215b37c();
            *(int32_t *)(a5 + 0x90) = 3;
        } else {
            *(int32_t *)(a5 + 0x90) = 2;
        }
    }
}
