#include "ffc/types.h"

extern void *func_0204de50(int *s);
extern int *func_0204de70(void *a);
extern int **func_0204de78(void *a);
extern int func_0204de80(void *a);
extern int func_0204a980(int c);
extern int func_0204a9b8(int b, int *r7, int c);
extern int func_0204a9a8(int *r7);
extern void func_0204dec8(int b);
extern void func_0204ded0(int b);
extern int func_0204aa28(int *r4, int b, int *r7, int c, int p0, int p4);
extern int func_0204b0b4(int *r4);

int func_0204cd10(int *s) {
    void *a = func_0204de50(s);
    int *r4 = func_0204de70(a);
    int **r6 = func_0204de78(a);
    int *r7 = (int *)(*r6)[3];
    int b = func_0204de80(a);
    int r;
    int c;

    if (s[0xce] == 1) {
        if (func_0204a980(r4[3]) == -1) {
            s[0xce] = 0;
        }
    }

    if (s[0xce] == 0) {
        c = r4[3];
        if (c >= 0) {
            if (func_0204a9b8(b, r7, c) < 0) {
                r4[3] = -1;
                s[0xcc] = 10;
                return 0;
            }
        }
        r4[3] = func_0204a9a8(r7);
        if (r4[3] < 0) {
            s[0xcc] = 3;
            return 0;
        }
        func_0204dec8(b);
        (*r6)[4] = r4[3];
        func_0204ded0(b);
        if (r7[0] != 0) {
            return 0;
        }
        r = func_0204aa28(r4, b, r7, r4[3], s[0xc5], s[0xc7]);
        if (r < 0) {
            if (r7[3] != 0) {
                s[0xcc] = 13;
                return 0;
            }
            if (func_0204b0b4(r4) != 0) {
                s[0xcc] = 14;
                return 0;
            }
            s[0xcc] = 5;
            return 0;
        }
    } else {
        func_0204dec8(b);
        (*r6)[4] = r4[3];
        func_0204ded0(b);
    }
    return 1;
}
