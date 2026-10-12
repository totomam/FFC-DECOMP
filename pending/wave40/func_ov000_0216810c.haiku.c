#include "ffc/types.h"

extern int32_t func_ov000_02168768(void *obj);
extern int32_t *func_ov000_0216876c(void *obj, int32_t idx);
extern int32_t func_ov000_021684f8(void *a, void *b);

int32_t func_ov000_0216810c(void *p, void *q) {
    int32_t *s = (int32_t *)p;
    int32_t n = s[2] + 1;
    int32_t lim = func_ov000_02168768((void *)s[0]);
    while (n < lim) {
        int32_t *it = func_ov000_0216876c((void *)s[0], n);
        if (it[5] == s[2]) {
            if (func_ov000_021684f8(q, it)) {
                s[2] = n;
                s[3] = -1;
                s[4] = -1;
                return 1;
            }
        }
        if (it[5] < s[2]) {
            return 0;
        }
        n++;
        lim = func_ov000_02168768((void *)s[0]);
    }
    return 0;
}
