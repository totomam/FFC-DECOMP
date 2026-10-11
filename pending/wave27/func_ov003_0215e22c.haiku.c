#include "ffc/types.h"

extern void func_02022d9c(void *a, void *b, int32_t c, uint16_t d, uint32_t e, uint32_t f);
extern void func_02022bec(void *a, uint16_t b);

void func_ov003_0215e22c(uint8_t *p) {
    uint32_t off = 0x15a;
    uint16_t x = *(uint16_t *)(p + off);
    int32_t v = *(int32_t *)(p + off + 6);
    uint16_t y = *(uint16_t *)(p + off + 2);
    if (v < 0x1000) {
        v = 0x1000;
    }
    func_02022d9c(*(void **)(p + 0xac), p + 0xe8, v, x, y, 0);
    func_02022bec(*(void **)(p + 0xac), *(uint16_t *)(p + 0x158));
}
