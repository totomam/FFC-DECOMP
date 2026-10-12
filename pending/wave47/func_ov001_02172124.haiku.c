#include "ffc/types.h"

extern int32_t func_ov001_02173078(void *self, void *p, int32_t x, int32_t y, int32_t *out);
extern int32_t func_ov000_0216551c(int32_t a, int32_t x, int32_t y, int32_t z);
extern int32_t func_ov000_021655a0(int32_t a);

int32_t func_ov001_02172124(void *self, int32_t x, int32_t y) {
    int32_t *w = (int32_t *)self;
    int32_t tmp;
    int32_t r;
    int32_t s;
    int32_t z;
    int32_t v;

    if (x == 0 || y == 0) {
        return 0;
    }
    if (w[0x66] != 0 && w[0x69] == 1 && w[0x6b] == 1) {
        z = 0;
        tmp = z;
        r = func_ov001_02173078(self, (char *)self + 0x194, x, y, &tmp);
        if (r == 1) {
            if (tmp == z - 1) {
                return z - 2;
            }
            r = tmp;
        } else {
            w[0x49] = 1;
            v = 5;
            w[0x10] = v;
            w[0x15] = z;
            return v - 6;
        }
    } else {
        r = func_ov000_0216551c(w[0x14], x, y, 0);
        if (r == -1) {
            s = func_ov000_021655a0(w[0x14]);
            if (s == -6 || s == -26 || s == -76) {
                return 0;
            }
            w[0x49] = 1;
            v = 5;
            w[0x15] = s;
            w[0x10] = v;
            return v - 6;
        }
    }
    if (w[4] == 6 && w[0x60] == 0) {
        w[0x5c] += r;
    }
    return r;
}
