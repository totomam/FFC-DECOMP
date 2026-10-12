#include "ffc/types.h"

typedef struct Obj {
    uint32_t f0;
    uint32_t pad4[4];
    struct Obj *f14;
    struct Obj *f18;
    uint32_t f1c;
    uint32_t f20;
} Obj;

extern void *func_02088978(void);
extern void func_0208898c(void *p);
extern void func_02088350(void *p);
extern uint32_t data_02141868[];

void func_02088548(Obj *a)
{
    void *r4 = func_02088978();
    Obj *n;
    Obj *p;

    if (a->f0 == 0) {
        func_0208898c(r4);
        return;
    }
    n = a->f18;
    if (n == 0) {
        data_02141868[2] = (uint32_t)a->f14;
    } else {
        n->f14 = a->f14;
    }
    p = a->f14;
    if (p != 0) {
        p->f18 = n;
    } else {
        data_02141868[1] = (uint32_t)n;
        if (n != 0) {
            func_02088350(n);
        }
    }
    a->f0 = 0;
    a->f1c = 0;
    a->f20 = 0;
    func_0208898c(r4);
}
