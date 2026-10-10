#include "ffc/types.h"

extern void func_02056844(void *p);
extern void func_ov001_0218e0a8(void *p);
extern char data_ov007_021c5e68[];

typedef struct {
    void *vtbl;
    char pad[0xb8 - 4];
    void *fieldbc;
} Obj;

void *func_ov007_021b1ed0(void *p0)
{
    Obj *p = (Obj *)p0;
    p->vtbl = data_ov007_021c5e68;
    if (p->fieldbc) {
        func_02056844(p->fieldbc);
        p->fieldbc = 0;
    }
    func_ov001_0218e0a8(p);
    func_02056844(p);
    return p;
}
