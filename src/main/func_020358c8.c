#include "ffc/types.h"

extern char data_020ae478[];
extern uint32_t data_02139508[];
extern void func_020358f8(void *p);

typedef struct {
    void *vt;
    uint32_t a;
    uint32_t b;
    uint32_t c;
} Obj;

void *func_020358c8(void *param) {
    Obj *p = (Obj *)param;
    uint32_t i;
    p->vt = data_020ae478;
    p->a = 0;
    p->b = 0;
    p->c = 0;
    func_020358f8(param);
    for (i = 0; i < 0x15; i++) {
        data_02139508[i] = 0;
    }
    return p;
}
