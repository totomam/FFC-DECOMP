/* cflags: -lang c++ */
#include "ffc/types.h"

extern "C" {
extern void func_02069694(void *p, void *a, int b);
extern void func_02069600(void *p, void *obj);
}

struct V { virtual ~V() {} };
struct Num { uint32_t v; Num(uint32_t x) : v(x) {} ~Num() {} };
inline uint32_t diff(const Num &a, uint32_t b) { return a.v - b; }

extern "C" void func_ov008_021a0600(uint8_t *p)
{
    uint32_t i;

    func_02069694(p, *(void **)(p + 0xc0), 2);
    for (i = 0; i < *(uint32_t *)(p + 0xd4); i++) {
        void **arr = *(void ***)(p + 0xd0);
        func_02069600(p, arr[i]);
        {
            V *obj = (*(V ***)(p + 0xd0))[i];
            if (obj) {
                delete obj;
                (*(void ***)(p + 0xd0))[i] = 0;
            }
        }
    }
    {
        uint32_t old = *(volatile uint32_t *)(p + 0xd4);
        *(uint32_t *)(p + 0xd4) = *(volatile uint32_t *)(p + 0xd4) - old;
    }
}
