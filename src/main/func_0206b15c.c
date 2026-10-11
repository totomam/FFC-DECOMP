#include "ffc/types.h"
extern void func_0206ad9c(uint32_t p);
extern void func_0206ae90(uint32_t p);
void func_0206b15c(uint32_t p) {
    if (*(uint8_t *)(p + 0x48) != 0) {
        if (*(uint8_t *)(p + 0x49) != 0) {
            func_0206ad9c(p);
            *(uint8_t *)(p + 0x49) = 0;
        }
    }
    func_0206ae90(p);
}
