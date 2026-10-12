#include "ffc/types.h"

extern int func_ov000_0215eb08(void);
extern uint8_t *func_ov000_02163654(void *p);
extern void func_ov000_0215ec64(void *s, uint32_t a, uint32_t b, uint32_t c);
extern uint32_t func_ov000_0215b4b0(void);
extern int func_ov000_021644a4(uint32_t a, uint32_t b, void *c, uint32_t d, uint32_t e);
extern uint8_t *func_ov000_02163350(void);
extern int func_ov001_02175ea8(uint32_t a, void *b);
extern int func_ov000_02158d6c(uint32_t a, uint32_t b, void *c, uint32_t d);
extern int func_ov000_0215ed20(uint32_t a, uint32_t b, void *c, void *d);
extern int func_ov000_0215eccc(uint32_t a, uint32_t b, uint32_t c, uint32_t d, void *e);
extern uint64_t func_020882cc(void);
extern void func_020849f4(void *a, void *b, uint32_t n);

int func_ov000_0215eb30(uint32_t p1, void *p2, uint32_t p3, uint32_t p4, uint32_t p5, uint32_t p6)
{
    uint8_t s[0x94];
    uint8_t buf[0x200];
    int ret;

    if (func_ov000_0215eb08()) {
        uint8_t *r4 = func_ov000_02163654(p2);
        func_ov000_0215ec64(s, p1, p5, p6);
        uint32_t x = func_ov000_0215b4b0();
        ret = 0;
        func_ov000_021644a4(x, r4[0x16], s, s[9] + 0x14, 0);
    } else {
        if (func_ov001_02175ea8(*(uint32_t *)func_ov000_02163350(), p2)) {
            int idx = 0;
            if (p5 && p6) {
                idx = func_ov000_02158d6c(p5, p6 << 2, buf, 0x200);
            }
            buf[idx] = 0;
            ret = func_ov000_0215ed20(*(uint32_t *)func_ov000_02163350(), p1, p2, buf);
        } else {
            if (p3 == 0) {
                uint8_t *q = func_ov000_02163654(p2);
                p3 = *(uint32_t *)(q + 4);
                p4 = *(uint16_t *)(q + 0xc);
            }
            ret = func_ov000_0215eccc(p1, p3, p4, p5, (void *)p6);
        }
    }

    if (p1 == 2 || p1 == 6 || (uint8_t)(p1 + 0xf8) <= 1) {
        uint64_t t;
        uint8_t *base;
        base = func_ov000_02163350();
        base[0x6d8] = (uint8_t)p1;
        base = func_ov000_02163350();
        *(uint16_t *)(base + 0x6da) = (uint16_t)p4;
        base = func_ov000_02163350();
        *(uint32_t *)(base + 0x6dc) = p3;
        base = func_ov000_02163350();
        *(uint32_t *)(base + 0x760) = (uint32_t)(uintptr_t)p2;
        base = func_ov000_02163350();
        *(uint32_t *)(base + 0x764) = p6;
        t = func_020882cc();
        base = func_ov000_02163350();
        *(uint32_t *)(base + 0x768) = (uint32_t)t;
        *(uint32_t *)(base + 0x76c) = (uint32_t)(t >> 32);
        if (p5 && p6) {
            base = func_ov000_02163350();
            func_020849f4(p5, base + 0x6e0, p6 << 2);
        }
    }
    return ret;
}
