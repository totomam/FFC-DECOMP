#include "ffc/types.h"

extern int32_t func_0209a76c(int32_t a, int32_t b);
extern void func_ov012_021cfd14(void *p);
extern void func_02021338(int32_t x);

void func_ov012_021cfd8c(void *p, int32_t x)
{
    int8_t v = (int8_t)(x % 3);
    if (v < 0) {
        v = (int8_t)(v + 3);
    }
    if (*(int32_t *)((uint8_t *)p + 0x2DC) != v) {
        *(int32_t *)((uint8_t *)p + 0x2DC) = v;
        func_ov012_021cfd14(p);
        func_02021338(0xB7);
    }
}
