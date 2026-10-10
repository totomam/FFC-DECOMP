#include "ffc/types.h"

typedef struct { uint8_t pad[0x90]; uint32_t a; uint32_t b; } T;
typedef struct { uint8_t pad[0x3c]; T *t; } S;

void func_0201b7dc(S *self) {
    T *t = self->t;
    t->a = 0;
    t->b = 0;
}
