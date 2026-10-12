#include "ffc/types.h"

extern void func_02084e04(void *dst, const void *src, uint32_t n);
extern void func_ov000_02145834(void *p, int a, int b, int c);

extern uint8_t data_ov000_0216bcc8[];
extern uint8_t data_ov000_0216bc60[];

void func_ov000_021463e8(uint8_t *p) {
    uint32_t v;
    uint16_t h;

    *(uint16_t *)(p + 6) = 0x200;
    func_02084e04(p + 8, p + 0x12, 10);
    func_02084e04(data_ov000_0216bcc8, p + 8, 6);
    v = *(uint32_t *)(data_ov000_0216bc60 + 0x50);
    h = (uint16_t)(v >> 16);
    *(uint16_t *)(p + 0xe) = (uint16_t)((h >> 8) | (h << 8));
    v = *(uint32_t *)(data_ov000_0216bc60 + 0x50);
    h = (uint16_t)v;
    *(uint16_t *)(p + 0x10) = (uint16_t)((h >> 8) | (h << 8));
    func_02084e04(p + 0x12, p - 0xe, 6);
    func_02084e04(data_ov000_0216bcc8, p - 8, 6);
    func_ov000_02145834(p - 0xe, 0x2a, 0, 0);
}
