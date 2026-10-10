#include "ffc/types.h"

extern uint32_t data_ov004_02158c14[];
extern void func_02056db0(void *p);

typedef void (*VFn)(void *);

typedef struct Child {
    VFn *vtbl;
} Child;

typedef struct Self {
    uint32_t *vtbl;
    uint8_t pad[0x9c];
    Child *child;
} Self;

void *func_ov004_0214aaf0(void *p0)
{
    Self *s = (Self *)p0;
    Child *c;

    s->vtbl = data_ov004_02158c14;
    c = s->child;
    if (c != 0) {
        if (c != 0) {
            c->vtbl[1](c);
        }
        s->child = 0;
    }
    func_02056db0(s);
    return s;
}
