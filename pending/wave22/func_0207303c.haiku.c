#include "ffc/types.h"

typedef struct {
    void *vt;
    void *a;
    void *b;
} Obj;

extern char data_020b227c[];
extern void func_02056858(void *p);

void *func_0207303c(Obj *p) {
    p->vt = data_020b227c;
    if (p->a != 0) {
        func_02056858(p->a);
        p->a = 0;
    }
    if (p->b != 0) {
        func_02056858(p->b);
        p->b = 0;
    }
    return p;
}
