/* cflags: -lang c++ */
#include "ffc/types.h"

extern "C" {
extern void func_0200d5d4(void *object, uint32_t *counter, uint32_t value);
}

struct Num {
    int v;
    Num(int x) : v(x) {}
    ~Num() {}
};

inline int diff(const Num &a, int b) { return b - a.v; }

extern "C" void func_ov007_021bb9d4(uint8_t *p) {
    uint32_t i;
    volatile int32_t *pa = (volatile int32_t *)(p + 0xf4);
    int32_t *pb = (int32_t *)(p + 0xf4);
    int32_t first = *pa;
    int32_t second = *pb;
    *pb = diff(Num(first), second);
    for (i = 0; i < 5; i++) {
        if (*(uint32_t *)(p + 0xbc) != 0) {
            uint8_t *b8 = *(uint8_t **)(p + 0xb8);
            if (((uint32_t *)(b8 + 0x68))[i] != 0) {
                continue;
            }
        }
        if (*(int32_t *)(p + 0xf4) < *(int32_t *)(p + 0xf8)) {
            int32_t n = *(int32_t *)(p + 0xf4);
            *(int32_t *)(p + 0xf4) = n + 1;
            ((uint32_t *)(*(uint8_t **)(p + 0xf0)))[n] = i;
        } else {
            uint8_t b = 0;
            func_0200d5d4(p + 0xf0, &i, b);
        }
    }
}
