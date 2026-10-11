#include "ffc/types.h"

extern int func_ov001_02181620(void *a, int b, int c, int *out);
extern void func_ov001_0217fe28(void *p, int b, int c);
extern int func_ov001_021816dc(void *a);

int func_ov001_02181714(void *a, int b, int c) {
    int out;
    int r = 0;
    if (!func_ov001_02181620(a, 0, c + 7, &out)) {
        return 0;
    }
    if (out) {
        return 1;
    }
    func_ov001_0217fe28((char *)a + 0x50, b, c);
    if (func_ov001_021816dc(a)) {
        r = 1;
    }
    return r;
}
