#include "ffc/types.h"

extern void func_0205428c(uint32_t arg);

void func_ov002_021963b0(uint8_t *p) {
    if (*(uint32_t *)(p + 0x3a4) != 0) {
        func_0205428c(1);
        return;
    }
    uint32_t v = *(uint32_t *)(p + 0x3e0);
    if (v == 0) {
        func_0205428c(0x06000000);
    } else {
        func_0205428c(0x06000000 | -v);
    }
}
