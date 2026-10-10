#include "ffc/types.h"

extern void func_ov004_0215312c(void *a, uint32_t b);
extern void func_02056db0(void *p);
extern void func_02056844(void *p);
extern uint8_t data_ov004_02157c70[];

typedef struct {
    void *vtbl;
    uint8_t pad[0x88 - 4];
    void *f88;
} Obj;

void *func_ov004_02146f78(Obj *p)
{
    p->vtbl = data_ov004_02157c70;
    func_ov004_0215312c(p->f88, 0);
    func_02056db0(p);
    func_02056844(p);
    return p;
}
