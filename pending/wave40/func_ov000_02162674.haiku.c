#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t cmd;
    uint8_t x8;
    uint8_t x9;
    uint16_t x10;
    uint32_t f0xc;
    uint32_t f10;
} Hdr;

extern int func_ov000_0215b594(void);
extern uint8_t *func_ov000_02163350(void);
extern void func_02084ca4(void *src, void *dst, uint32_t n);
extern void func_ov000_0215ed88(uint8_t a, uint32_t b, uint32_t c, uint16_t d, void *e, uint32_t f);

void func_ov000_02162674(uint8_t *p, int n)
{
    Hdr h;
    uint8_t buf[0x80];

    if (func_ov000_0215b594() != 4) {
        if (func_ov000_0215b594() != 5) {
            return;
        }
        if (func_ov000_02163350()[0x14] != 2) {
            if (func_ov000_02163350()[0x14] != 3) {
                return;
            }
        }
    }

    func_02084ca4(p, &h, 0x14);
    { uint32_t t = *(volatile uint32_t *)&h.f10; *(volatile uint32_t *)&h.f10 = t; }
    if (h.cmd != 0x5a) {
        return;
    }
    if (n != h.x9 + 0x14) {
        return;
    }
    func_02084ca4(p + 0x14, buf, h.x9);
    func_ov000_0215ed88(h.x8, h.f10, h.f0xc, h.x10, buf, h.x9 >> 2);
}
