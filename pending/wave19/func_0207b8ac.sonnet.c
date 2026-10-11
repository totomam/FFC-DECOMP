#include "ffc/types.h"

extern void func_0207c914(uint8_t *p, uint32_t v);

typedef struct Flags {
    uint32_t lo : 3;
    int32_t sign : 1;
} Flags;

typedef struct Obj {
    uint32_t w[0x46];
    Flags flags;
} Obj;

void func_0207b8ac(Obj **pp, uint32_t v)
{
    if (*(Obj *volatile *)pp != 0) {
        if ((*pp)->flags.sign == 0) {
            func_0207c914((uint8_t *)*pp + 0xf0, v << 8);
        }
    }
}
