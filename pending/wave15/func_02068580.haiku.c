#include "ffc/types.h"

typedef struct {
    uint8_t pad[0x38];
    uint32_t cur;
    uint32_t idx;
} Obj;

void func_02068580(Obj *o, volatile uint32_t v, ...)
{
    uint32_t tmp[2];
    tmp[0] = v;
    if (o->cur != v) {
        o->idx = 0;
        o->cur = v;
    }
}
