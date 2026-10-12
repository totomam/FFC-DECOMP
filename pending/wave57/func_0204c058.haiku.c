#include "ffc/types.h"

extern uint32_t *func_0204dc5c(void *a);
extern int32_t func_0204dcc0(void *a, uint32_t *v, uint32_t x, uint32_t off);
extern int32_t func_0204bf04(uint32_t *b, uint32_t p2, uint32_t s0, uint32_t s1, void *ptr, uint32_t n);
extern void func_0204acc0(void *buf, uint32_t t);
extern uint32_t func_0204adb0(void *buf, int8_t c);

int32_t func_0204c058(void *a, uint32_t *b, uint32_t p2, uint32_t p3, uint32_t s0, uint32_t s1, uint32_t mode)
{
    uint32_t *v;
    uint32_t off;
    uint32_t count;
    int8_t *data;
    uint32_t tmp;
    uint32_t i;
    int32_t r;

    v = func_0204dc5c(a);
    if (v == 0) {
        return 3;
    }
    off = 0;
    v[9] = off;
    for (;;) {
        if (*b != 0) {
            return 3;
        }
        v[10] = 0;
        r = func_0204dcc0(a, v, p3, off);
        if (r < 0) {
            return 3;
        }
        count = v[10];
        data = (int8_t *)v[9];
        if (count == 0) {
            return 0;
        }
        if (data == 0) {
            return 3;
        }
        off += count;
        if (mode == 0 || mode == 1) {
            r = func_0204bf04(b, p2, s0, s1, data, count);
            if (r < 0) {
                return 1;
            }
            if (r == 0) {
                return 2;
            }
        } else if (mode == 2) {
            for (i = 0; i < count; i++) {
                uint32_t res;
                func_0204acc0(&tmp, 3);
                res = func_0204adb0(&tmp, data[i]);
                r = func_0204bf04(b, p2, s0, s1, &tmp, res);
                if (r < 0) {
                    return 1;
                }
                if (r == 0) {
                    return 2;
                }
            }
        }
    }
    return 0;
}
