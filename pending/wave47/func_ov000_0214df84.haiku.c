#include "ffc/types.h"

extern int32_t func_ov000_0214e038(void *self, int32_t b, int32_t t, int32_t *out, uint32_t flag);
extern int32_t func_ov000_0214e0c4(void *self, int32_t a, int32_t x, int32_t out, int32_t c, int32_t d, uint32_t flag);

int32_t func_ov000_0214df84(void *self, int32_t a, int32_t b, int32_t c, int32_t d, uint32_t e)
{
    int32_t acc = 0;
    int32_t base = *(int32_t *)(*(int32_t *)(*(int32_t *)((uint8_t *)self + 0xa4) + 0x10c) + 0x54);
    int32_t t;
    int32_t x, out, r;
    uint32_t flag;

    if (*(int8_t *)((uint8_t *)self + 0xaf) == 1) {
        t = base - 42;
        if (b > t) {
            return base - 210;
        }
    } else {
        t = base - 54;
        if (b > t) {
            goto go;
        }
    }
    t = b;
go:
    flag = e & 1;
    if (b > 0) {
        do {
            x = func_ov000_0214e038(self, b, t, &out, e);
            if (x > 0) {
                r = func_ov000_0214e0c4(self, a, x, out, c, d, e);
                if (r <= 0) {
                    return -6;
                }
                a += x;
                acc += x;
                b -= x;
            }
            if (flag == 0) {
                if (x > 0) {
                    break;
                }
                return -6;
            }
        } while (b > 0);
    }
    return acc;
}
