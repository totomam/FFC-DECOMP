#include "ffc/types.h"
extern int func_ov001_02181c3c(void *p);
extern int func_ov001_021801a4(void *p, int a, int b, int c, int d, int e, int f, int g);
extern int func_ov001_02180870(int a, int b, int c);
int func_ov001_0218145c(void *p, int a, int b, int c) {
    int r = func_ov001_02181c3c(p);
    if (*(int *)((uint8_t *)p + 0x2c) != 0) {
        if (!func_ov001_021801a4(p, r, a, b, 1, 0, 0, c)) return 0;
    }
    if (r == 0) return 1;
    return func_ov001_02180870(r, 6, 1) != 0;
}
