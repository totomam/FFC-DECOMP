#include "ffc/types.h"

extern void func_02021338(int32_t code);

void func_ov007_021a766c(uint8_t *p) {
    if (p[0xcc] == 0) {
        func_02021338(0xcd);
    }
    p[0xcc] = 0;
}
