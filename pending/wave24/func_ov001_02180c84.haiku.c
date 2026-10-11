#include "ffc/types.h"

extern int func_ov001_02181b2c(void *p);
extern int func_ov001_02180870(void *p, int a, int b);

int func_ov001_02180c84(uint32_t *p) {
    int ret;
    if (func_ov001_02181b2c(p) == 0) {
        return 0;
    }
    {
        int r2 = 0;
        if (p[3] != 6) {
            r2 = 1;
        }
        ret = func_ov001_02180870(p, 2, r2);
    }
    if (ret == 0) {
        return 0;
    }
    return 1;
}
