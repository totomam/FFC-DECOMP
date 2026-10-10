#include "ffc/types.h"

extern void func_02056858(void *p);
extern char data_020b23d8[];

typedef struct {
    void *vtbl;
    uint8_t pad[0x20];
    void *f24;
} Obj;

Obj *func_02074518(Obj *p) {
    p->vtbl = data_020b23d8;
    func_02056858(p->f24);
    p->f24 = 0;
    return p;
}
