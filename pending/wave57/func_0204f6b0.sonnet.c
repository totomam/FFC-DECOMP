#include "ffc/types.h"

extern void func_02088f30(void);
extern int func_0204f644(void *ctx, uint32_t v);
extern void func_0204f64c(void *ctx, uint32_t v, uint32_t a, uint32_t idx);

void func_0204f6b0(void *ctx, uint32_t *p, uint32_t *out)
{
    uint32_t i;
    uint32_t n;
    uint32_t k;

    if (p[0] == 0xFFFFFFFFu) {
        func_02088f30();
    }
    if (p[1] == 0) {
        for (i = 0; i < 4; i++) {
            out[i + 1] = 0;
        }
        return;
    }
    n = 0;
    for (k = 0; k < 4; k++) {
        uint32_t v = p[3 + k];
        uint32_t nib = v & 0xf;
        uint32_t hi = (v & 0xf0) >> 4;
        int flag = (v & 0x100) != 0;
        if (nib == 0) {
            break;
        }
        if (func_0204f644(ctx, nib)) {
            if (flag) {
                break;
            }
        } else {
            out[n + 1] = nib;
            func_0204f64c(ctx, nib, p[0], n + hi);
            n++;
            if (n >= p[2]) {
                out[0] = p[1];
                if (n >= 4) {
                    return;
                }
                do {
                    out[n + 1] = 0;
                    n++;
                } while (n < 4);
                return;
            }
        }
    }
    func_02088f30();
}
