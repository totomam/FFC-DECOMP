/* cflags: -lang c++ -Cpp_exceptions on */
#include "ffc/types.h"
extern "C" {
extern uint8_t *func_02056830(uint32_t size, uint32_t n);
extern void func_0209ce90(uint8_t *dst, uint8_t *src, uint32_t n, uint32_t flag);
extern void func_02056858(uint8_t *p);
uint8_t *func_0209cec8(uint32_t a, uint32_t b, uint32_t c, void (*cb)(uint8_t *), uint32_t flag);
}
struct Dtor { ~Dtor() {} };
uint8_t *func_0209cec8(uint32_t a, uint32_t b, uint32_t c, void (*cb)(uint8_t *), uint32_t flag) {
    uint8_t *p = func_02056830(c + a * b, a * b);
    if (p == 0) return 0;
    if (c != 0) {
        *(uint32_t *)(p + c - 4) = a;
        if (c >= 8) *(uint32_t *)(p + c - 8) = b;
    }
    if (cb != 0) {
        uint8_t *q = p + c;
        try {
            for (uint32_t i = a; i != 0; i--) { cb(q); q += b; }
        } catch (...) {
            if (flag) func_0209ce90(p + c, q, b, flag);
            func_02056858(p);
            throw;
        }
    }
    return p + c;
}
