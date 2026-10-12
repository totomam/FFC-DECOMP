#include "ffc/types.h"

extern int32_t func_ov000_02168768(void *p);
extern int32_t *func_ov000_0216876c(void *p, int32_t i);
extern int32_t func_ov000_021684f8(void *a, void *b);
extern void func_0209351c(void);
extern uint32_t func_02099dd8(void);

int func_ov000_0216847c(int32_t *s, void *p, uint32_t *out) {
    int32_t i;
    int32_t *e;

    if (s[3] == -1) {
        s[3] = s[2];
    }
    i = s[3] + 1;
    while (i < func_ov000_02168768((void *)s[0])) {
        e = func_ov000_0216876c((void *)s[0], i);
        if (e[5] == s[2]) {
            if (func_ov000_021684f8(p, e)) {
                s[3] = i;
                if (e[2] == 0) {
                    return 0;
                }
                func_0209351c();
                *out = func_02099dd8();
                return 1;
            }
        }
        if (e[5] < s[2]) {
            return 0;
        }
        i++;
    }
    return 0;
}
