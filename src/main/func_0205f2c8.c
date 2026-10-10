#include "ffc/types.h"

typedef struct Ent {
    uint32_t lo : 13;
    uint32_t f : 1;
    uint32_t hi : 18;
    uint8_t pad[0x24];
} Ent;

typedef struct Obj {
    uint8_t pad0[4];
    Ent *ents;
    uint8_t pad1[8];
    uint32_t count;
} Obj;

void func_0205f2c8(Obj *p, uint32_t flag) {
    uint32_t n = p->count;
    Ent *e = p->ents;
    while (n != 0) {
        n--;
        e->f = flag;
        e++;
    }
}
