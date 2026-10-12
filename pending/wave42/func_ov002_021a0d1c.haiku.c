#include "ffc/types.h"

extern void *func_ov002_021aac10(void *object);
extern uint32_t func_ov002_021aa11c(const void *object, uint32_t bit);
extern uint32_t func_ov002_021a1acc(void *object);
extern uint32_t func_0206c184(uint32_t first, uint32_t second);
extern uint8_t func_ov002_021aab40(const void *object);
extern uint32_t func_ov002_021aac08(const void *object);

uint32_t func_ov002_021a0d1c(void *a, void *b, uint32_t c, uint32_t d)
{
    uint32_t r7;

    if (d == 0) {
        return 0;
    }
    if (c & 1) {
        if (func_ov002_021aa11c(func_ov002_021aac10(b), 3) == 0) {
            if (func_ov002_021aa11c(func_ov002_021aac10(b), 8) != 0) {
                r7 = func_0206c184(func_ov002_021a1acc(a), 0x64);
                if (*(int32_t *)((char *)func_ov002_021aac10(b) + 0x8c) >= (int32_t)r7) {
                    return 1;
                }
            }
        }
    }
    if (c & 2) {
        if (func_ov002_021aab40(b) == 7) {
            r7 = func_0206c184(func_ov002_021a1acc(a), 0x64);
            if ((int32_t)*(uint16_t *)((char *)func_ov002_021aac08(b) + 0x54) >= (int32_t)r7) {
                return 2;
            }
        }
    }
    return 0;
}
