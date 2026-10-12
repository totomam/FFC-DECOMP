#include "ffc/types.h"
typedef struct { uint32_t a, b; } S;
extern void func_0207e890(void *object);
extern void func_0207ebd0(void *destination, const void *source);
extern uint32_t func_0207e990(void *object, S s);
extern uintptr_t func_020525f0(const void *object);
extern void func_0207eba8(void *object);
extern uint32_t func_020518cc(void *object, uint32_t a, uintptr_t b);
extern void func_0207ea0c(void *object);

uint32_t func_02052604(uint32_t *p) {
    S B;
    uint32_t A[18];
    uintptr_t v;

    func_0207e890(A);
    func_0207ebd0(&B, p);
    if (func_0207e990(A, B) == 0) {
        return 0;
    }
    v = func_020525f0(p);
    func_0207eba8(p);
    if (func_020518cc(A, p[1], v) != v) {
        func_0207ea0c(A);
        return 0;
    }
    func_0207ea0c(A);
    return 1;
}
