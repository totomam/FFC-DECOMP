#include "ffc/types.h"

extern uint8_t data_ov007_021c3558[];
extern uint8_t data_ov007_021c3574[];
extern void func_02054558(void *p);
extern void func_020544e4(void *p);

typedef struct {
    void *vt;
    uint8_t pad[0x10];
    void *f14;
} Obj;

Obj *func_ov007_021a0974(Obj *p) {
    p->vt = data_ov007_021c3558;
    p->f14 = data_ov007_021c3574;
    func_02054558(&p->f14);
    func_020544e4(&p->f14);
    return p;
}
