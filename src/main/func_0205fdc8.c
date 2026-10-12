#include "ffc/types.h"

typedef struct Ent {
    uint32_t lo : 10;
    uint32_t f : 2;
    uint32_t hi : 20;
    uint32_t pad;
} Ent;

typedef struct Obj {
    uint8_t pad0[4];
    Ent *ents;
    uint8_t pad1[8];
    uint32_t count;
} Obj;

void func_0205fdc8(Obj *p, uint32_t flag) {
    uint32_t n = p->count;
    Ent *e = p->ents;
    while (n != 0) {
        n--;
        e->f = flag;
        e++;
    }
}
