/* cflags: -lang c++ */
#include "ffc/types.h"

extern "C" {
extern void func_02069694(void *p, void *a, int b);
extern void func_02069600(void *p, void *obj);
}

struct Num { uint32_t v; Num(uint32_t x) : v(x) {} ~Num() {} };
inline uint32_t diff(const Num &a, uint32_t b) { return a.v - b; }

extern "C" void func_ov008_0219f374(uint8_t *p)
{
    uint32_t i;

    func_02069694(p, *(void **)(p + 0xbc), 2);
    for (i = 0; i < *(uint32_t *)(p + 0xc8); i++) {
        void **arr = *(void ***)(p + 0xc4);
        func_02069600(p, arr[i]);
        {
            void *obj = (*(void ***)(p + 0xc4))[i];
            if (obj != 0 && obj != 0) {
                void (*fn)(void *) = (void (*)(void *))(((void **)(*(void **)obj))[1]);
                fn(obj);
                (*(void ***)(p + 0xc4))[i] = 0;
            }
        }
    }
    {
        uint32_t old = *(volatile uint32_t *)(p + 0xc8);
        *(uint32_t *)(p + 0xc8) = *(volatile uint32_t *)(p + 0xc8) - old;
    }
}
