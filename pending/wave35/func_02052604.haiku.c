#include "ffc/types.h"

extern void func_0207e890(void *object);
extern void func_0207ebd0(void *destination, const void *source);
extern uint32_t func_0207e990(void *object, uint32_t second, uint32_t third, ...);
extern uintptr_t func_020525f0(const void *object);
extern void func_0207eba8(void *object);
extern uint32_t func_020518cc(void *object, uint32_t a, uintptr_t b);
extern void func_0207ea0c(void *object);

uint32_t func_02052604(uint32_t *r4) {
    uint32_t B[2];
    uint32_t A[18];
    uintptr_t v;

    func_0207e890(A);
    func_0207ebd0(B, r4);
    if (func_0207e990(A, B[0], B[1]) == 0) {
        return 0;
    }
    v = func_020525f0(r4);
    func_0207eba8(r4);
    if (func_020518cc(A, r4[1], v) == v) {
        func_0207ea0c(A);
        return 1;
    }
    func_0207ea0c(A);
    return 0;
}
