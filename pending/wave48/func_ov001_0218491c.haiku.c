#include "ffc/types.h"

extern void func_ov000_021652a8(int a, int b, int c, const void *d, ...);
extern int func_ov001_02184730(uint32_t *a, uint8_t *b, void *s);
extern void func_ov000_0216552c(uint32_t x, uint8_t *b, uint32_t y, int z, int c, int d);
extern void func_ov001_021846f8(uint32_t *a, uint8_t *b, int l0, uint8_t *p0, int l1, uint8_t *p1, int l2, uint8_t *p2);

extern char data_ov001_021937c0[];
extern char data_ov001_021937fc[];
extern char data_ov001_02193838[];
extern char data_ov001_02193874[];
extern char data_ov001_021938b0[];
extern char data_ov001_021938e0[];
extern char data_ov001_0219390c[];

struct S {
    uint32_t f0;
    uint32_t f1;
    uint32_t f2;
    uint32_t f3;
    uint32_t f4;
    uint8_t mid[0x100];
    uint32_t last;
};

void func_ov001_0218491c(uint32_t *a, uint8_t *b, uint8_t *p, int n, int c)
{
    struct S s;
    int flag = 0;
    int len0;
    int len1;
    uint8_t *ptr1 = 0;
    uint8_t *ptr2 = 0;
    uint8_t *ptr3 = 0;
    int len2;

    if (n < 3) {
        func_ov000_021652a8(3, 0, 2, data_ov001_021937c0, n);
        return;
    }
    len0 = *p++;
    n--;
    if (len0 != 0 && len0 != 0xff) {
        ptr1 = p;
        p += len0;
        n -= len0;
    }
    if (n < 2) {
        func_ov000_021652a8(3, 0, 2, data_ov001_021937fc, n);
        return;
    }
    len1 = *p++;
    n--;
    if (len1 != 0 && len1 != 0xff) {
        ptr2 = p;
        p += len1;
        n -= len1;
    }
    if (n < 1) {
        func_ov000_021652a8(3, 0, 2, data_ov001_02193838, n);
        return;
    }
    len2 = *p++;
    n--;
    if (len2 != 0 && len2 != 0xff) {
        ptr3 = p;
        p += len2;
        n -= len2;
    }
    if (n < 0) {
        func_ov000_021652a8(3, 0, 2, data_ov001_02193874, n);
        return;
    }
    if (n > 0) {
        flag = *p;
    }

    if ((flag & 1) == 1) {
        s.f0 = 0;
        s.f1 = 0;
        s.f2 = 0;
        s.f3 = 0;
        s.f4 = 0;
        s.last = 0;
        func_ov000_021652a8(3, 0, 0x10, data_ov001_021938b0);
        if (func_ov001_02184730(a, b, &s) == 1) {
            uint32_t *r7 = (uint32_t *)(b + 0x578);
            do {
                func_ov000_0216552c(a[0], b, *(uint32_t *)(b + 0x578), 0, c, 8);
                *r7 = 5;
                if (s.f1 > 7) {
                    return;
                }
            } while (func_ov001_02184730(a, b, &s) == 1);
        }
        func_ov000_021652a8(3, 0, 0x10, data_ov001_021938e0, s.f1);
        return;
    } else {
        func_ov000_021652a8(3, 0, 0x10, data_ov001_0219390c);
        func_ov001_021846f8(a, b, len0, ptr1, len1, ptr2, len2, ptr3);
        func_ov000_0216552c(a[0], b, *(uint32_t *)(b + 0x578), 0, c, 8);
    }
}
