/* cflags: -lang c++ */
#include "ffc/types.h"
struct S { uint32_t a[3]; };
extern "C" {
void *func_020095b8(S *s, void *src);
void *func_020059cc(void *o);
void *func_0205681c(uint32_t n);
void *func_0205e240(void *p, S *s, uint32_t a, uint32_t b, uint32_t c);
}
struct T { S s; T(void *x) { func_020095b8(&s, x); } ~T() { func_020059cc(&s); } };
inline void *mk(void *p, const T &t, uint32_t b, uint32_t c, uint32_t d) { return func_0205e240(p, (S*)&t.s, b, c, d); }
extern "C" void *func_0203bb50(void *a, uint32_t b, uint32_t c, uint32_t d) {
    void *p = func_0205681c(0x70);
    return p ? mk(p, T(a), b, c, d) : p;
}
