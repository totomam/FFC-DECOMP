#include "ffc/types.h"

typedef struct Item {
    uint32_t pad[8];
    uint32_t f;
    uint32_t pad2;
} Item;

typedef struct Obj {
    uint8_t pad[0x24];
    Item *items;
    uint32_t count;
} Obj;

void func_02064450(Obj *o, uint32_t v) {
    uint32_t i;
    for (i = 0; i < o->count; i++) {
        o->items[i].f = (o->items[i].f & 0x3fffffff) | (v << 30);
    }
}
