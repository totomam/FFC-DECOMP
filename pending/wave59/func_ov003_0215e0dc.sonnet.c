/* cflags: -lang c++ */
#include "ffc/types.h"
struct B { uint8_t b; };
extern "C" void func_0200d5d4(void *object, uint32_t *p, B v);
extern "C" void func_ov003_0215e0dc(uint8_t *self, uint32_t val);
inline void st(uint8_t &r, uint32_t v) { r = v; }
inline uint8_t ld(uint8_t &r) { return r; }
extern "C" void func_ov003_0215e0dc(uint8_t *self, uint32_t val) {
    uint32_t n = 0;
    uint8_t buf[2];
    if (*(volatile uint32_t*)(self + 0xc8) < *(volatile uint32_t*)(self + 0xcc)) {
        n = *(volatile uint32_t*)(self + 0xc8) + 1;
        *(volatile uint32_t*)(self + 0xc8) = n;
        (*(uint32_t**)(self + 0xc4))[n - 1] = val;
        return;
    }
    st(buf[1], n);
    B y; y.b = ld(buf[1]);
    func_0200d5d4(self + 0xc4, &val, y);
}
