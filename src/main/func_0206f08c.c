#include "ffc/types.h"

extern uint8_t data_020b1ef4[];
extern uint8_t data_020b1f08[];
extern void func_02054738(void *p);
extern void func_02054844(void *p);

typedef struct {
    void *vt;
    uint8_t pad[0x10];
    void *f14;
} Obj;

Obj *func_0206f08c(Obj *p) {
    p->vt = data_020b1ef4;
    p->f14 = data_020b1f08;
    func_02054738(&p->f14);
    func_02054844(&p->f14);
    return p;
}
