#include "ffc/types.h"

extern void func_020868d8(uint32_t a, uint32_t b, void (*c)(void), uint32_t d);
extern void func_020869c8(void);

void func_02086980(uint32_t a) {
    func_020868d8(a, 0x2ffffe8, func_020869c8, 1);
}
