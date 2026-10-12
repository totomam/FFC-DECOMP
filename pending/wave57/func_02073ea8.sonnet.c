#include "ffc/types.h"

extern uint32_t data_0213e098;
extern int func_02055054(uint32_t);
extern int func_ov007_021bf468(void);
extern int func_ov007_021bf480(void);
extern void func_020744d8(int, int);
extern int func_020744cc(int);
extern int func_ov007_021bf2d8(void);
extern void func_020744d4(int, int);

typedef int (*VFn)(void *);

void func_02073ea8(int *s) {
    int r;
    switch (s[6]) {
    case 0:
        r = ((VFn *)s[0])[3](s);
        s[8] = r;
        if (r == 0x14) {
            return;
        }
        if (r == 0) {
            s[6] = 1;
        } else {
            s[6] = 2;
        }
        return;
    case 1:
        s[7] += func_02055054(data_0213e098);
        if (func_ov007_021bf468() != 2) {
            r = func_ov007_021bf480();
            func_020744d8(s[5], r);
            s[3] = (s[3] & ~0xff) | 2;
            return;
        }
        if (func_020744cc(s[5]) >= s[7]) {
            return;
        }
        s[8] = 0x64;
        r = func_ov007_021bf2d8();
        if (r == 0) {
            s[6] = 3;
            return;
        }
        s[8] = r;
        s[6] = 2;
        return;
    case 3:
        if (func_ov007_021bf468() == 3) {
            return;
        }
        s[6] = 2;
        return;
    case 2:
        func_020744d4(s[5], s[8]);
        s[3] = (s[3] & ~0xff) | 2;
        return;
    default:
        return;
    }
}
