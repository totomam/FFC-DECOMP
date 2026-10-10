#include "ffc/types.h"

typedef struct Outer {
    uint8_t * volatile inner;
} Outer;

void func_02079a8c(Outer *o, uint8_t v)
{
    if (o->inner) {
        o->inner[0x40] = v;
    }
}
