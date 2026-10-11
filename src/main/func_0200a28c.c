#include "ffc/types.h"

extern void func_02009e2c(void *p, int x);
extern void func_02021338(int x);

typedef struct {
    uint8_t pad[0xc];
    uint32_t flags;
} FlagObj;

void func_0200a28c(void *p)
{
    FlagObj *o;

    func_02009e2c(p, 0);
    func_02021338(0xd1);
    o = (FlagObj *)p;
    o->flags = (o->flags & ~0xffu) | 2;
}
