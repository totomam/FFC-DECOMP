#include "ffc/types.h"

extern int func_0200764c(void *p);
extern void func_020070b4(void *p, int16_t *x, int16_t *y);

int func_020075fc(void *p, int a, int b) {
    int16_t s[2];
    if (!func_0200764c(p)) {
        return 0;
    }
    if (a == -1) {
        return 0;
    }
    func_020070b4(p, &s[1], &s[0]);
    if (s[1] == -1) {
        return 0;
    }
    if (s[1] == a && s[0] == b) {
        return 1;
    }
    return 0;
}
