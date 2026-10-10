#include "ffc/types.h"

extern void func_02056858(uint32_t arg);
extern void func_0206ad5c(void *obj);
extern char data_020b1c40;
extern char data_020b1c54;

typedef struct {
    void *vt;
    uint8_t pad[0x10];
    void *f14;
    uint8_t pad2[0x2c];
    uint32_t f44;
} Obj;

void *func_0206af8c(Obj *p)
{
    p->vt = &data_020b1c40;
    p->f14 = &data_020b1c54;
    func_02056858(p->f44);
    func_0206ad5c(p);
    return p;
}
