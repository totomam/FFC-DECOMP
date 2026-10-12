#include "ffc/types.h"

extern int32_t func_ov001_0217fdf8(void *p);
extern int32_t func_ov001_021808d8(void *p);
extern int32_t func_ov001_021815d8(void *p, uint16_t x, int32_t y);
extern void func_ov001_0217fe28(void *p, void *q, int32_t n);
extern void func_ov001_0217fe00(void *p, uint32_t v);
extern void func_ov001_0217fe0c(void *p, uint32_t v);
extern uint8_t data_ov001_02191a24[];

int32_t func_ov001_02181620(uint8_t *a, int32_t b, int32_t c, int32_t *d)
{
    uint16_t s;
    uint8_t *p;
    uint16_t idx;

    p = *(uint8_t **)(a + 8);
    s = (uint16_t)(c - *(int32_t *)(p + 0x44));

    if (func_ov001_0217fdf8(a + 0x50) < c) {
        if (func_ov001_021808d8(a) == 0) {
            return 0;
        }
        *d = 1;
        return 1;
    }

    idx = *(uint16_t *)(a + 0x64);
    if (func_ov001_021815d8(a, idx, c) == 0) {
        if (func_ov001_021808d8(a) == 0) {
            return 0;
        }
        *d = 1;
        return 1;
    }

    p = *(uint8_t **)(a + 8);
    if (*(int32_t *)(p + 0x40) == 2) {
        func_ov001_0217fe28(a + 0x50, &s, *(int32_t *)(p + 0x44));
    }
    func_ov001_0217fe28(a + 0x50, data_ov001_02191a24, 2);
    func_ov001_0217fe00(a + 0x50, (uint8_t)b);
    func_ov001_0217fe0c(a + 0x50, (*(uint16_t *)(a + 0x64))++);
    func_ov001_0217fe0c(a + 0x50, *(uint16_t *)(a + 0x66));
    *d = 0;
    return 1;
}
