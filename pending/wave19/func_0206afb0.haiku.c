#include "ffc/types.h"

extern uint8_t data_020b1c40[];
extern uint8_t data_020b1c54[];
extern void func_02056858(uint32_t arg);
extern void func_0206ad5c(void *p);
extern void func_02056844(void *p);

typedef struct {
    void *vt0;
    uint8_t pad0[0x10];
    void *vt1;
    uint8_t pad1[0x2c];
    uint32_t f44;
} func_0206afb0_obj;

void *func_0206afb0(void *p)
{
    func_0206afb0_obj *o = (func_0206afb0_obj *)p;
    o->vt0 = data_020b1c40;
    o->vt1 = data_020b1c54;
    func_02056858(o->f44);
    func_0206ad5c(o);
    func_02056844(o);
    return o;
}
