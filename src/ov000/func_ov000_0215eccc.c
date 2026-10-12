#include "ffc/types.h"

extern void func_ov000_0215ec64(uint8_t *buf, void *a, uint32_t b, uint32_t c);
extern void *func_ov000_02163350(void);
extern uint32_t func_ov001_021821ac(uint32_t p, uint32_t x, uint32_t y);
extern int func_ov001_02186744(uint32_t v, uint32_t r, uint32_t c, uint8_t *buf, uint32_t e);

void func_ov000_0215eccc(void *a, uint32_t b, uint32_t c, uint32_t d, uint32_t e)
{
    uint8_t buf[0x94];
    uint8_t *base;
    int i;
    int r;
    uint32_t t;

    func_ov000_0215ec64(buf, a, d, e);
    i = 0;
    do {
        base = (uint8_t *)func_ov000_02163350();
        t = func_ov001_021821ac(b, 0, 0);
        r = func_ov001_02186744(*(uint32_t *)(base + 0x5e0), t, c, buf, buf[9] + 0x14);
        if (r == 0 || r != 2) {
            break;
        }
        i++;
    } while (i < 1);
}
