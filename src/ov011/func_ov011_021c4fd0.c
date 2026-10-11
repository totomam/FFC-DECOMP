#include "ffc/types.h"

typedef struct Inner { uint8_t pad[0x1c]; uint32_t v; } Inner;
typedef struct Outer { uint8_t pad[0x24]; Inner *p; } Outer;
typedef struct Obj { void *vt; } Obj;

extern uint8_t data_ov011_021cb4e8[];
extern Outer *data_0213df18;
extern uint32_t func_0203c32c(void *);
extern void func_02060bf4(uint32_t);
extern void func_020695d0(void *);
extern void func_02056844(void *);

void *func_ov011_021c4fd0(Obj *a)
{
    a->vt = (void *)data_ov011_021cb4e8;
    func_02060bf4(func_0203c32c((void *)data_ov011_021cb4e8));
    func_02060bf4(data_0213df18->p->v);
    func_020695d0(a);
    func_02056844(a);
    return a;
}
