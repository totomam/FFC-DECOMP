#include "ffc/types.h"

extern void func_02021338(int32_t code);

void func_ov007_021a17b4(uint8_t *p) {
    if (p[0xdc] == 0) {
        func_02021338(0xcd);
    }
    p[0xdc] = 0;
}
