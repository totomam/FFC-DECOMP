#include "ffc/types.h"

extern int32_t func_020075fc(void *p);
extern void func_02007450(void *p, uint32_t v);

void func_020065ec(uint8_t *p, uint32_t a, uint32_t b, uint32_t c) {
    if (p[0] == 0) {
        return;
    }
    if (func_020075fc(p + 0x2bb8) == 0) {
        return;
    }
    func_02007450(p + 0x2bb8, c);
    *(uint32_t *)(p + 4) = 0x7f;
}
