#include "ffc/types.h"

extern void func_ov001_02181b2c(void *p);
extern void func_ov001_0218054c(void *p);
extern int32_t func_ov001_0217ff48(void *p, uint32_t a, uint32_t b, uint32_t c);

typedef struct {
    uint32_t a0, a4, a8;
    int32_t c;
    uint32_t f10;
    uint32_t f14, f18;
    uint32_t f1c;
    uint32_t f20;
} S;

int func_ov001_021803dc(S *s, uint32_t t)
{
    int r;

    if (s->c < 5) {
        r = 0;
        if (s->f10 != 0) {
            if (s->f20 != 0) {
                if (t - s->f1c > s->f20) {
                    r = 1;
                }
            }
        } else {
            if (s->c < 4) {
                if (t - s->f1c > 0xea60) {
                    r = 1;
                }
            }
        }
        if (r != 0) {
            func_ov001_02181b2c(s);
            func_ov001_0218054c(s);
            if (func_ov001_0217ff48(s, 6, 0, 0) == 0) {
                return 0;
            }
        }
    }
    return 1;
}
