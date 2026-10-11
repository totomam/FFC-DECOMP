#include "ffc/types.h"

typedef struct {
    uint32_t flags;
    uint16_t aux;
    uint16_t pad;
} Item;

typedef struct {
    uint32_t unk0;
    Item *items;
    uint32_t unk8;
    uint32_t unkC;
    uint32_t count;
} Obj;

void func_0205fe18(Obj *p) {
    uint32_t n = p->count;
    if (n != 0) {
        Item *it = p->items;
        do {
            uint32_t f = 0;
            it->aux = 0;
            it->flags = (f & 0xfffffcff) | 0x200;
            it++;
            n--;
        } while (n != 0);
    }
}
