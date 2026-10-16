#include "ffc/types.h"
typedef struct { uint32_t a, b; } Pair;
typedef void (*Fn)(void*);
extern Pair data_020aea00;
void func_02039790(uint8_t *self) {
    (*(Fn**)self)[4](self);
    Pair pr = data_020aea00;
    *(Pair*)(self + 0x80) = pr;
}
