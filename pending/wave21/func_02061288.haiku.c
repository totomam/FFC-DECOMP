#include "ffc/types.h"

extern void func_02057190(void *self);
extern void func_02060ea4(void *obj, uint32_t arg);

typedef struct Inner {
    uint8_t pad[8];
    int32_t level;
} Inner;

typedef struct Outer {
    uint8_t pad0[0x34];
    uint32_t arg34;
    uint8_t pad1[0x0c];
    Inner *inner;
    int32_t state;
} Outer;

void func_02061288(void *p) {
    Outer *s = (Outer *)p;
    if (s->state == 1 && s->inner->level > 1) {
        return;
    }
    func_02057190(p);
    func_02060ea4(s->inner, s->arg34);
}
