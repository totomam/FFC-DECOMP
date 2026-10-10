#include "ffc/types.h"

typedef uint32_t (*FnPtr)(uint32_t, uint32_t, uint32_t);

typedef struct {
    uint8_t pad[0x44];
    FnPtr fn;
    uint32_t arg;
} Obj;

uint32_t func_0207401c(uint32_t a, uint32_t b, Obj *p)
{
    return p->fn(a, b, p->arg);
}
