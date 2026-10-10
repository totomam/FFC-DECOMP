#include "ffc/types.h"

extern uint32_t data_ov003_0217b4fc[];
extern void func_02056db0(void *p);

typedef void (*VFn)(void *);

typedef struct Child {
    VFn *vtbl;
} Child;

typedef struct Self {
    uint32_t *vtbl;
    uint8_t pad[0x84];
    Child *child;
} Self;

void *func_ov003_02171b28(void *p0)
{
    Self *s = (Self *)p0;
    Child *c;

    s->vtbl = data_ov003_0217b4fc;
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
