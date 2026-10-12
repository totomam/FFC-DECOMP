#include "ffc/types.h"

extern void func_02078fb8(uint16_t *dst, int dx, int dy, int w, uint32_t c, uint32_t p);

void func_02078f2c(uint16_t *dst, int dx, int dy, int x, int y, int w, uint32_t c, uint32_t p) {
    if (w <= 0x20) {
        func_02078fb8(dst + (x + w * y), dx, dy, w, c, p);
        return;
    }
    {
        int xe = x + dx;
        int ye = y + dy;
        uint32_t hi = (p << 28) >> 16;
        for (int yy = y; yy < ye; yy++) {
            int row = (yy < 0x20) ? yy : yy + 0x20;
            uint16_t *rp = (uint16_t *)((uint8_t *)dst + (row * 64));
            for (int xx = x; xx < xe; xx++) {
                int col = (xx < 0x20) ? xx : xx + 0x3e0;
                rp[col] = (uint16_t)(hi | c);
                c++;
            }
        }
    }
}
