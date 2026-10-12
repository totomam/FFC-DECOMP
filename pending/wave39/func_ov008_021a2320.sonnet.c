#include "ffc/types.h"

extern void func_02069694(void *p, uint32_t a, uint32_t b);
extern void func_02069670(void *p, uint32_t a, uint32_t b, uint32_t c);

void func_ov008_021a2320(uint8_t *p) {
    uint8_t n = (uint8_t)(p[0x13e] % 4);
    func_02069694(p, *(uint32_t *)(p + 0xd4), 4);
    func_02069694(p, *(uint32_t *)(p + 0xd4), 2);
    func_02069670(p, *(uint32_t *)(p + 0xd4), 4, *(uint32_t *)(p + (uint8_t)(n + 4) * 4 + 0xdc));
    func_02069670(p, *(uint32_t *)(p + 0xd4), 2, *(uint32_t *)(p + n * 4 + 0xdc));
}
