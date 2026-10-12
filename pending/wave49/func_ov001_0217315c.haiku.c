#include "ffc/types.h"

extern void func_ov001_02174608(int *p);
extern void func_ov001_021746fc(int *p);
extern void func_ov001_021747a8(int *p);
extern void func_ov001_02174818(int *p);
extern void func_ov001_021749c8(int *p);
extern void func_ov001_02174b2c(int *p);
extern void func_ov001_02174d40(int *p);
extern void func_ov001_02174dd0(int *p);
extern void func_ov001_02174ef8(int *p);
extern void func_ov001_021752e4(int *p);
extern void func_ov001_021756e0(int *p);
extern int func_ov000_021652a8(int a, int b, int c, const void *d);
extern void func_ov001_021726c4(int *p);
extern int func_ov000_02165704(int a);
extern void func_ov001_021730e4(int *p);
extern int func_ov001_0217249c(int *p);
extern void func_ov001_02171e14(int *p);
extern int func_ov001_02172524(int *p);
extern uint8_t data_ov001_0218fb08[];

int func_ov001_0217315c(int *p)
{
    int r;
    if (p[0x55] != 0) {
        return 0;
    }
    p[0x55] = 1;
    if (p[4] == 0) {
        func_ov001_02174608(p);
    }
    if (p[4] == 1) {
        func_ov001_021746fc(p);
    }
    if (p[4] == 2) {
        func_ov001_021747a8(p);
    }
    if (p[4] == 3) {
        func_ov001_02174818(p);
    }
    if (p[4] == 4) {
        func_ov001_021749c8(p);
    }
    if (p[4] == 5) {
        func_ov001_02174b2c(p);
    }
    if (p[4] == 6) {
        func_ov001_02174d40(p);
    }
    if (p[4] == 7) {
        func_ov001_02174dd0(p);
    }
    if (p[4] == 8) {
        func_ov001_02174ef8(p);
    }
    if (p[4] == 9) {
        func_ov001_021752e4(p);
    }
    if (p[4] == 10) {
        func_ov001_021756e0(p);
    }
    if (p[4] == 11) {
        func_ov000_021652a8(8, 3, 0x10, data_ov001_0218fb08);
    }
    if (p[0x4c] != 0) {
        func_ov001_021726c4(p);
    }
    r = p[0x49];
    if (p[0x10] == 0x12 && r == 0) {
        if (func_ov000_02165704(p[0x14]) == 0) {
            p[0x49] = 1;
        }
    }
    if (p[0x49] != 0) {
        if (p[0x49 + 0x29] == 1) {
            func_ov001_021730e4(p);
            if (func_ov001_0217249c(p) == 0) {
                p[0x55] = 0;
                p[4] = 11;
                return 0;
            }
            func_ov001_02171e14(p);
            if (func_ov001_02172524(p) == 0) {
                p[0x55] = 0;
                return 0;
            }
        } else {
            if (func_ov001_0217249c(p) == 0) {
                p[0x55] = 0;
                p[4] = 11;
                return 0;
            }
            func_ov001_02171e14(p);
            if (func_ov001_02172524(p) == 0) {
                p[0x55] = 0;
                return 0;
            }
        }
    } else {
        p[0x55] = 0;
    }
    return r;
}
