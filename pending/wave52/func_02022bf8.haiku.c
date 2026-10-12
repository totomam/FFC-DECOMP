#include "ffc/types.h"

extern int16_t data_020a1bd0[];
extern void func_020810c4(int16_t a, int16_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f, uint32_t g);
extern void func_02080a40(void *p);
extern void func_02080b78(void *a, void *b, uint32_t c, uint32_t d, uint32_t e);
extern void func_02080aa0(void *a, void *b, uint32_t c, uint32_t d, uint32_t e);
extern void func_02080d08(uint32_t a, void *b, uint32_t c);

void func_02022bf8(uint32_t *p, uint32_t r1, uint32_t x)
{
    uint32_t tmp1[16];
    uint32_t tmp2[16];
    uint32_t one = 0x1000;
    uint32_t idx;

    p[0x8e] = r1;
    idx = ((uint16_t)r1) >> 4;
    func_020810c4(data_020a1bd0[idx * 2], data_020a1bd0[idx * 2 + 1], 0x1555, one, p[7], one, x);
    if (((uint8_t *)p)[0x80] != 0) {
        func_02080a40(tmp1);
        func_02080b78(tmp1, tmp1, 0xfffff000, one, one);
        func_02080d08(x, tmp1, x);
    }
    if (p[0x85] == 0 && p[0x86] == 0) {
        return;
    }
    func_02080a40(tmp2);
    func_02080aa0(tmp2, tmp2, p[0x85], p[0x86], 0);
    func_02080d08(x, tmp2, x);
}
