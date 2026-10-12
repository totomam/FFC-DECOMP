/* cflags: -lang c++ */
#include "ffc/types.h"

extern "C" {
void *func_02052d90(void *mar, uint32_t index);
void func_0200d5d4(void *object, const void *src, uint32_t flag);
void func_ov005_021961ac(void *obj, uint8_t value);
}

struct Num {
    int v;
    Num(int x) : v(x) {}
    ~Num() {}
};

inline int diff(const Num &a, int b) { return a.v - b; }

extern "C" void func_ov008_021a4844(uint8_t *a)
{
    uint32_t val;
    uint8_t flag;
    uint8_t i;
    uint32_t o = 0x10C;
    uint32_t bo = o - 4;
    uint32_t co = o + 4;
    uint32_t n = *(uint32_t *)(a + o);
    *(uint32_t *)(a + o) = diff(n, n);
    i = 0;

    if (*(uint32_t *)((uint8_t *)func_02052d90(*(void **)(a + 0xBC), *(uint32_t *)(a + 0xC0)) + 8) > 0) {
        do {
            uint8_t *x = (uint8_t *)func_02052d90(*(void **)(a + 0xBC), *(uint32_t *)(a + 0xC0));
            val = *(uint16_t *)(x + *(uint32_t *)(x + 0xC) + i * 4);
            if (*(uint32_t *)(a + o) < *(uint32_t *)(a + co)) {
                uint32_t s = *(uint32_t *)(a + o);
                *(uint32_t *)(a + o) = s + 1;
                ((uint32_t *)(*(uint8_t **)(a + bo)))[s] = val;
            } else {
                flag = 0;
                func_0200d5d4(a + bo, &val, flag);
            }
            i = (uint8_t)(i + 1);
        } while (i < *(uint32_t *)((uint8_t *)func_02052d90(*(void **)(a + 0xBC), *(uint32_t *)(a + 0xC0)) + 8));
    }

    {
        uint32_t sz = *(uint32_t *)(a + o);
        if (sz == 0) {
            *(uint32_t *)(a + o + 0xC) = 0;
        } else {
            *(uint32_t *)(a + o + 0xC) = (sz - 1) >> 3;
        }
    }
    func_ov005_021961ac(*(void **)(a + 0xFC), (uint8_t)(*(uint32_t *)(a + o + 0xC) + 1));
}
