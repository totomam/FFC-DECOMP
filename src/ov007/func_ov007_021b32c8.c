#include "ffc/types.h"

extern void func_02021338(int32_t code);

void func_ov007_021b32c8(uint8_t *p) {
    if (p[0xd8] == 0) {
        func_02021338(0xcd);
    }
    p[0xd8] = 0;
}
