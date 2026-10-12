#include "ffc/types.h"

extern uint8_t data_ov001_021910c8[];
extern uint8_t data_ov001_021910cc[];
extern uint32_t func_02092864(const uint8_t *text);
extern uint32_t func_02086ad4(void *object, uint32_t first, ...);
extern uint32_t func_ov001_021784f0(void *a, void *b, void *c);
extern uint32_t func_ov001_02178454(void *a, void *b, const uint8_t *c, uint32_t d);
extern uint32_t func_ov001_02178450(void *a, void *b, uint32_t c);
extern uint32_t func_ov000_02168688(uint32_t x);

uint32_t func_ov001_0217c3c0(void *a, uint32_t *b, const uint8_t *c, uint32_t d)
{
    uint32_t buf[8];
    uint32_t r;

    if (b == 0) {
        return 3;
    }
    if (c == 0) {
        c = data_ov001_021910c8;
    }
    if (d == 0xFFFFFFFF) {
        d = func_02092864(c);
    }
    func_02086ad4(buf, (uint32_t)data_ov001_021910cc, d);
    r = func_ov001_021784f0(a, b, buf);
    if (r != 0) {
        return r;
    }
    r = func_ov001_02178454(a, b, c, d);
    if (r != 0) {
        return r;
    }
    r = func_ov001_02178450(a, b, 0);
    if (r != 0) {
        return r;
    }
    r = func_ov000_02168688(0);
    *(uint32_t *)((uint8_t *)b + 0x14) = r + 10000;
    return 0;
}
