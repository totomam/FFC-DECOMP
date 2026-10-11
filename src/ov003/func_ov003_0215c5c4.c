#include "ffc/types.h"

typedef struct {
    uint8_t pad0[0x34];
    uint32_t f34;
    uint32_t f38;
    uint8_t pad1[0x10];
    uint32_t f4c;
} Obj;

extern void func_0205730c(Obj *p);
extern void func_ov003_0215c25c(uint32_t v, uint32_t *pair);

void func_ov003_0215c5c4(Obj *p)
{
    uint32_t pair[2];
    func_0205730c(p);
    pair[0] = p->f34;
    pair[1] = p->f38;
    func_ov003_0215c25c(p->f4c, pair);
}
