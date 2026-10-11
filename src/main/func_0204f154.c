#include "ffc/types.h"

typedef struct {
    uint32_t lo : 13;
    uint32_t f : 3;
    uint32_t hi : 16;
} B;

typedef struct {
    uint32_t pad[3];
    B w;
} S;

void func_0204f154(S *s, uint32_t n) {
    uint32_t f;
    if (n == 3) {
        n = 2;
    }
    f = s->w.f;
    s->w.f = f & ~(1u << n);
}
