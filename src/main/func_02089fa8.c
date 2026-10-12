#include "ffc/types.h"

extern int32_t func_0208a2d4(void);
extern int32_t func_0208a2a4(void);
extern int32_t func_0208a220(void);
extern int32_t func_02089f08(int32_t x);
extern void func_0208a030(int32_t x);
extern void func_0208a28c(void);

int32_t func_02089fa8(int32_t a) {
    int32_t n = 1;
    int32_t r;
    if (!func_0208a2d4()) return 0;
    r = func_0208a2a4();
    if (r) return r;
    if (!(a & n)) return 0;
    if (func_0208a220() > 0) {
        n = 0;
        do {
            r = func_02089f08(n);
        } while (r != 0);
        r = func_0208a2a4();
        if (r) return r;
    } else {
        func_0208a030(n);
    }
    func_0208a28c();
    n = 1;
    do {
        func_02089f08(n);
        r = func_0208a2a4();
    } while (r == 0);
    return r;
}
