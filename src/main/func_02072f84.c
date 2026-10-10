#include "ffc/types.h"

typedef struct Obj {
    uint8_t pad[0x14];
    uint8_t *inner;
} Obj;

extern void func_02056844(Obj *p);

Obj *func_02072f84(Obj *p) {
    uint8_t *q = p->inner;
    q += 0x24;
    *q = 0;
    func_02056844(p);
    return p;
}
