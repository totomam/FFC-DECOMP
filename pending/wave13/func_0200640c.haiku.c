#include "ffc/types.h"

extern void func_02007048(void *p);

void func_0200640c(uint8_t *p) {
    if (*p != 0) {
        func_02007048(p + 0x2a14);
    }
}
