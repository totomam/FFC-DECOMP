#include "ffc/types.h"

void func_0205f24c(uint32_t *dst, const uint32_t *src) {
    *dst = (*dst & 0xc1ffffffu) | ((src[4] & 0x1fu) << 25);
}
