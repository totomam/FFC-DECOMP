#include "ffc/types.h"

extern void func_02056858(void *p);
extern char data_020b23f0[];

typedef struct {
    void *vtbl;
    uint8_t pad[0x24];
    void *f28;
} Obj;

Obj *func_02074618(Obj *p) {
    p->vtbl = data_020b23f0;
    func_02056858(p->f28);
    p->f28 = 0;
    return p;
}
