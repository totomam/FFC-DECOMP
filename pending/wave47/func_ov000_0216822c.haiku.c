#include "ffc/types.h"

extern int32_t func_ov000_02168768(void *list);
extern void *func_ov000_0216876c(void *list, int32_t idx);
extern int32_t func_ov000_021684f8(void *a, void *e);
extern int32_t func_ov000_02165cf8(void *d, int32_t a, int32_t b, int32_t *c, int32_t e);
extern int32_t func_ov000_02165f08(void *d, int32_t a);

int32_t func_ov000_0216822c(int32_t *p, int32_t a1, int32_t a2, int32_t *a3)
{
    int32_t idx;
    int32_t *e;

    if (p[3] == -1) {
        p[3] = p[2];
    }
    idx = p[3] + 1;
    while (idx < func_ov000_02168768((void *)p[0])) {
        e = (int32_t *)func_ov000_0216876c((void *)p[0], idx);
        if (e[5] == p[2]) {
            if (func_ov000_021684f8((void *)a1, e) != 0) {
                if (a2 != 0) {
                    p[3] = idx;
                    if (e[2] != 0) {
                        func_ov000_02165cf8((void *)e[2], a2, e[3], a3, 0);
                    } else {
                        *a3 = 0;
                    }
                } else {
                    if (e[2] != 0) {
                        *a3 = func_ov000_02165f08((void *)e[2], 0);
                    } else {
                        *a3 = 0;
                    }
                }
                return 1;
            }
        }
        if (e[5] < p[2]) {
            return 0;
        }
        idx++;
    }
    return 0;
}
