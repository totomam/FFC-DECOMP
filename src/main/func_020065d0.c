#include "ffc/types.h"

extern void func_02007450(void *p);

void func_020065d0(uint8_t *p) {
    if (p[0] != 0) {
        func_02007450(p + 0x2bb8);
        *(uint32_t *)(p + 4) = 0x7f;
    }
}
