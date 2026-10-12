/* cflags: -lang c++ -Cpp_exceptions on */
#include "ffc/types.h"
typedef void (*fn_t)(void *);
extern "C" {
void func_0209ce90(uint8_t *a, uint8_t *p, int32_t x, int32_t flag);
void func_0209d27d_unk(void);
void func_0209cc64(void *p);
void func_0209cf5c(uint8_t *a, int32_t n, int32_t x, fn_t fn, int32_t flag);
}
struct S { int32_t x; fn_t fn; };
void func_0209cf5c(uint8_t *a, int32_t n, int32_t x, fn_t fn, int32_t flag) {
    S s;
    s.x = x; s.fn = fn;
    if (s.fn == 0) return;
    uint8_t *p;
    if (flag != 0) {
        try {
        p = a;
        for (; n != 0; n--) { s.fn(p); p += s.x; }
        } catch (...) {
            func_0209ce90(a, p, s.x, flag);
            func_0209d27d_unk();
        }
        return;
    }
    for (; n != 0; n--) { s.fn(a); a += s.x; }
}
