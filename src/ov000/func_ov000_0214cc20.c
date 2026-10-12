#include "ffc/types.h"

extern void func_02084ca4(void *dst, void *src, uint32_t size);
extern int func_ov000_0214c608(void *base, int n);
extern void func_ov000_0214c95c(void *a, void *b, void *c, void *d, int n, void *f);
extern void func_ov000_0214c7e0(void *a, void *b, void *c, int n);
extern void func_ov000_0214c6f0(void *a, void *b, void *c, int n);
extern void func_ov000_0214c630(void *a, void *b, void *c, int n);

void func_ov000_0214cc20(void *a, void *b, void *c, int n, uint8_t *base)
{
    int s = n * 2;
    uint8_t *A = base + s;
    uint8_t *B = A + s;
    uint8_t *C = B + s;
    uint8_t *D = C + s;
    uint8_t *E = D + s;
    uint8_t *F = E + s;

    func_02084ca4(b, base, s);
    func_02084ca4(c, B, s);
    *(uint16_t *)C = 1;

    if (func_ov000_0214c608(base, n) > 0) {
        do {
            func_ov000_0214c95c(A, B, base, E, n, F);
            func_02084ca4(base, B, s);
            func_02084ca4(E, base, s);
            func_ov000_0214c7e0(E, A, C, n);
            func_ov000_0214c6f0(E, D, E, n);
            func_02084ca4(C, D, s);
            func_02084ca4(E, C, s);
        } while (func_ov000_0214c608(base, n) > 0);
    }

    func_ov000_0214c630(D, D, c, n);
    func_ov000_0214c95c(0, D, c, a, n, F);
}
