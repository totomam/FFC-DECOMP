#include "ffc/types.h"

extern void func_ov000_0214e940(uint32_t a, uint32_t b);

void func_ov000_0214ef8c(uint32_t *a, uint32_t *b) {
    uint32_t x = *a;
    uint32_t y = *b;
    uint32_t m = 0xff000000;
    uint32_t rx = ((x >> 24) << 24 >> 24) | ((x >> 8) & (m >> 16)) | ((x << 8) & (m >> 8)) | ((x << 24) & m);
    uint32_t ry = ((y >> 24) << 24 >> 24) | ((y >> 8) & (m >> 16)) | ((y << 8) & (m >> 8)) | ((y << 24) & m);
    func_ov000_0214e940(rx, ry);
}
