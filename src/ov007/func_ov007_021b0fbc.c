#include "ffc/types.h"

typedef struct Obj {
    void *vt;
    uint8_t pad[0x88];
    uint8_t flag;
} Obj;

extern char data_ov007_021c5bec[];
extern void func_02076dbc(void *p);

Obj *func_ov007_021b0fbc(Obj *p, uint8_t v)
{
    func_02076dbc(p);
    p->vt = data_ov007_021c5bec;
    p->flag = v;
    return p;
}
