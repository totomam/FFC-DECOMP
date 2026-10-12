#include "ffc/types.h"

typedef struct {
    uint32_t w0;
    uint32_t w1;
    uint32_t w2;
    uint8_t *buf;
} DataA;

extern DataA data_ov000_0217020c;
extern uint8_t data_ov000_0216afbc[];

extern void func_ov000_021591a8(uint32_t, void *, uint32_t, uint32_t);
extern int func_ov000_0215e7f8(uint8_t *, int, int, int, int);
extern uint32_t func_02092864(const uint8_t *text);
extern void *func_ov000_0215917c(uint32_t, uint32_t);
extern void func_ov000_0215dbd8(uint32_t, uint32_t);
extern void func_02084ca4(void *, void *, uint32_t);
extern void func_ov000_0215e450(uint32_t, uint32_t, uint32_t, uint32_t);
extern uint8_t *func_ov000_02163350(void);
extern void func_ov000_02162b90(uint32_t, uint32_t, uint32_t);
extern void func_ov000_0216335c(uint32_t);
extern uint32_t func_ov001_021865a0(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t,
                                    uint32_t, uint32_t, void *, uint32_t);
extern uint32_t func_ov000_02161bf4(void);
extern int func_ov000_02161a1c(uint32_t);
extern void func_ov000_0215e0d8(uint32_t);
extern int func_ov000_0215c3a0(uint32_t);
extern void func_ov001_02184030(uint32_t);
extern uint32_t func_ov000_0215e584(uint32_t);

int func_ov000_0215c4c8(uint32_t a0, uint32_t a1, void *a2, uint32_t a3,
                        uint32_t s5, uint32_t s6, uint32_t s7, uint32_t s8,
                        uint32_t s9, uint32_t s10, uint32_t s11, uint32_t s12)
{
    uint8_t *base;
    uint8_t buf[0x200];

    if (data_ov000_0217020c.buf != 0) {
        func_ov000_021591a8(4, data_ov000_0217020c.buf, 0, a3);
        data_ov000_0217020c.buf = 0;
    }

    if (a2 != 0) {
        int n = func_ov000_0215e7f8(buf, -1, 0x20, 3, 3);
        int size = (0x1ff - n) - func_02092864(data_ov000_0216afbc);
        uint8_t *p = func_ov000_0215917c(4, size);
        data_ov000_0217020c.buf = p;
        if (p == 0) {
            func_ov000_0215dbd8(9, 0xfffec77f);
            return;
        }
        func_02084ca4(a2, p, size);
        *(data_ov000_0217020c.buf + size - 1) = 0;
    }

    func_ov000_0215e450(0, a1, a3, s5);
    {
        uint32_t off = 0x778;
        base = func_ov000_02163350();
        *(uint32_t *)(base + off) = s6;
        base = func_ov000_02163350();
        *(uint32_t *)(base + off + 4) = s7;
        base = func_ov000_02163350();
        *(uint32_t *)(base + off + 8) = s8;
        base = func_ov000_02163350();
        *(uint32_t *)(base + off + 0xc) = s9;
        base = func_ov000_02163350();
        *(uint32_t *)(base + off + 0x38) = a0;
    }
    func_ov000_02162b90(s10, s11, s12);

    func_ov000_0216335c(0x16);
    base = func_ov000_02163350();
    {
        uint32_t o = 0x5e0;
        if (*(uint32_t *)(base + o) == 0) {
            uint8_t *b1 = func_ov000_02163350();
            uint8_t *b2 = func_ov000_02163350();
            uint8_t *b3 = func_ov000_02163350();
            uint8_t *b4 = func_ov000_02163350();
            *(uint32_t *)(b1 + o) = func_ov001_021865a0(
                *(uint32_t *)(b2 + o + 0xa4), *(uint32_t *)(b3 + o + 0xa4),
                *(uint32_t *)(b4 + o + 0xa8), 0, 0x14, 1, 0,
                func_ov000_02161bf4, 0);
        }

        base = func_ov000_02163350();
        if (*(uint32_t *)(base + o) == 0) {
            int r = func_ov000_02161a1c(5);
            if (r != 0) {
                return r;
            }
        }
    }

    func_ov000_0215e0d8(3);
    base = func_ov000_02163350();
    if (*(uint32_t *)(base + 0x10) == 0) {
        int r;
        base = func_ov000_02163350();
        r = func_ov000_0215c3a0(*(uint32_t *)(base + 0x678));
        if (r != 0) {
            return r;
        }
    } else {
        base = func_ov000_02163350();
        func_ov001_02184030(*(uint32_t *)(base + 0x10));
    }

    base = func_ov000_02163350();
    {
        int r = func_ov000_02161a1c(func_ov000_0215e584(*(uint32_t *)(base + 0x678)));
        if (r != 0) {
            return r;
        }
        return r;
    }
}
