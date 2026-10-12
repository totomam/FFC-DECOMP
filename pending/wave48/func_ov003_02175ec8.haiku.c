#include "ffc/types.h"

extern uint32_t func_0209a978(uint32_t a, void *b);
extern uint64_t func_0209a71c(uint64_t first, uint64_t second);
extern int16_t data_020a1bd0[];

void func_ov003_02175ec8(uint8_t *p, uint32_t arg1) {
    uint16_t *dst = (uint16_t *)(*(uint32_t **)(p + 0x84))[1];
    int y = 0x48;
    int x;
    uint64_t a = (uint16_t)func_0209a978(arg1 << 15, *(void **)(p + 0x94));

    for (; y < 0x78; y++) {
        for (x = 0x60; x < 0xa0; x++) {
            int64_t sv = ((int16_t *)*(void **)(p + 0xa0))[(x - 0x60) + ((y - 0x48) << 6)];
            uint64_t s = func_0209a71c(a, (uint64_t)sv) + (uint64_t)(uint32_t)((x + 0xa0) << 3);
            uint32_t ix = ((uint32_t)(s >> 12) & 0xffff) >> 4;
            int64_t v6 = data_020a1bd0[ix * 2];
            int64_t v0 = data_020a1bd0[ix * 2 + 1];
            uint32_t A = (uint32_t)((func_0209a71c((int64_t)(x - 0x80) << 12, v0) + (uint64_t)(uint32_t)((x + 0xa0) << 3)) >> 12);
            uint32_t B = (uint32_t)((func_0209a71c((int64_t)(y - 0x60) << 12, v6) + (uint64_t)(uint32_t)((x + 0xa0) << 3)) >> 12);
            int32_t D = (int32_t)(A - B) >> 12;
            uint64_t C = (func_0209a71c((int64_t)(x - 0x80) << 12, v6) + (uint64_t)(uint32_t)((x + 0xa0) << 3)) >> 12;
            uint64_t E = (func_0209a71c((int64_t)(y - 0x60) << 12, v0) + (uint64_t)(uint32_t)((x + 0xa0) << 3)) >> 12;
            int32_t F = (int32_t)(C + E) >> 12;
            int i = D + 0x80;
            int j = F + 0x60;
            if (i >= 0 && i < 0x100 && j >= 0 && j < 0xc0) {
                uint16_t *tex = *(uint16_t **)(p + 0x9c);
                dst[(y << 8) + x] = tex[(i - 0x40) + ((j - 0x30) << 7)];
            }
        }
    }
}
