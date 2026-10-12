#include "ffc/types.h"

typedef struct {
    uint32_t w0;
    uint32_t w1;
    uint8_t rest[0x28 - 8];
} Elem;

typedef struct {
    uint8_t pad[0x24];
    Elem *arr;
    uint32_t count;
} Obj;

void func_02064410(Obj *o, uint32_t v)
{
    uint32_t i;
    for (i = 0; i < o->count; i++) {
        Elem *e = &o->arr[i];
        e->w1 = (e->w1 & 0xfffff3ff) | ((v << 30) >> 20);
    }
}
