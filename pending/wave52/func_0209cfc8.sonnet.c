/* cflags: -lang c++ -Cpp_exceptions on */
#include "ffc/types.h"
extern "C" {
void func_0209cce4(void);
void func_0209cc64(void *p);
void func_0209d27d_unk(void);
}
struct A { int x; ~A() { func_0209cc64(this); } };
extern "C" void func_0209cfc8(uint8_t *base, uint32_t count, uint32_t stride, void (*fn)(uint8_t *)) {
    if (fn == 0) return;
    uint8_t *p = base + count * stride;
    if (count == 0) return;
    try {
        do {
            p = p - stride;
            fn(p);
            count--;
        } while (count != 0);
    } catch (...) {
        A a;
        func_0209cce4();
    }
}
