#include "ffc/types.h"

typedef struct B { int32_t x; } B;
typedef struct A { B * volatile b; } A;

void func_020799fc(A *a) {
    if (a->b) {
        a->b->x = 0;
        a->b = 0;
    }
}
