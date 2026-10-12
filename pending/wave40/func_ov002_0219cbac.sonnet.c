#include "ffc/types.h"

typedef struct { uint32_t pad[3]; uint32_t flags; } Obj;
typedef struct { uint8_t pad[0x84]; Obj *s[4]; } Host;

void func_ov002_0219cbac(Host *p, int32_t idx) {
    if (idx == -1) {
        int32_t i;
        for (i = 0; i < 3; i++) {
            Obj *o = p->s[i];
            if (o != 0) {
                o->flags = (o->flags & ~0xffu) | 2;
                p->s[i] = 0;
            }
        }
        {
            Obj *o = p->s[3];
            if (o != 0) {
                o->flags = (o->flags & ~0xffu) | 2;
                p->s[3] = 0;
            }
        }
    } else {
        Obj *o = p->s[idx];
        if (o != 0) {
            o->flags = (o->flags & ~0xffu) | 2;
            p->s[idx] = 0;
        }
    }
}
