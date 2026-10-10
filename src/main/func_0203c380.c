#include "ffc/types.h"

typedef struct {
    uint8_t pad[0x24];
    uint32_t f;
} Obj;

extern Obj *data_0213df18;
extern void func_0204f7a8(Obj *o, uint32_t v);

void func_0203c380(void)
{
    Obj *o = data_0213df18;
    func_0204f7a8(o, o->f);
}
