#include "ffc/types.h"

extern void func_0206ad9c(void);
extern void func_0206ae90(uint32_t p);

void func_0206b15c(uint32_t p) {
    uint32_t s = p;
    if (*(uint8_t *)(s + 0x48) == 0) {
        func_0206ae90(p);
        return;
    }
    if (*(uint8_t *)(s + 0x49) == 0) {
        func_0206ae90(p);
        return;
    }
    func_0206ad9c();
    *(uint8_t *)(p + 0x49) = 0;
    func_0206ae90(p);
}
