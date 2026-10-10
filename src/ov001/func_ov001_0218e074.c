#include "ffc/types.h"

extern void func_02056844(void *p);
extern void func_02056db0(void *p);
extern char data_ov001_021949c0[];

typedef struct {
    void *vtbl;
    char pad[0x94];
    void *field98;
} Obj;

void *func_ov001_0218e074(void *p0)
{
    Obj *p = (Obj *)p0;
    p->vtbl = data_ov001_021949c0;
    if (p->field98) {
        func_02056844(p->field98);
        p->field98 = 0;
    }
    func_02056db0(p);
    func_02056844(p);
    return p;
}
