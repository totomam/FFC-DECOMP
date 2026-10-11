/* cflags: -lang c++ */
#include "ffc/types.h"
struct Arr { uint8_t *data; uint32_t count; uint32_t cap; };
extern "C" void func_020095b8(void *p);
extern "C" void func_0200b618(uint32_t x);
struct E { uint8_t pad; uint8_t v; };
inline void copy(const uint8_t &s, uint8_t &d) { d = s; }
extern "C" void func_ov003_0216ee28(Arr *a, uint32_t *src)
{
    uint8_t z = 0;
    if (a->count < a->cap) {
        uint32_t *p = (uint32_t *)(a->data + a->count * 16);
        if (p != 0) {
            *p = *src++;
            func_020095b8(p + 1);
        }
        a->count++;
    } else {
        uint32_t w;
        uint32_t x;
        uint8_t *q = (uint8_t *)&w + 1;
        *q = z;
        *(uint8_t *)&x = *q;
        func_0200b618(x);
    }
}
