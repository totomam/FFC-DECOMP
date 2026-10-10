#include "ffc/types.h"

typedef struct Item {
    uint32_t flags;
    uint8_t pad[0x24];
} Item;

typedef struct Ctx {
    uint32_t unk0;
    Item *items;
    uint32_t unk8[2];
    uint32_t count;
} Ctx;

void func_0205f470(Ctx *s)
{
    Item *it = s->items;
    uint32_t n = s->count;
    if (n != 0) {
        do {
            uint32_t f = it->flags;
            n--;
            it->flags = (f & 0xfffffcff) | 0x200;
            it++;
        } while (n != 0);
    }
}
