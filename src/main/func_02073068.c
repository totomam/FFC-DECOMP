#include "ffc/types.h"

typedef struct {
    void *vt;
    void *a;
    void *b;
} Obj;

extern char data_020b227c[];
extern void func_02056858(void *p);
extern void func_02056844(void *p);

void *func_02073068(Obj *p) {
    p->vt = data_020b227c;
    if (p->a != 0) {
        func_02056858(p->a);
        p->a = 0;
    }
    if (p->b != 0) {
        func_02056858(p->b);
        p->b = 0;
    }
    func_02056844(p);
    return p;
}
