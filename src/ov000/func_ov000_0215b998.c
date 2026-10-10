#include "ffc/types.h"

typedef void (*fn_t)(uint32_t, uint32_t, uint32_t);

typedef struct Obj {
    uint8_t pad[0x78];
    fn_t fn;
    uint32_t arg;
} Obj;

extern uint32_t data_ov000_02170064;

void func_ov000_0215b998(uint32_t a, uint32_t b)
{
    Obj *o = *(Obj **)((uint8_t *)&data_ov000_02170064 + 4);
    o->fn(a, b, o->arg);
}
