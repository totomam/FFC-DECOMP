#include "ffc/types.h"

extern uint32_t func_02092864(const uint8_t *text);
extern int func_ov001_02186fd8(void *self);
extern void func_ov001_0218717c(void *self);
extern void func_ov001_021870d4(void *cur, uint32_t n, void *val);
extern void func_ov001_02187114(void *cur, uint32_t v, void *val);
extern void func_ov001_021870a0(void *cur, void *src, void *val);
extern void func_ov001_02187160(void *cur, void *src, uint32_t n, void *val);
extern void func_ov001_021870e8(void *cur, uint32_t v, void *val);
extern int func_ov000_0216551c(uint32_t h);
extern void func_ov001_021874c4(void *self);
extern void *func_ov000_021653d4(uint32_t size);
extern uint8_t data_ov001_0219430c[];

uint32_t func_ov001_02187288(uint8_t *self, const uint8_t *a1, const uint8_t *a2, uint32_t a3, uint32_t a5)
{
    uint8_t buf[0x400];
    uint32_t val;
    uint8_t *cur;
    uint16_t h;
    uint32_t lim;
    uint32_t off;
    const uint8_t *p6 = a1;
    const uint8_t *p7 = a2;

    if (p6 == 0) {
        p6 = data_ov001_0219430c;
    }
    if (p7 == 0) {
        p7 = data_ov001_0219430c;
    }
    lim = 0x100;
    if (func_02092864(p6) > lim) {
        return 6;
    }
    lim += 0xff;
    if (func_02092864(p7) > lim) {
        return 6;
    }
    {
        int r = func_ov001_02186fd8(self);
        if (r != 0) {
            return r;
        }
    }
    *(uint32_t *)(self + 0x7c8) = a3;
    func_ov001_0218717c(self);
    val = 2;
    cur = buf + 2;
    func_ov001_021870d4(&cur, 0, &val);
    func_ov001_021870d4(&cur, 1, &val);
    func_ov001_021870d4(&cur, 3, &val);
    off = 0x6bc;
    func_ov001_02187114(&cur, *(uint32_t *)(self + off), &val);
    func_ov001_021870a0(&cur, self + 0xc, &val);
    func_ov001_021870a0(&cur, self + 0x30, &val);
    func_ov001_02187160(&cur, self + 0x74, 8, &val);
    func_ov001_021870a0(&cur, (void *)p7, &val);
    func_ov001_021870a0(&cur, (void *)p6, &val);
    {
        uint32_t m = 0xff;
        uint32_t r1v, r2v, r3v, r4v;
        m <<= 24;
        r1v = a3 << 24;
        r3v = r1v & m;
        r2v = a3 << 8;
        r2v &= (m >> 8);
        r1v = (a3 >> 24) << 24;
        r4v = a3 >> 8;
        r4v &= (m >> 16);
        r1v = (r1v >> 24) | r4v;
        r1v |= r2v;
        r1v |= r3v;
        func_ov001_021870e8(&cur, r1v, &val);
    }
    if (*(uint32_t *)(self + 0x7c8) & 8) {
        off -= 0x14;
        func_ov001_021870e8(&cur, *(uint32_t *)(self + off), &val);
    }
    if (*(uint32_t *)(self + 0x7c8) & 0x80) {
        func_ov001_02187114(&cur, a5, &val);
    }
    {
        uint32_t lo = val & 0xffff;
        h = (uint16_t)(((lo >> 8) & 0xff) | ((lo << 8) & 0xff00));
    }
    buf[0] = ((uint8_t *)&h)[0];
    buf[1] = ((uint8_t *)&h)[1];
    if (func_ov000_0216551c(*(uint32_t *)(self + 0x6b4)) <= 0) {
        func_ov001_021874c4(self);
        return 3;
    }
    *(uint32_t *)self = 3;
    *(uint32_t *)(self + 0x7cc) = 0;
    if (*(uint32_t *)(self + 0x7c) == 0) {
        *(void **)(self + 0x7c) = func_ov000_021653d4(0x1000);
        if (*(uint32_t *)(self + 0x7c) == 0) {
            return 5;
        }
        *(uint32_t *)(self + 0x80) = 0;
    }
    return 0;
}
