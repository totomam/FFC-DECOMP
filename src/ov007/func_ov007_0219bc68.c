#include "ffc/types.h"

extern uint32_t data_ov007_021c2b34[];
extern void func_020641a4(void *p);

typedef void (*VFn)(void *);

typedef struct Child {
    VFn *vtbl;
} Child;

typedef struct Self {
    uint32_t *vtbl;
    uint8_t pad[0x7c];
    Child *child;
} Self;

void *func_ov007_0219bc68(void *p0)
{
    Self *s = (Self *)p0;
    Child *c;

    s->vtbl = data_ov007_021c2b34;
    c = s->child;
    if (c != 0) {
        if (c != 0) {
            c->vtbl[1](c);
        }
        s->child = 0;
    }
    func_020641a4(s);
    return s;
}
