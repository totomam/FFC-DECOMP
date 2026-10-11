/* cflags: -lang c++ */
#include "ffc/types.h"

extern "C" {

extern uint32_t data_020b0c34;

typedef struct {
    uint32_t a;
    uint32_t b;
} S;

struct Num {
    int v;
    Num(int x) : v(x) {}
};

inline int diff(Num a, int b) { return a.v - b; }

void func_0205719c(uint8_t *p, S s) {
    int z = 0;
    uint32_t c = *(uint32_t *)(p + 0x0c);
    c &= ~0xffu;
    *(int32_t *)(p + 0x1c) = diff(z, 1);
    *(int32_t *)(p + 0x24) = diff(z, 1);
    *(uint32_t **)(p + 0x00) = &data_020b0c34;
    *(uint32_t *)(p + 0x0c) = c;
    *(uint32_t *)(p + 0x38) = s.a;
    *(uint8_t *)(p + 0x15) = 0;
    *(uint8_t *)(p + 0x13) = 0;
    *(uint8_t *)(p + 0x14) = 0;
    *(uint32_t *)(p + 0x2c) = 1;
    *(uint32_t *)(p + 0x30) = 0;
    *(uint32_t *)(p + 0x3c) = s.b;
    *(uint8_t *)(p + 0x15) = 1;
}

}
