#include "ffc/types.h"

extern uint32_t data_ov011_021cb4e8[];
extern uint32_t data_0213df18[];
extern void *func_0203c32c(void);
extern void func_02060bf4(void *p);
extern void func_020695d0(void *p);

typedef struct {
    void *vtbl;
} Obj;

void *func_ov011_021c4fa0(void *p)
{
    Obj *obj = (Obj *)p;
    void *a;
    obj->vtbl = data_ov011_021cb4e8;
    a = func_0203c32c();
    func_02060bf4(a);
    a = (void *)data_0213df18[0];
    a = *(void **)((char *)a + 0x24);
    a = *(void **)((char *)a + 0x1c);
    func_02060bf4(a);
    func_020695d0(obj);
    return obj;
}
