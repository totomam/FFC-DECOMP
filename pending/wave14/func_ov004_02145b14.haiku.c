/* cflags: -lang c++ */
#include "ffc/types.h"

extern "C" void func_020571d0(void *p);
extern "C" void func_ov004_0214541c(void *a, uint32_t b);

struct Holder {
    uint32_t v;
    Holder(uint32_t x) : v(x) {}
    ~Holder() {}
};

extern "C" void func_ov004_02145b14(uint8_t *p) {
    Holder h(*(uint32_t *)(p + 0x34));
    func_020571d0(p);
    func_ov004_0214541c(*(void **)(p + 0x40), h.v);
}
