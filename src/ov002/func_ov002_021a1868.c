#include "ffc/types.h"

extern uint32_t func_ov002_021aa778(uint32_t v);

typedef struct {
    uint8_t pad[0x11c];
    uint32_t *list;
    uint32_t count;
} Owner;

uint32_t func_ov002_021a1868(Owner *o, uint32_t key) {
    uint32_t *it;
    for (it = o->list; it != (uint32_t *)((uint8_t *)o->list + o->count * 4); it++) {
        if (func_ov002_021aa778(*it) == key) {
            return *it;
        }
    }
    return 0;
}
