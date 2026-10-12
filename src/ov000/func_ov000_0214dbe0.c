#include "ffc/types.h"

extern int func_ov000_02147e80(void);
extern int func_ov000_02147a70(int *out);
extern void func_02084e04(int a, int b, int c);
extern void func_ov000_02147b7c(int n);

int func_ov000_0214dbe0(char *p) {
    char *obj = *(char **)(p + 4);
    int a = *(int *)(p + 0x10);
    uint32_t lim = *(uint32_t *)(p + 0x14);
    int r7 = *(int *)(*(char **)(obj + 0xa0) + 0xf8);
    int local;
    int r;
    int ok;
    int d;

    if (*(int16_t *)(obj + 0xac) & 0x80) {
        return -15;
    }
    r = func_ov000_02147e80();
    if (r == 0) {
        return -6;
    }
    if (r == -1) {
        return 0;
    }
    r = func_ov000_02147a70(&local);
    if (r != 0) {
        d = local - r7;
        if (d <= 0) {
            int f = *(int8_t *)(obj + 0xaf);
            ok = 1;
            if (f != 0 && f != 4) {
                ok = 0;
            }
            if (ok != 0) {
                if (*(uint8_t *)(obj + 8) != 4) {
                    r = 0;
                }
            }
        }
    }
    if (*(int16_t *)(obj + 0xac) & 0x80) {
        return -15;
    }
    if (r == 0) {
        return 0;
    }
    if (lim > (uint32_t)local) {
        lim = (uint32_t)local;
    }
    func_02084e04(r, a, (int)lim);
    func_ov000_02147b7c((int)lim);
    return (int)lim;
}
