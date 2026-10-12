#include "ffc/types.h"

extern void func_020849e0(uint32_t a, void *b, uint32_t c);
extern void func_0208dcfc(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint16_t s0, void *buf);

typedef struct {
    uint32_t tag;
    uint16_t w4;
    uint16_t w6;
    uint16_t flags;
    uint16_t w10;
    uint8_t b12;
    uint8_t b13;
    uint8_t b14;
} Hdr;

void func_0208ddf8(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint16_t s0, uint16_t e, uint16_t s1, uint32_t f1, uint32_t f2, uint32_t flag, uint32_t f3)
{
    Hdr h;

    func_020849e0(0, &h, 16);
    h.tag = 0x1e03;
    h.w4 = e;
    h.w6 = e;
    h.w10 = s1;
    h.b12 = f1;
    h.b13 = f2;
    h.b14 = f3;
    if (flag != 0 && e != 0) {
        h.tag |= 4;
        h.flags = e;
    }
    func_0208dcfc(a, b, c, d, s0, &h);
}
