/* cflags: -lang c++ */
#include "ffc/types.h"

extern "C" {
extern uint8_t func_02036360(const void *object);
extern void func_0200d5d4(void *object, uint32_t value);
}

struct Num {
    uint32_t v;
    Num(uint32_t x) : v(x) {}
    ~Num() {}
};

inline uint32_t diff(const Num &a, uint32_t b) { return a.v - b; }

extern "C" void func_ov011_021c79c4(uint8_t *p)
{
    uint32_t *cnt = (uint32_t *)(p + 0x128);
    uint32_t i;
    uint8_t b;

    {
        uint32_t n = *cnt;
        *cnt = diff(n, n);
    }
    for (i = 0; i < 5; i++) {
        if (p[0x336] != 0) {
            if (func_02036360(p + 0x140 + i * 0x60) != 0) {
                continue;
            }
        }
        if (cnt[0] < cnt[1]) {
            uint32_t *arr = *(uint32_t **)(p + 0x124);
            cnt[0]++;
            arr[cnt[0] - 1] = i;
        } else {
            b = 0;
            func_0200d5d4(p + 0x124, b);
        }
    }
}
