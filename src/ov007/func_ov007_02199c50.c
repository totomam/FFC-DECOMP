#include "ffc/types.h"

extern void func_02021338(int32_t code);

void func_ov007_02199c50(uint8_t *p) {
    if (p[0xd0] == 0) {
        func_02021338(0xcd);
    }
    p[0xd0] = 0;
}
