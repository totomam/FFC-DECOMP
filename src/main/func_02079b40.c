#include "ffc/types.h"

typedef struct B {
    uint8_t pad[0x34];
    uint16_t f34;
    uint8_t mid[2];
    uint16_t f38;
} B;

typedef struct A {
    B *volatile b;
} A;

void func_02079b40(A *a, uint16_t v) {
    if (a->b != 0) {
        a->b->f34 = 1;
        a->b->f38 = v;
    }
}
