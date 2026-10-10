#include "ffc/types.h"

extern int32_t func_0205681c(int32_t x);
extern void func_ov001_0218eb18(int32_t a, int32_t b);

void func_ov001_0218ec74(int32_t unused, int32_t b) {
    int32_t r = func_0205681c(0x88);
    if (r != 0) {
        func_ov001_0218eb18(r, b);
    }
}
