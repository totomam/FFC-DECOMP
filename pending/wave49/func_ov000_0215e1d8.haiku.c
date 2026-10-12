#include "ffc/types.h"

extern uint8_t *func_ov000_02163350(void);
extern uint32_t func_ov000_02159358(uint32_t x);
extern void func_020849e0(uint32_t c, void *dst, uint32_t n);
extern void func_ov000_021639e0(void);
extern int func_ov000_021633a8(void);
extern void func_ov000_0216335c(int x);
extern void func_ov000_021633f0(void);
extern void func_ov000_02163758(void);
extern void func_02084b2c(void *dst, uint32_t c, uint32_t n);

void func_ov000_0215e1d8(int a)
{
    uint8_t *p;
    uint32_t v;
    int ofs = 0x5f8;
    int ofs2;

    func_ov000_02163350()[0xc] = 0;

    p = func_ov000_02163350();
    p[ofs] = 0;

    p = func_ov000_02163350();
    v = func_ov000_02159358(0x10000);
    *(uint16_t *)(p + ofs + 2) = (uint16_t)v;

    p = func_ov000_02163350();
    *(uint32_t *)(p + ofs + 4) = 0;

    p = func_ov000_02163350();
    *(uint32_t *)(p + ofs + 8) = 0;
    *(uint32_t *)(p + ofs + 0xc) = 0;

    p = func_ov000_02163350();
    *(uint32_t *)(p + ofs + 0x10) = 0;
    *(uint32_t *)(p + ofs + 0x14) = 0;

    p = func_ov000_02163350();
    *(uint8_t *)(p + ofs + 0x28) = 0;

    p = func_ov000_02163350();
    *(uint8_t *)(p + ofs + 0x32) = 0;

    p = func_ov000_02163350();
    *(uint8_t *)(p + ofs + 0x33) = 0;

    p = func_ov000_02163350();
    *(uint8_t *)(p + ofs + 0x34) = 0;

    p = func_ov000_02163350();
    *(uint8_t *)(p + ofs + 0x35) = 0;

    p = func_ov000_02163350();
    *(uint8_t *)(p + ofs + 0x30) = 0;

    p = func_ov000_02163350();
    *(uint8_t *)(p + ofs + 0x31) = 0;

    p = func_ov000_02163350();
    *(uint16_t *)(p + ofs + 0x3a) = 0;

    p = func_ov000_02163350();
    *(uint32_t *)(p + ofs + 0x60) = 0;
    *(uint32_t *)(p + ofs + 0x64) = 0;

    p = func_ov000_02163350();
    *(uint32_t *)(p + ofs + 0x70) = 0;
    *(uint32_t *)(p + ofs + 0x74) = 0;

    p = func_ov000_02163350();
    func_020849e0(0, p + ofs + 0xe0, 0x98);

    p = func_ov000_02163350();
    *(uint32_t *)(p + ofs - 0x54) = 0;

    func_ov000_021639e0();

    if (a == 2) {
        if (func_ov000_021633a8() == 2) {
            func_ov000_0216335c(0xd);
            return;
        }
        if (func_ov000_021633a8() == 1) {
            func_ov000_0216335c(1);
        }
        return;
    }

    p = func_ov000_02163350();
    p[0x18] = 0;

    p = func_ov000_02163350();
    *(uint32_t *)(p + ofs - 0x1c) = 0;

    p = func_ov000_02163350();
    *(uint32_t *)(p + ofs - 0x14) = 0;

    p = func_ov000_02163350();
    *(uint16_t *)(p + ofs + 0x38) = 0;

    p = func_ov000_02163350();
    *(uint8_t *)(p + ofs + 0x29) = 0;

    p = func_ov000_02163350();
    *(uint32_t *)(p + ofs + 0x40) = 0;

    p = func_ov000_02163350();
    *(uint32_t *)(p + ofs + 0x44) = 0;
    *(uint32_t *)(p + ofs + 0x48) = 0;

    p = func_ov000_02163350();
    *(uint32_t *)(p + ofs + 0x4c) = 0;

    p = func_ov000_02163350();
    *(uint32_t *)(p + ofs + 0x50) = 0;
    *(uint32_t *)(p + ofs + 0x54) = 0;

    p = func_ov000_02163350();
    *(uint32_t *)(p + ofs + 0x58) = 0;

    p = func_ov000_02163350();
    *(uint32_t *)(p + ofs + 0x84) = 0;

    p = func_ov000_02163350();
    func_020849e0(0, p + ofs + 0x18, 0xc);

    ofs2 = 0x788;
    p = func_ov000_02163350();
    *(uint32_t *)(p + ofs2) = 0;

    p = func_ov000_02163350();
    *(uint32_t *)(p + ofs2 + 4) = 0;

    p = func_ov000_02163350();
    *(uint8_t *)(p + ofs2 + 0xc) = 0;

    p = func_ov000_02163350();
    *(uint8_t *)(p + ofs2 + 0x20) = 1;

    p = func_ov000_02163350();
    *(uint32_t *)(p + ofs2 + 0x24) = 0;

    p = func_ov000_02163350();
    p[0x16] = 0;

    p = func_ov000_02163350();
    p[0xd] = 0;

    p = func_ov000_02163350();
    *(uint32_t *)(p + ofs2 + 0x30) = 0;

    p = func_ov000_02163350();
    *(uint32_t *)(p + ofs2 + 0x38) = 0;

    func_ov000_021633f0();
    func_ov000_02163758();

    p = func_ov000_02163350();
    *(uint32_t *)(p + ofs - 0x7c) = 0;

    if (a == 1) {
        if (func_ov000_02163350()[0x15] != 0) {
            if (func_ov000_02163350()[0x15] != 1) {
                return;
            }
        }
        func_ov000_0216335c(0x16);
        return;
    }

    p = func_ov000_02163350();
    p[0x14] = 0;

    p = func_ov000_02163350();
    p[0x17] = 0;

    p = func_ov000_02163350();
    p[0x4c] = 0;

    p = func_ov000_02163350();
    *(uint32_t *)(p + ofs + 0x88) = 0;

    p = func_ov000_02163350();
    *(uint8_t *)(p + ofs + 0x36) = 0;

    p = func_ov000_02163350();
    *(uint32_t *)(p + ofs + 0x78) = 0;
    *(uint32_t *)(p + ofs + 0x7c) = 0;

    p = func_ov000_02163350();
    *(uint32_t *)(p + ofs2 - 0x10) = 0;

    p = func_ov000_02163350();
    *(uint32_t *)(p + ofs2 - 0xc) = 0;

    p = func_ov000_02163350();
    func_02084b2c(p + ofs2 + 0x34, 0, 4);
}
