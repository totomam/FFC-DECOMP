/* cflags: -lang c++ */
#include "ffc/types.h"
extern "C" {
extern uint32_t data_020a7d34;
extern uint32_t data_020a7d2c;
struct V { uint32_t a, b, c, d; V(uint32_t x) : a(x) {} ~V() {} };
inline uint32_t f(const V &v) { return v.a; }
void func_ov003_02155b64(uint32_t *out, uint8_t *p);
void func_ov003_02155b64(uint32_t *out, uint8_t *p)
{
    uint32_t v;
    if (*(uint8_t *)(p + 0xd2) == 1) {
        *out = data_020a7d34;
        return;
    }
    v = f(*(uint32_t *)(*(uint8_t **)(p + 0xa8) + 0x18));
    if (v == 0xfffff000) {
        *out = data_020a7d2c;
        return;
    }
    *out = v;
}
}
