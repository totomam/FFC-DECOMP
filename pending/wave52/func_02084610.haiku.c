#include "ffc/types.h"

extern void func_02084774(void *a, uint32_t b, uint32_t c, uint32_t d);
extern void func_02086650(void *a, void *b, void *c);
extern void func_01ff8f28(void *a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);

void func_02084610(void *a0, uint32_t a1, uint32_t a2, uint32_t a3, void (*a4)(void *), void *a5, uint32_t a6)
{
    if (a3 == 0) {
        if (a4 != 0) {
            a4(a5);
        }
        return;
    }
    func_02084774(a0, a1, a2, a3);
    if (a4 != 0) {
        func_02086650(a0, (void *)a4, a5);
        if (a6 != 0) {
            func_01ff8f28(a0, a2, a1, 0xc5000000u | (a3 >> 2), 0x10);
        } else {
            func_01ff8f28(a0, a2, a1, 0x45000000u | (a3 >> 2), 0x14);
        }
        return;
    }
    if (a6 != 0) {
        func_01ff8f28(a0, a2, a1, 0x85000000u | (a3 >> 2), 0x10);
    } else {
        func_01ff8f28(a0, a2, a1, (0x14u << 22) | (a3 >> 2), 0x14);
    }
}
