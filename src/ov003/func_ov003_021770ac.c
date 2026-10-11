#include "ffc/types.h"

extern char data_ov003_0217bb40[];
extern uint32_t func_0203c304(void *p);
extern void func_020591f4(uint32_t v, int x);
extern void func_02056db0(void *p);
extern void func_02056844(void *p);

typedef struct {
    void *vtbl;
} Obj;

void *func_ov003_021770ac(void *r0)
{
    Obj *obj = (Obj *)r0;
    obj->vtbl = (void *)data_ov003_0217bb40;
    func_020591f4(func_0203c304(data_ov003_0217bb40), 0);
    func_02056db0(obj);
    func_02056844(obj);
    return obj;
}
