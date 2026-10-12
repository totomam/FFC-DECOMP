#include "ffc/types.h"

extern int func_ov001_021732b8(void);
extern int *func_ov001_02172330(void);
extern int func_ov000_021658c0(const char *s);
extern void func_ov001_02172610(int *h);
extern int func_ov001_02171a60(int *h, void *b, int flag, int a3);
extern int func_ov001_02171a10(int *h, void *b, int c, int d);
extern int func_ov001_0217395c(int *h);
extern int func_ov001_0217315c(int *h);
extern void func_ov000_02165938(int n);
extern int data_ov001_02194c1c;

int func_ov001_0217332c(const char *s, const char *t, int flag, int a3, int p5, int p6, int p7, int p8, int p9, int p10)
{
    int *h;
    int r;

    if (s == 0 || s[0] == 0) {
        return -1;
    }
    if (a3 < 0) {
        return -1;
    }
    if (flag != 0 && a3 == 0) {
        return -1;
    }
    if (data_ov001_02194c1c == 0) {
        func_ov001_021732b8();
    }
    h = func_ov001_02172330();
    if (h == 0) {
        return -1;
    }
    h[3] = 0;
    h[5] = func_ov000_021658c0(s);
    if (h[5] == 0) {
        func_ov001_02172610(h);
        return -1;
    }
    if (t != 0 && t[0] != 0) {
        h[11] = func_ov000_021658c0(t);
        if (h[11] == 0) {
            func_ov001_02172610(h);
            return -1;
        }
    }
    h[0x59] = p5;
    h[14] = p7;
    h[17] = p8;
    h[18] = p9;
    h[19] = p10;
    h[0x57] = p6;
    r = (flag != 0);
    h[0x43] = r;
    if (r != 0) {
        r = func_ov001_02171a60(h, (char *)h + 0xe8, flag, a3);
    } else {
        r = func_ov001_02171a10(h, (char *)h + 0xe8, 0x800, 0x800);
    }
    if (r == 0) {
        func_ov001_02172610(h);
        return -1;
    }
    if (p5 != 0) {
        if (func_ov001_0217395c(h) == 0) {
            func_ov001_02172610(h);
            return -1;
        }
    }
    if (p7 != 0) {
        while (func_ov001_0217315c(h) == 0) {
            func_ov000_02165938(10);
        }
        return 0;
    }
    return h[1];
}
