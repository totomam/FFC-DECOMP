#include "ffc/types.h"

typedef struct Outer {
    uint8_t * volatile inner;
} Outer;

void func_02079a7c(Outer *o, uint8_t v)
{
    if (o->inner) {
        o->inner[0x41] = v;
    }
}
