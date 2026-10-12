#include "ffc/types.h"

extern void *func_ov000_0216333c(void *a);
extern void *func_ov000_02163350(void *p);
extern void *func_ov000_0216335c(uint32_t x);
extern void *func_02084b2c(void *dst, int c, uint32_t n);
extern void func_ov000_021633f0(void);
extern void func_ov000_02163758(void);
extern void func_ov000_02161848(void);
extern int func_ov000_0215e1d8(int x);

void func_ov000_0215c240(void *a, uint32_t r1, uint32_t r2, uint32_t r3,
                         uint32_t s0, uint32_t s1, uint32_t s2, uint32_t s3)
{
    uint8_t *p;

    p = func_ov000_0216333c(a);
    p = func_ov000_02163350(p);
    *(uint32_t *)(p + 0) = r1;
    p = func_ov000_02163350(p);
    *(uint32_t *)(p + 4) = r2;
    p = func_ov000_02163350(p);
    *(uint32_t *)(p + 8) = r3;
    p = func_ov000_02163350(p);
    *(uint32_t *)(p + 0x10) = 0;
    p = func_ov000_02163350(p);
    *(uint32_t *)(p + 0x5d8) = 0;
    p = func_ov000_02163350(p);
    *(uint16_t *)(p + 0x5d4) = 0;
    p = func_ov000_02163350(p);
    *(uint32_t *)(p + 0x5e0) = 0;
    p = func_ov000_0216335c(0);
    p = func_ov000_02163350(p);
    *(uint8_t *)(p + 0x19) = 0;
    p = func_ov000_02163350(p);
    *(uint32_t *)(p + 0x678) = 0;
    p = func_ov000_02163350(p);
    *(uint32_t *)(p + 0x684) = s0;
    p = func_ov000_02163350(p);
    *(uint32_t *)(p + 0x688) = s1;
    p = func_ov000_02163350(p);
    *(uint32_t *)(p + 0x68c) = s2;
    p = func_ov000_02163350(p);
    *(uint32_t *)(p + 0x690) = s3;
    p = func_ov000_02163350(p);
    p = func_02084b2c(p + 0x694, 0, 0x40);
    p = func_ov000_02163350(p);
    *(uint32_t *)(p + 0x6d4) = 0;
    p = func_ov000_02163350(p);
    *(uint32_t *)(p + 0x770) = 0;
    p = func_ov000_02163350(p);
    *(uint32_t *)(p + 0x774) = 0;
    p = func_ov000_02163350(p);
    *(uint32_t *)(p + 0x780) = 0;
    p = func_ov000_02163350(p);
    *(uint32_t *)(p + 0x784) = 0;
    p = func_ov000_02163350(p);
    *(uint32_t *)(p + 0x788) = 0;
    p = func_ov000_02163350(p);
    *(uint32_t *)(p + 0x78c) = 0;
    p = func_ov000_02163350(p);
    *(uint32_t *)(p + 0x790) = 0;
    p = func_ov000_02163350(p);
    *(uint8_t *)(p + 0x794) = 0;
    p = func_ov000_02163350(p);
    *(uint32_t *)(p + 0x798) = 0;
    p = func_ov000_02163350(p);
    *(uint8_t *)(p + 0x15) = 0;
    p = func_ov000_02163350(p);
    *(uint8_t *)(p + 0x16) = 0;
    p = func_ov000_02163350(p);
    *(uint32_t *)(p + 0x5f0) = 0;
    *(uint32_t *)(p + 0x5f4) = 0;
    p = func_ov000_02163350(p);
    *(uint32_t *)(p + 0x7c8) = 0;
    p = func_ov000_02163350(p);
    *(uint32_t *)(p + 0x7d4) = 1;
    p = func_ov000_02163350(p);
    *(uint8_t *)(p + 0x7b5) = 0;
    p = func_ov000_02163350(p);
    *(uint8_t *)(p + 0x7b6) = 0;
    p = func_ov000_02163350(p);
    *(uint32_t *)(p + 0x7b0) = 0;
    func_ov000_021633f0();
    func_ov000_02163758();
    func_ov000_02161848();
    func_ov000_0215e1d8(0);
}
