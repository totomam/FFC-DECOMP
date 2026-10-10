#include "ffc/types.h"

extern void func_02021338(int32_t code);

void func_ov007_021af868(uint8_t *p) {
    if (p[0xe0] == 0) {
        func_02021338(0xcd);
    }
    p[0xe0] = 0;
}
