#include "ffc/types.h"

extern void func_02069694(void *s, uint32_t v, int n);
extern void func_02069670(void *s, uint32_t v, int n, uint32_t w);
extern int func_020692e0(uint32_t v);

void func_ov012_021cfdc0(void *s, int flag)
{
    uint32_t *w = (uint32_t *)s;
    uint8_t i;

    for (i = 0; i < 15; i++) {
        if (flag) {
            func_02069694(s, w[i + 59], 4);
            func_02069694(s, w[i + 134], 2);
        }
        if (i < 5) {
            if (func_020692e0(w[151])) {
                func_02069670(s, w[i + 59], 4, w[151]);
                func_02069670(s, w[i + 134], 2, w[151]);
            } else {
                func_02069670(s, w[i + 59], 4, w[i + 134]);
                func_02069670(s, w[i + 134], 2, w[i + 59]);
            }
        } else if (i >= 10) {
            if (func_020692e0(w[149])) {
                func_02069670(s, w[i + 59], 4, w[149]);
                func_02069670(s, w[i + 134], 2, w[149]);
            } else {
                func_02069670(s, w[i + 59], 4, w[i + 134]);
                func_02069670(s, w[i + 134], 2, w[i + 59]);
            }
        } else {
            if (func_020692e0(w[150])) {
                func_02069670(s, w[i + 59], 4, w[150]);
                func_02069670(s, w[i + 134], 2, w[150]);
            } else {
                func_02069670(s, w[i + 59], 4, w[i + 134]);
                func_02069670(s, w[i + 134], 2, w[i + 59]);
            }
        }
    }
}
