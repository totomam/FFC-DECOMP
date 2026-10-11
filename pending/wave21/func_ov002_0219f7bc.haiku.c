#include "ffc/types.h"

extern char data_ov002_021d4cb0[];
extern void func_02021338(uint32_t arg);
extern void func_02056db0(void *obj);

typedef struct {
    void *vtbl;
    uint8_t pad[0x80];
    uint8_t flag;
} Obj;

void *func_ov002_0219f7bc(void *a0)
{
    Obj *o = (Obj *)a0;
    o->vtbl = data_ov002_021d4cb0;
    if (o->flag == 0) {
        func_02021338(0x40);
    }
    func_02056db0(o);
    return o;
}
